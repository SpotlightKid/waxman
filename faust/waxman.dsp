declare name "Waxman";
declare description "Let's rock, man!";
declare author "Chris Arndt";
declare license "MIT";

import("stdfaust.lib");

gain = hslider("[0] Gain [symbol: gain] [abbrev: gain] [unit: dB] [tooltip: Gain applied to output (-90.0..30.0 dB)]", -6.0, -90.0, 30.0, 0.1) : si.smoo;

process = _ * ba.db2linear(gain);
