declare name "Waxman";
declare version "0.1";
declare author "Christopher Arndt";
declare license "MIT";
declare description "Let's rock, man!";

import("stdfaust.lib");


noise_gate(g) = ef.gate_mono(thresh, 0.0001, 0.05, 0.05)
with {
    thresh = g(hslider("[1] Threshold [symbol: gate_threshold] [unit:dB]", -70.0, -90.0, 0, 0.1));
};

pre_eq = hp : ls : lp
with {
    hp = fi.highpass(1, 200.0);
    ls = fi.lowshelf(1, -20, 1000.0);
    lp = fi.lowpass(1, 2000.0);
};


comp(g) = pre_eq : co.FBcompressor_N_chan(strength, thresh, att, rel, 4.0, 0, 0, _, 1)
with {
    strength = g(hslider("[1] Strength [symbol: comp_strength] ", 30, 0.0, 100, 0.1) / 100);
    thresh = g(hslider("[2] Threshold [symbol: comp_threshold] [unit:dB]", -20.0, -50.0, 0, 0.1));
    att = g(hslider("[3] Attack [symbol: comp_attack] [unit:ms]", 0.5, 0.01, 100, 0.01) / 1000);
    rel = g(hslider("[4] Release [symbol: comp_release] [unit:ms]", 80.0, 0.01, 300, 0.01) / 1000);
};


dist(g, x) = (curve + 1.0) * x1 / (1.0 + abs(curve * x1)) : *(ba.db2linear(output))
with {
    x1 = x * pregain;
    pregain = g(hslider("[1] Gain [symbol: dist_gain]", 25.0, 1.0, 100.0, 0.01) / 2) : si.smoo;
    curve = g(hslider("[2] Curve [symbol: dist_curve]", 3.5, 0.0, 10.0, 0.01));
    output = g(hslider("[3] Output [unit:dB] [symbol:dist_output]", -6.0, -90.0, 10.0, 0.1) : si.smoo);
};


eq(g) = seq(i, 8, eq_n(i)) : *(ba.db2linear(output))
with {
    freqs = waveform{100.0, 200.0, 400.0, 800.0, 1600.0, 3000.0, 6000.0, 12000.0};
    eq_n(n) = fi.peak_eq_cq(lvl, freq, q)
    with {
        band = n + 1;
        freq = freqs, n : rdtable;
        lvl = g(vslider("[0%band] Band %band [symbol:eq_band_%band]", 0, -12, 12, 0.1));
    };
    q = g(vslider("[09] Q [symbol:eq_q]", 1.0, 0.1, 2.0, 0.01));
    output = g(vslider("[10] Output [symbol:eq_output] [unit:dB]", 0, -15, 15, 0.01)) : si.smoo;
};


gate_group(x) = vgroup("[1] Noise Gate", x);

comp_group(x) = vgroup("[2] Compressor + Pre-EQ", x);
comp_bp = comp_group(checkbox("[0] Bypass Compressor [symbol:comp_bypass]"));

eq_group(x) = hgroup("[3] EQ", x);
eq_bp = eq_group(checkbox("[00] Bypass EQ [symbol:eq_bypass]"));

dist_group(x) = vgroup("[3] Distortion", x);
dist_bp = dist_group(checkbox("[0] Bypass Distortion [symbol:dist_bypass]"));


process = noise_gate(gate_group)
    : *(ba.db2linear(12))
    : ba.bypass_fade(ba.sec2samp(0.02), comp_bp, comp(comp_group))
    : ba.bypass_fade(ba.sec2samp(0.02), dist_bp, dist(dist_group))
    : ba.bypass_fade(ba.sec2samp(0.02), eq_bp, eq(eq_group));
