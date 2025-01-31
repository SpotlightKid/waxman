declare name "Waxman";
declare version "0.1";
declare author "Christopher Arndt";
declare license "MIT";
declare description "Let's rock, man!";

import("stdfaust.lib");


pre_eq = hp : ls : lp
with {
    hp = fi.highpass(1, 200.0);
    ls = fi.lowshelf(1, -20, 1000.0);
    lp = fi.lowpass(1, 2000.0);
};


fb_comp_mono = co.FBcompressor_N_chan(strength, thresh, att, rel, 4.0, 0, 0, _, 1)
with {
    compgroup(x) = vgroup("Compressor", x);
    strength = compgroup(hslider("[1] Strength", 30, 0.0, 100, 0.1) / 100);
    thresh = compgroup(hslider("[2] Threshold [unit:dB]", -20.0, -50.0, 0, 0.01));
    att = compgroup(hslider("[3] Attack [unit:ms]", 0.5, 0.01, 100, 0.01) / 1000);
    rel = compgroup(hslider("[4] Release [unit:ms]", 80.0, 0.01, 300, 0.01) / 1000);
};


dist(x) = (curve + 1.0) * x1 / (1.0 + abs(curve * x1)) : *(ba.db2linear(output))
with {
    dist_group(x) = vgroup("Distortion", x);
    x1 = x * pregain;
    pregain = dist_group(hslider("[1] Gain", 25.0, 1.0, 100.0, 0.01) / 2) : si.smoo;
    curve = dist_group(hslider("[2] Curve", 3.5, 0.0, 10.0, 0.01));
    output = dist_group(hslider("[3] Output [unit:dB] [symbol:dist_output]", -6.0, -90.0, 10.0, 0.1) : si.smoo);
};


eq = seq(i, 8, eq_n(i)) : *(ba.db2linear(output))
with {
    eq_group(x) = hgroup("EQ", x);
    q = eq_group(vslider("[1] Q", 1.0, 0.1, 2.0, 0.01));
    output = eq_group(vslider("[2] Output [unit:dB] [symbol:eq_output]", 0, -15, 15, 0.01)) : si.smoo;
    freqs = waveform{100.0, 200.0, 400.0, 800.0, 1600.0, 3000.0, 6000.0, 12000.0};
    eq_n(n) = fi.peak_eq_cq(lvl_sldr, freq, q)
    with {
        freq = freqs, n : rdtable;
        lvl_sldr = eq_group(vslider("F %n", 0, -12, 12, 0.1));
    };
};


out_group(x) = vgroup("Output", x);
comp_bp = out_group(checkbox("[1] Bypass Compressor"));
dist_bp = out_group(checkbox("[2] Bypass Distortion"));
eq_bp = out_group(checkbox("[3] Bypass EQ"));


process = *(ba.db2linear(12))
    : pre_eq
    : ba.bypass_fade(ba.sec2samp(0.02), comp_bp, fb_comp_mono)
    : ba.bypass_fade(ba.sec2samp(0.02), dist_bp, dist)
    : ba.bypass_fade(ba.sec2samp(0.02), eq_bp, eq);
