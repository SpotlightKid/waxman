//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/SpotlightKid/faustdoctor).
//
// Source: waxman.dsp
// Name: Waxman
// Author: Christopher Arndt
// Copyright: 
// License: MIT
// Version: 0.1
// FAUST version: 2.78.6
// FAUST compilation options: -a /home/chris/tmp/tmphz6ymr54.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
//------------------------------------------------------------------------------


#include "Waxman.hpp"
#include <utility>
#include <cmath>

class Waxman::BasicDsp {
public:
    virtual ~BasicDsp() {}
};

//------------------------------------------------------------------------------
// Begin the Faust code section

namespace {

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

typedef Waxman::BasicDsp dsp;

} // namespace

#define FAUSTDR_VIRTUAL // do not declare any methods virtual
#define FAUSTDR_PRIVATE public // do not hide any members
#define FAUSTDR_PROTECTED public // do not hide any members

// define the DSP in the anonymous namespace
#define FAUSTDR_BEGIN_NAMESPACE namespace {
#define FAUSTDR_END_NAMESPACE }

#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTDR_PRIVATE
#   define FAUSTDR_PRIVATE private
#endif
#ifndef FAUSTDR_PROTECTED
#   define FAUSTDR_PROTECTED protected
#endif
#ifndef FAUSTDR_VIRTUAL
#   define FAUSTDR_VIRTUAL virtual
#endif

#ifndef FAUSTDR_BEGIN_NAMESPACE
#   define FAUSTDR_BEGIN_NAMESPACE
#endif
#ifndef FAUSTDR_END_NAMESPACE
#   define FAUSTDR_END_NAMESPACE
#endif

FAUSTDR_BEGIN_NAMESPACE

// END PREAMBLE
// START INTRINSICS
// END INTRINSICS
// START CLASS CODE
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTDR_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTDR_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

const static float fmydspSIG0Wave0[8] = {1e+02f,2e+02f,4e+02f,8e+02f,1.6e+03f,3e+03f,6e+03f,1.2e+04f};
class mydspSIG0 {
    
  FAUSTDR_PRIVATE:
    
    int fmydspSIG0Wave0_idx;
    
  public:
    
    int getNumInputsmydspSIG0() {
        return 0;
    }
    int getNumOutputsmydspSIG0() {
        return 1;
    }
    
    void instanceInitmydspSIG0(int sample_rate) {
        fmydspSIG0Wave0_idx = 0;
    }
    
    void fillmydspSIG0(int count, float* table) {
        for (int i1 = 0; i1 < count; i1 = i1 + 1) {
            table[i1] = fmydspSIG0Wave0[fmydspSIG0Wave0_idx];
            fmydspSIG0Wave0_idx = (1 + fmydspSIG0Wave0_idx) % 8;
        }
    }

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float mydsp_faustpower2_f(float value) {
    return value * value;
}
static float ftbl0mydspSIG0[8];

class mydsp : public dsp {
    
 FAUSTDR_PRIVATE:
    
    FAUSTFLOAT fCheckbox0;
    int fSampleRate;
    float fConst0;
    float fConst1;
    float fRec0[2];
    FAUSTFLOAT fHslider0;
    float fConst2;
    float fConst3;
    float fRec2[2];
    int iVec0[2];
    int iConst4;
    int iRec3[2];
    float fConst5;
    float fRec1[2];
    FAUSTFLOAT fHslider1;
    FAUSTFLOAT fHslider2;
    float fConst6;
    FAUSTFLOAT fHslider3;
    float fRec5[2];
    FAUSTFLOAT fHslider4;
    float fConst7;
    float fConst8;
    float fConst9;
    float fVec1[2];
    float fConst10;
    float fConst11;
    float fRec8[2];
    float fConst12;
    float fConst13;
    float fConst14;
    float fRec7[2];
    float fRec9[2];
    float fVec2[2];
    float fConst15;
    float fConst16;
    float fConst17;
    float fRec6[2];
    float fRec4[2];
    FAUSTFLOAT fCheckbox1;
    float fRec10[2];
    float fConst18;
    float fConst19;
    FAUSTFLOAT fHslider5;
    float fConst20;
    float fRec11[2];
    FAUSTFLOAT fHslider6;
    FAUSTFLOAT fHslider7;
    float fRec12[2];
    FAUSTFLOAT fCheckbox2;
    float fRec13[2];
    float fConst21;
    float fConst22;
    float fConst23;
    FAUSTFLOAT fVslider0;
    float fConst24;
    float fConst25;
    FAUSTFLOAT fVslider1;
    float fConst26;
    FAUSTFLOAT fVslider2;
    float fRec14[2];
    float fConst27;
    float fConst28;
    float fConst29;
    FAUSTFLOAT fVslider3;
    float fConst30;
    float fConst31;
    float fConst32;
    float fConst33;
    float fConst34;
    FAUSTFLOAT fVslider4;
    float fConst35;
    float fConst36;
    float fConst37;
    float fConst38;
    float fConst39;
    FAUSTFLOAT fVslider5;
    float fConst40;
    float fConst41;
    float fConst42;
    float fConst43;
    float fConst44;
    FAUSTFLOAT fVslider6;
    float fConst45;
    float fConst46;
    float fConst47;
    float fConst48;
    float fConst49;
    FAUSTFLOAT fVslider7;
    float fConst50;
    float fConst51;
    float fConst52;
    float fConst53;
    float fConst54;
    FAUSTFLOAT fVslider8;
    float fConst55;
    float fConst56;
    float fConst57;
    float fConst58;
    float fConst59;
    FAUSTFLOAT fVslider9;
    float fConst60;
    float fConst61;
    float fConst62;
    float fRec22[3];
    float fRec21[3];
    float fRec20[3];
    float fRec19[3];
    float fRec18[3];
    float fRec17[3];
    float fRec16[3];
    float fRec15[3];
    
 public:
    mydsp() {
    }
    
    void metadata(Meta* m) { 
        m->declare("analyzers.lib/amp_follower_ar:author", "Jonatan Liljedahl, revised by Romain Michon");
        m->declare("analyzers.lib/name", "Faust Analyzer Library");
        m->declare("analyzers.lib/version", "1.2.0");
        m->declare("author", "Christopher Arndt");
        m->declare("basics.lib/bypass1:author", "Julius Smith");
        m->declare("basics.lib/name", "Faust Basic Element Library");
        m->declare("basics.lib/version", "1.21.0");
        m->declare("compile_options", "-a /home/chris/tmp/tmphz6ymr54.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
        m->declare("compressors.lib/FBcompressor_N_chan:author", "Bart Brouns");
        m->declare("compressors.lib/FBcompressor_N_chan:license", "GPLv3");
        m->declare("compressors.lib/name", "Faust Compressor Effect Library");
        m->declare("compressors.lib/peak_compression_gain_N_chan_db:author", "Bart Brouns");
        m->declare("compressors.lib/peak_compression_gain_N_chan_db:license", "GPLv3");
        m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
        m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
        m->declare("compressors.lib/version", "1.6.0");
        m->declare("description", "Let's rock, man!");
        m->declare("filename", "waxman.dsp");
        m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
        m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/fir:author", "Julius O. Smith III");
        m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/highpass:author", "Julius O. Smith III");
        m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/iir:author", "Julius O. Smith III");
        m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
        m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
        m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
        m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/lowshelf:author", "Julius O. Smith III");
        m->declare("filters.lib/lowshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/lowshelf:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/name", "Faust Filters Library");
        m->declare("filters.lib/peak_eq:author", "Julius O. Smith III");
        m->declare("filters.lib/peak_eq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/peak_eq:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/peak_eq_cq:author", "Julius O. Smith III");
        m->declare("filters.lib/peak_eq_cq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/peak_eq_cq:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/tf1:author", "Julius O. Smith III");
        m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
        m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/tf2:author", "Julius O. Smith III");
        m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
        m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
        m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
        m->declare("filters.lib/version", "1.6.0");
        m->declare("license", "MIT");
        m->declare("maths.lib/author", "GRAME");
        m->declare("maths.lib/copyright", "GRAME");
        m->declare("maths.lib/license", "LGPL with exception");
        m->declare("maths.lib/name", "Faust Math Library");
        m->declare("maths.lib/version", "2.8.1");
        m->declare("misceffects.lib/gate_gain_mono:author", "Julius O. Smith III");
        m->declare("misceffects.lib/gate_gain_mono:license", "STK-4.3");
        m->declare("misceffects.lib/gate_mono:author", "Julius O. Smith III");
        m->declare("misceffects.lib/gate_mono:license", "STK-4.3");
        m->declare("misceffects.lib/name", "Misc Effects Library");
        m->declare("misceffects.lib/version", "2.5.0");
        m->declare("name", "Waxman");
        m->declare("platform.lib/name", "Generic Platform Library");
        m->declare("platform.lib/version", "1.3.0");
        m->declare("routes.lib/name", "Faust Signal Routing Library");
        m->declare("routes.lib/version", "1.2.0");
        m->declare("signals.lib/name", "Faust Signal Routing Library");
        m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
        m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
        m->declare("signals.lib/version", "1.6.0");
        m->declare("version", "0.1");
    }

    FAUSTDR_VIRTUAL int getNumInputs() {
        return 1;
    }
    FAUSTDR_VIRTUAL int getNumOutputs() {
        return 1;
    }
    
    static void classInit(int sample_rate) {
        mydspSIG0* sig0 = newmydspSIG0();
        sig0->instanceInitmydspSIG0(sample_rate);
        sig0->fillmydspSIG0(8, ftbl0mydspSIG0);
        deletemydspSIG0(sig0);
    }
    
    FAUSTDR_VIRTUAL void instanceConstants(int sample_rate) {
        fSampleRate = sample_rate;
        fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
        fConst1 = 5e+01f / fConst0;
        fConst2 = std::exp(-(1e+04f / fConst0));
        fConst3 = 1.0f - fConst2;
        iConst4 = int(0.05f * fConst0);
        fConst5 = std::exp(-(2e+01f / fConst0));
        fConst6 = 1.0f / fConst0;
        fConst7 = std::tan(628.31854f / fConst0);
        fConst8 = 1.0f / fConst7;
        fConst9 = 1.0f - fConst8;
        fConst10 = 3.9810717f / fConst7;
        fConst11 = 1.0f / (fConst8 + 1.0f);
        fConst12 = 1.0f / std::tan(3141.5928f / fConst0);
        fConst13 = 1.0f - fConst12;
        fConst14 = 1.0f / (fConst12 + 1.0f);
        fConst15 = 1.0f / std::tan(6283.1855f / fConst0);
        fConst16 = 1.0f - fConst15;
        fConst17 = 1.0f / (fConst15 + 1.0f);
        fConst18 = 44.1f / fConst0;
        fConst19 = 1.0f - fConst18;
        fConst20 = 22.05f / fConst0;
        fConst21 = ftbl0mydspSIG0[7];
        fConst22 = 3.1415927f / fConst0;
        fConst23 = std::tan(fConst22 * fConst21);
        fConst24 = 6.2831855f / fConst0;
        fConst25 = fConst21 / std::sin(fConst24 * fConst21);
        fConst26 = 1.0f / fConst23;
        fConst27 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst23);
        fConst28 = ftbl0mydspSIG0[6];
        fConst29 = std::tan(fConst22 * fConst28);
        fConst30 = fConst28 / std::sin(fConst24 * fConst28);
        fConst31 = 1.0f / fConst29;
        fConst32 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst29);
        fConst33 = ftbl0mydspSIG0[5];
        fConst34 = std::tan(fConst22 * fConst33);
        fConst35 = fConst33 / std::sin(fConst24 * fConst33);
        fConst36 = 1.0f / fConst34;
        fConst37 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst34);
        fConst38 = ftbl0mydspSIG0[4];
        fConst39 = std::tan(fConst22 * fConst38);
        fConst40 = fConst38 / std::sin(fConst24 * fConst38);
        fConst41 = 1.0f / fConst39;
        fConst42 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst39);
        fConst43 = ftbl0mydspSIG0[3];
        fConst44 = std::tan(fConst22 * fConst43);
        fConst45 = fConst43 / std::sin(fConst24 * fConst43);
        fConst46 = 1.0f / fConst44;
        fConst47 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst44);
        fConst48 = ftbl0mydspSIG0[2];
        fConst49 = std::tan(fConst22 * fConst48);
        fConst50 = fConst48 / std::sin(fConst24 * fConst48);
        fConst51 = 1.0f / fConst49;
        fConst52 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst49);
        fConst53 = ftbl0mydspSIG0[1];
        fConst54 = std::tan(fConst22 * fConst53);
        fConst55 = fConst53 / std::sin(fConst24 * fConst53);
        fConst56 = 1.0f / fConst54;
        fConst57 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst54);
        fConst58 = ftbl0mydspSIG0[0];
        fConst59 = std::tan(fConst22 * fConst58);
        fConst60 = fConst58 / std::sin(fConst24 * fConst58);
        fConst61 = 1.0f / fConst59;
        fConst62 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst59);
    }
    
    FAUSTDR_VIRTUAL void instanceResetUserInterface() {
        fCheckbox0 = FAUSTFLOAT(0.0f);
        fHslider0 = FAUSTFLOAT(-7e+01f);
        fHslider1 = FAUSTFLOAT(-2e+01f);
        fHslider2 = FAUSTFLOAT(8e+01f);
        fHslider3 = FAUSTFLOAT(0.5f);
        fHslider4 = FAUSTFLOAT(3e+01f);
        fCheckbox1 = FAUSTFLOAT(0.0f);
        fHslider5 = FAUSTFLOAT(25.0f);
        fHslider6 = FAUSTFLOAT(3.5f);
        fHslider7 = FAUSTFLOAT(-6.0f);
        fCheckbox2 = FAUSTFLOAT(0.0f);
        fVslider0 = FAUSTFLOAT(0.0f);
        fVslider1 = FAUSTFLOAT(1.0f);
        fVslider2 = FAUSTFLOAT(0.0f);
        fVslider3 = FAUSTFLOAT(0.0f);
        fVslider4 = FAUSTFLOAT(0.0f);
        fVslider5 = FAUSTFLOAT(0.0f);
        fVslider6 = FAUSTFLOAT(0.0f);
        fVslider7 = FAUSTFLOAT(0.0f);
        fVslider8 = FAUSTFLOAT(0.0f);
        fVslider9 = FAUSTFLOAT(0.0f);
    }
    
    FAUSTDR_VIRTUAL void instanceClear() {
        for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
            fRec0[l0] = 0.0f;
        }
        for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
            fRec2[l1] = 0.0f;
        }
        for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
            iVec0[l2] = 0;
        }
        for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
            iRec3[l3] = 0;
        }
        for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
            fRec1[l4] = 0.0f;
        }
        for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
            fRec5[l5] = 0.0f;
        }
        for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
            fVec1[l6] = 0.0f;
        }
        for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
            fRec8[l7] = 0.0f;
        }
        for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
            fRec7[l8] = 0.0f;
        }
        for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
            fRec9[l9] = 0.0f;
        }
        for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
            fVec2[l10] = 0.0f;
        }
        for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
            fRec6[l11] = 0.0f;
        }
        for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
            fRec4[l12] = 0.0f;
        }
        for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
            fRec10[l13] = 0.0f;
        }
        for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
            fRec11[l14] = 0.0f;
        }
        for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
            fRec12[l15] = 0.0f;
        }
        for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
            fRec13[l16] = 0.0f;
        }
        for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
            fRec14[l17] = 0.0f;
        }
        for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
            fRec22[l18] = 0.0f;
        }
        for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
            fRec21[l19] = 0.0f;
        }
        for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
            fRec20[l20] = 0.0f;
        }
        for (int l21 = 0; l21 < 3; l21 = l21 + 1) {
            fRec19[l21] = 0.0f;
        }
        for (int l22 = 0; l22 < 3; l22 = l22 + 1) {
            fRec18[l22] = 0.0f;
        }
        for (int l23 = 0; l23 < 3; l23 = l23 + 1) {
            fRec17[l23] = 0.0f;
        }
        for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
            fRec16[l24] = 0.0f;
        }
        for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
            fRec15[l25] = 0.0f;
        }
    }
    
    FAUSTDR_VIRTUAL void init(int sample_rate) {
        classInit(sample_rate);
        instanceInit(sample_rate);
    }
    
    FAUSTDR_VIRTUAL void instanceInit(int sample_rate) {
        instanceConstants(sample_rate);
        instanceResetUserInterface();
        instanceClear();
    }
    
    FAUSTDR_VIRTUAL mydsp* clone() {
        return new mydsp();
    }
    
    FAUSTDR_VIRTUAL int getSampleRate() {
        return fSampleRate;
    }
    
    FAUSTDR_VIRTUAL void buildUserInterface(UI* ui_interface) {
        ui_interface->openVerticalBox("Waxman");
        ui_interface->declare(0, "1", "");
        ui_interface->openVerticalBox("Noise Gate");
        ui_interface->declare(&fHslider0, "1", "");
        ui_interface->declare(&fHslider0, "symbol", "gate_threshold");
        ui_interface->declare(&fHslider0, "unit", "dB");
        ui_interface->addHorizontalSlider("Threshold", &fHslider0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.1f));
        ui_interface->closeBox();
        ui_interface->declare(0, "2", "");
        ui_interface->openVerticalBox("Compressor + Pre-EQ");
        ui_interface->declare(&fCheckbox0, "0", "");
        ui_interface->declare(&fCheckbox0, "symbol", "comp_bypass");
        ui_interface->addCheckButton("Bypass Compressor", &fCheckbox0);
        ui_interface->declare(&fHslider4, "1", "");
        ui_interface->declare(&fHslider4, "symbol", "comp_strength");
        ui_interface->addHorizontalSlider("Strength", &fHslider4, FAUSTFLOAT(3e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fHslider1, "2", "");
        ui_interface->declare(&fHslider1, "symbol", "comp_threshold");
        ui_interface->declare(&fHslider1, "unit", "dB");
        ui_interface->addHorizontalSlider("Threshold", &fHslider1, FAUSTFLOAT(-2e+01f), FAUSTFLOAT(-5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fHslider3, "3", "");
        ui_interface->declare(&fHslider3, "symbol", "comp_attack");
        ui_interface->declare(&fHslider3, "unit", "ms");
        ui_interface->addHorizontalSlider("Attack", &fHslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider2, "4", "");
        ui_interface->declare(&fHslider2, "symbol", "comp_release");
        ui_interface->declare(&fHslider2, "unit", "ms");
        ui_interface->addHorizontalSlider("Release", &fHslider2, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.01f), FAUSTFLOAT(3e+02f), FAUSTFLOAT(0.01f));
        ui_interface->closeBox();
        ui_interface->declare(0, "3", "");
        ui_interface->openVerticalBox("Distortion");
        ui_interface->declare(&fCheckbox1, "0", "");
        ui_interface->declare(&fCheckbox1, "symbol", "dist_bypass");
        ui_interface->addCheckButton("Bypass Distortion", &fCheckbox1);
        ui_interface->declare(&fHslider5, "1", "");
        ui_interface->declare(&fHslider5, "symbol", "dist_gain");
        ui_interface->addHorizontalSlider("Gain", &fHslider5, FAUSTFLOAT(25.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider6, "2", "");
        ui_interface->declare(&fHslider6, "symbol", "dist_curve");
        ui_interface->addHorizontalSlider("Curve", &fHslider6, FAUSTFLOAT(3.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider7, "3", "");
        ui_interface->declare(&fHslider7, "symbol", "dist_output");
        ui_interface->declare(&fHslider7, "unit", "dB");
        ui_interface->addHorizontalSlider("Output", &fHslider7, FAUSTFLOAT(-6.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
        ui_interface->closeBox();
        ui_interface->declare(0, "3", "");
        ui_interface->openHorizontalBox("EQ");
        ui_interface->declare(&fCheckbox2, "00", "");
        ui_interface->declare(&fCheckbox2, "symbol", "eq_bypass");
        ui_interface->addCheckButton("Bypass EQ", &fCheckbox2);
        ui_interface->declare(&fVslider9, "01", "");
        ui_interface->declare(&fVslider9, "symbol", "eq_band_1");
        ui_interface->addVerticalSlider("Band 1", &fVslider9, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider8, "02", "");
        ui_interface->declare(&fVslider8, "symbol", "eq_band_2");
        ui_interface->addVerticalSlider("Band 2", &fVslider8, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider7, "03", "");
        ui_interface->declare(&fVslider7, "symbol", "eq_band_3");
        ui_interface->addVerticalSlider("Band 3", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider6, "04", "");
        ui_interface->declare(&fVslider6, "symbol", "eq_band_4");
        ui_interface->addVerticalSlider("Band 4", &fVslider6, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider5, "05", "");
        ui_interface->declare(&fVslider5, "symbol", "eq_band_5");
        ui_interface->addVerticalSlider("Band 5", &fVslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider4, "06", "");
        ui_interface->declare(&fVslider4, "symbol", "eq_band_6");
        ui_interface->addVerticalSlider("Band 6", &fVslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider3, "07", "");
        ui_interface->declare(&fVslider3, "symbol", "eq_band_7");
        ui_interface->addVerticalSlider("Band 7", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider0, "08", "");
        ui_interface->declare(&fVslider0, "symbol", "eq_band_8");
        ui_interface->addVerticalSlider("Band 8", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider1, "09", "");
        ui_interface->declare(&fVslider1, "symbol", "eq_q");
        ui_interface->addVerticalSlider("Q", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fVslider2, "10", "");
        ui_interface->declare(&fVslider2, "symbol", "eq_output");
        ui_interface->declare(&fVslider2, "unit", "dB");
        ui_interface->addVerticalSlider("Output", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.01f));
        ui_interface->closeBox();
        ui_interface->closeBox();
    }
    
    FAUSTDR_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
        FAUSTFLOAT* input0 = inputs[0];
        FAUSTFLOAT* output0 = outputs[0];
        float fSlow0 = float(fCheckbox0);
        float fSlow1 = std::pow(1e+01f, 0.05f * float(fHslider0));
        float fSlow2 = float(fHslider1);
        float fSlow3 = fSlow2 + 2.0f;
        float fSlow4 = 0.001f * float(fHslider2);
        int iSlow5 = std::fabs(fSlow4) < 1.1920929e-07f;
        float fSlow6 = ((iSlow5) ? 0.0f : std::exp(-(fConst6 / ((iSlow5) ? 1.0f : fSlow4))));
        float fSlow7 = 0.001f * float(fHslider3);
        int iSlow8 = std::fabs(fSlow7) < 1.1920929e-07f;
        float fSlow9 = ((iSlow8) ? 0.0f : std::exp(-(fConst6 / ((iSlow8) ? 1.0f : fSlow7))));
        float fSlow10 = fSlow2 + -2.0f;
        float fSlow11 = 0.0005f * float(fHslider4);
        float fSlow12 = float(fCheckbox1);
        float fSlow13 = fConst20 * float(fHslider5);
        float fSlow14 = float(fHslider6);
        float fSlow15 = fConst18 * float(fHslider7);
        float fSlow16 = fSlow14 + 1.0f;
        float fSlow17 = float(fCheckbox2);
        float fSlow18 = float(fVslider0);
        int iSlow19 = fSlow18 > 0.0f;
        float fSlow20 = float(fVslider1);
        float fSlow21 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow18)) / fSlow20) * fConst25;
        float fSlow22 = fConst22 / fSlow20;
        float fSlow23 = fSlow22 * fConst25;
        float fSlow24 = ((iSlow19) ? fSlow23 : fSlow21);
        float fSlow25 = (fConst26 + fSlow24) / fConst23 + 1.0f;
        float fSlow26 = fConst18 * float(fVslider2);
        float fSlow27 = ((iSlow19) ? fSlow21 : fSlow23);
        float fSlow28 = (fConst26 - fSlow27) / fConst23 + 1.0f;
        float fSlow29 = (fConst26 - fSlow24) / fConst23 + 1.0f;
        float fSlow30 = float(fVslider3);
        int iSlow31 = fSlow30 > 0.0f;
        float fSlow32 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow30)) / fSlow20) * fConst30;
        float fSlow33 = fSlow22 * fConst30;
        float fSlow34 = ((iSlow31) ? fSlow33 : fSlow32);
        float fSlow35 = (fConst31 + fSlow34) / fConst29 + 1.0f;
        float fSlow36 = ((iSlow31) ? fSlow32 : fSlow33);
        float fSlow37 = (fConst31 - fSlow36) / fConst29 + 1.0f;
        float fSlow38 = (fConst31 - fSlow34) / fConst29 + 1.0f;
        float fSlow39 = float(fVslider4);
        int iSlow40 = fSlow39 > 0.0f;
        float fSlow41 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow39)) / fSlow20) * fConst35;
        float fSlow42 = fSlow22 * fConst35;
        float fSlow43 = ((iSlow40) ? fSlow42 : fSlow41);
        float fSlow44 = (fConst36 + fSlow43) / fConst34 + 1.0f;
        float fSlow45 = ((iSlow40) ? fSlow41 : fSlow42);
        float fSlow46 = (fConst36 - fSlow45) / fConst34 + 1.0f;
        float fSlow47 = (fConst36 - fSlow43) / fConst34 + 1.0f;
        float fSlow48 = float(fVslider5);
        int iSlow49 = fSlow48 > 0.0f;
        float fSlow50 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow48)) / fSlow20) * fConst40;
        float fSlow51 = fSlow22 * fConst40;
        float fSlow52 = ((iSlow49) ? fSlow51 : fSlow50);
        float fSlow53 = (fConst41 + fSlow52) / fConst39 + 1.0f;
        float fSlow54 = ((iSlow49) ? fSlow50 : fSlow51);
        float fSlow55 = (fConst41 - fSlow54) / fConst39 + 1.0f;
        float fSlow56 = (fConst41 - fSlow52) / fConst39 + 1.0f;
        float fSlow57 = float(fVslider6);
        int iSlow58 = fSlow57 > 0.0f;
        float fSlow59 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow57)) / fSlow20) * fConst45;
        float fSlow60 = fSlow22 * fConst45;
        float fSlow61 = ((iSlow58) ? fSlow60 : fSlow59);
        float fSlow62 = (fConst46 + fSlow61) / fConst44 + 1.0f;
        float fSlow63 = ((iSlow58) ? fSlow59 : fSlow60);
        float fSlow64 = (fConst46 - fSlow63) / fConst44 + 1.0f;
        float fSlow65 = (fConst46 - fSlow61) / fConst44 + 1.0f;
        float fSlow66 = float(fVslider7);
        int iSlow67 = fSlow66 > 0.0f;
        float fSlow68 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow66)) / fSlow20) * fConst50;
        float fSlow69 = fSlow22 * fConst50;
        float fSlow70 = ((iSlow67) ? fSlow69 : fSlow68);
        float fSlow71 = (fConst51 + fSlow70) / fConst49 + 1.0f;
        float fSlow72 = ((iSlow67) ? fSlow68 : fSlow69);
        float fSlow73 = (fConst51 - fSlow72) / fConst49 + 1.0f;
        float fSlow74 = (fConst51 - fSlow70) / fConst49 + 1.0f;
        float fSlow75 = float(fVslider8);
        int iSlow76 = fSlow75 > 0.0f;
        float fSlow77 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow75)) / fSlow20) * fConst55;
        float fSlow78 = fSlow22 * fConst55;
        float fSlow79 = ((iSlow76) ? fSlow78 : fSlow77);
        float fSlow80 = (fConst56 + fSlow79) / fConst54 + 1.0f;
        float fSlow81 = ((iSlow76) ? fSlow77 : fSlow78);
        float fSlow82 = (fConst56 - fSlow81) / fConst54 + 1.0f;
        float fSlow83 = (fConst56 - fSlow79) / fConst54 + 1.0f;
        float fSlow84 = float(fVslider9);
        int iSlow85 = fSlow84 > 0.0f;
        float fSlow86 = fConst22 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow84)) / fSlow20) * fConst60;
        float fSlow87 = fSlow22 * fConst60;
        float fSlow88 = ((iSlow85) ? fSlow87 : fSlow86);
        float fSlow89 = (fConst61 + fSlow88) / fConst59 + 1.0f;
        float fSlow90 = ((iSlow85) ? fSlow86 : fSlow87);
        float fSlow91 = (fConst61 - fSlow90) / fConst59 + 1.0f;
        float fSlow92 = (fConst61 - fSlow88) / fConst59 + 1.0f;
        float fSlow93 = (fConst61 + fSlow90) / fConst59 + 1.0f;
        float fSlow94 = (fConst56 + fSlow81) / fConst54 + 1.0f;
        float fSlow95 = (fConst51 + fSlow72) / fConst49 + 1.0f;
        float fSlow96 = (fConst46 + fSlow63) / fConst44 + 1.0f;
        float fSlow97 = (fConst41 + fSlow54) / fConst39 + 1.0f;
        float fSlow98 = (fConst36 + fSlow45) / fConst34 + 1.0f;
        float fSlow99 = (fConst31 + fSlow36) / fConst29 + 1.0f;
        float fSlow100 = (fConst26 + fSlow27) / fConst23 + 1.0f;
        for (int i0 = 0; i0 < count; i0 = i0 + 1) {
            float fTemp0 = fConst1 + fRec0[1];
            float fTemp1 = fRec0[1] - fConst1;
            fRec0[0] = ((fTemp0 < fSlow0) ? fTemp0 : ((fTemp1 > fSlow0) ? fTemp1 : fSlow0));
            float fTemp2 = float(input0[i0]);
            fRec2[0] = fConst3 * std::fabs(fTemp2) + fConst2 * fRec2[1];
            int iTemp3 = fRec2[0] > fSlow1;
            iVec0[0] = iTemp3;
            iRec3[0] = std::max<int>(iConst4 * (iTemp3 < iVec0[1]), iRec3[1] + -1);
            float fTemp4 = std::fabs(std::max<float>(float(iTemp3), float(iRec3[0] > 0)));
            float fTemp5 = ((fTemp4 > fRec1[1]) ? fConst2 : fConst5);
            fRec1[0] = fTemp4 * (1.0f - fTemp5) + fRec1[1] * fTemp5;
            float fTemp6 = fTemp2 * fRec1[0];
            float fTemp7 = 1.0f - fRec0[0];
            float fTemp8 = std::fabs(fRec4[1]);
            float fTemp9 = ((fTemp8 > fRec5[1]) ? fSlow9 : fSlow6);
            fRec5[0] = fTemp8 * (1.0f - fTemp9) + fRec5[1] * fTemp9;
            float fTemp10 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec5[0]));
            int iTemp11 = (fTemp10 > fSlow10) + (fTemp10 > fSlow3);
            float fTemp12 = fTemp6 * fTemp7;
            fVec1[0] = fTemp12;
            fRec8[0] = fConst11 * (fConst10 * (fTemp12 - fVec1[1]) - fConst9 * fRec8[1]);
            fRec7[0] = -(fConst14 * (fConst13 * fRec7[1] - (fRec8[0] + fRec8[1])));
            fRec9[0] = -(fConst14 * (fConst13 * fRec9[1] - fConst12 * (fRec8[0] - fRec8[1])));
            float fTemp13 = fRec9[0] + 0.1f * fRec7[0];
            fVec2[0] = fTemp13;
            fRec6[0] = -(fConst17 * (fConst16 * fRec6[1] - (fTemp13 + fVec2[1])));
            fRec4[0] = fRec6[0] * std::pow(1e+01f, -(fSlow11 * std::max<float>(0.0f, ((iTemp11 == 0) ? 0.0f : ((iTemp11 == 1) ? 0.125f * mydsp_faustpower2_f(fTemp10 + 2.0f - fSlow2) : fTemp10 - fSlow2)))));
            float fTemp14 = fRec4[0] * fTemp7 + 3.9810717f * fTemp6 * fRec0[0];
            float fTemp15 = fConst1 + fRec10[1];
            float fTemp16 = fRec10[1] - fConst1;
            fRec10[0] = ((fTemp15 < fSlow12) ? fTemp15 : ((fTemp16 > fSlow12) ? fTemp16 : fSlow12));
            float fTemp17 = 1.0f - fRec10[0];
            fRec11[0] = fSlow13 + fConst19 * fRec11[1];
            fRec12[0] = fSlow15 + fConst19 * fRec12[1];
            float fTemp18 = fRec10[0] + fSlow16 * (fRec11[0] * mydsp_faustpower2_f(fTemp17) * std::pow(1e+01f, 0.05f * fRec12[0]) / (std::fabs(fSlow14 * fRec11[0] * fTemp17 * fTemp14) + 1.0f));
            float fTemp19 = fConst1 + fRec13[1];
            float fTemp20 = fRec13[1] - fConst1;
            fRec13[0] = ((fTemp19 < fSlow17) ? fTemp19 : ((fTemp20 > fSlow17) ? fTemp20 : fSlow17));
            fRec14[0] = fSlow26 + fConst19 * fRec14[1];
            float fTemp21 = 2.0f * fRec15[1] * fConst27;
            float fTemp22 = 2.0f * fRec16[1] * fConst32;
            float fTemp23 = 2.0f * fRec17[1] * fConst37;
            float fTemp24 = 2.0f * fRec18[1] * fConst42;
            float fTemp25 = 2.0f * fRec19[1] * fConst47;
            float fTemp26 = 2.0f * fRec20[1] * fConst52;
            float fTemp27 = 2.0f * fRec21[1] * fConst57;
            float fTemp28 = 2.0f * fRec22[1] * fConst62;
            float fTemp29 = 1.0f - fRec13[0];
            fRec22[0] = fTemp29 * fTemp14 * fTemp18 - (fRec22[2] * fSlow92 + fTemp28) / fSlow89;
            fRec21[0] = (fTemp28 + fRec22[0] * fSlow93 + fRec22[2] * fSlow91) / fSlow89 - (fRec21[2] * fSlow83 + fTemp27) / fSlow80;
            fRec20[0] = (fTemp27 + fRec21[0] * fSlow94 + fRec21[2] * fSlow82) / fSlow80 - (fRec20[2] * fSlow74 + fTemp26) / fSlow71;
            fRec19[0] = (fTemp26 + fRec20[0] * fSlow95 + fRec20[2] * fSlow73) / fSlow71 - (fRec19[2] * fSlow65 + fTemp25) / fSlow62;
            fRec18[0] = (fTemp25 + fRec19[0] * fSlow96 + fRec19[2] * fSlow64) / fSlow62 - (fRec18[2] * fSlow56 + fTemp24) / fSlow53;
            fRec17[0] = (fTemp24 + fRec18[0] * fSlow97 + fRec18[2] * fSlow55) / fSlow53 - (fRec17[2] * fSlow47 + fTemp23) / fSlow44;
            fRec16[0] = (fTemp23 + fRec17[0] * fSlow98 + fRec17[2] * fSlow46) / fSlow44 - (fRec16[2] * fSlow38 + fTemp22) / fSlow35;
            fRec15[0] = (fTemp22 + fRec16[0] * fSlow99 + fRec16[2] * fSlow37) / fSlow35 - (fRec15[2] * fSlow29 + fTemp21) / fSlow25;
            output0[i0] = FAUSTFLOAT(fTemp29 * (fTemp21 + fRec15[0] * fSlow100 + fRec15[2] * fSlow28) * std::pow(1e+01f, 0.05f * fRec14[0]) / fSlow25 + fRec13[0] * fTemp14 * fTemp18);
            fRec0[1] = fRec0[0];
            fRec2[1] = fRec2[0];
            iVec0[1] = iVec0[0];
            iRec3[1] = iRec3[0];
            fRec1[1] = fRec1[0];
            fRec5[1] = fRec5[0];
            fVec1[1] = fVec1[0];
            fRec8[1] = fRec8[0];
            fRec7[1] = fRec7[0];
            fRec9[1] = fRec9[0];
            fVec2[1] = fVec2[0];
            fRec6[1] = fRec6[0];
            fRec4[1] = fRec4[0];
            fRec10[1] = fRec10[0];
            fRec11[1] = fRec11[0];
            fRec12[1] = fRec12[0];
            fRec13[1] = fRec13[0];
            fRec14[1] = fRec14[0];
            fRec22[2] = fRec22[1];
            fRec22[1] = fRec22[0];
            fRec21[2] = fRec21[1];
            fRec21[1] = fRec21[0];
            fRec20[2] = fRec20[1];
            fRec20[1] = fRec20[0];
            fRec19[2] = fRec19[1];
            fRec19[1] = fRec19[0];
            fRec18[2] = fRec18[1];
            fRec18[1] = fRec18[0];
            fRec17[2] = fRec17[1];
            fRec17[1] = fRec17[0];
            fRec16[2] = fRec16[1];
            fRec16[1] = fRec16[0];
            fRec15[2] = fRec15[1];
            fRec15[1] = fRec15[0];
        }
    }

};
// END CLASS CODE
// START EPILOG
FAUSTDR_END_NAMESPACE



#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif

//------------------------------------------------------------------------------
// End the Faust code section


Waxman::Waxman()
{
    mydsp *dsp = new mydsp;
    fDsp.reset(dsp);
    dsp->instanceResetUserInterface();
}

Waxman::~Waxman()
{
}

void Waxman::init(float sample_rate)
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.classInit(sample_rate);
    dsp.instanceConstants(sample_rate);
    clear();
}

void Waxman::clear() noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.instanceClear();
}

void Waxman::process(
    const float *in0, 
    float *out0, 
    unsigned count) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    float *inputs[] = {
        const_cast<float *>(in0), 
    };
    float *outputs[] = {
        out0, 
    };
    dsp.compute(count, inputs, outputs);
}

int Waxman::parameter_group(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 1;
    case 3:
        return 1;
    case 4:
        return 1;
    case 5:
        return 1;
    case 6:
        return 2;
    case 7:
        return 2;
    case 8:
        return 2;
    case 9:
        return 2;
    case 10:
        return 3;
    case 11:
        return 3;
    case 12:
        return 3;
    case 13:
        return 3;
    case 14:
        return 3;
    case 15:
        return 3;
    case 16:
        return 3;
    case 17:
        return 3;
    case 18:
        return 3;
    case 19:
        return 3;
    case 20:
        return 3;
    default:
        return -1;
    }
}

const char *Waxman::parameter_group_label(unsigned group_id) noexcept
{
    switch (group_id) {
    case 0:
        return "Noise Gate";
    case 1:
        return "Compressor + Pre-EQ";
    case 2:
        return "Distortion";
    case 3:
        return "EQ";
    default:
        return 0;
    }
}

const char *Waxman::parameter_group_symbol(unsigned group_id) noexcept
{
    switch (group_id) {
    case 0:
        return "Noise_Gate";
    case 1:
        return "Compressor___Pre_EQ";
    case 2:
        return "Distortion";
    case 3:
        return "EQ";
    default:
        return 0;
    }
}


int Waxman::parameter_order(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return 1;
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 5:
        return 4;
    case 6:
        return 0;
    case 7:
        return 1;
    case 8:
        return 2;
    case 9:
        return 3;
    case 10:
        return 0;
    case 11:
        return 1;
    case 12:
        return 2;
    case 13:
        return 3;
    case 14:
        return 4;
    case 15:
        return 5;
    case 16:
        return 6;
    case 17:
        return 7;
    case 18:
        return 8;
    case 19:
        return 9;
    case 20:
        return 10;
    default:
        return -1;
    }
}

const char *Waxman::parameter_label(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "Threshold";
    case 1:
        return "Bypass Compressor";
    case 2:
        return "Strength";
    case 3:
        return "Threshold";
    case 4:
        return "Attack";
    case 5:
        return "Release";
    case 6:
        return "Bypass Distortion";
    case 7:
        return "Gain";
    case 8:
        return "Curve";
    case 9:
        return "Output";
    case 10:
        return "Bypass EQ";
    case 11:
        return "Band 1";
    case 12:
        return "Band 2";
    case 13:
        return "Band 3";
    case 14:
        return "Band 4";
    case 15:
        return "Band 5";
    case 16:
        return "Band 6";
    case 17:
        return "Band 7";
    case 18:
        return "Band 8";
    case 19:
        return "Q";
    case 20:
        return "Output";
    default:
        return 0;
    }
}

const char *Waxman::parameter_short_label(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "Threshold";
    case 1:
        return "Bypass Compressor";
    case 2:
        return "Strength";
    case 3:
        return "Threshold";
    case 4:
        return "Attack";
    case 5:
        return "Release";
    case 6:
        return "Bypass Distortion";
    case 7:
        return "Gain";
    case 8:
        return "Curve";
    case 9:
        return "Output";
    case 10:
        return "Bypass EQ";
    case 11:
        return "Band 1";
    case 12:
        return "Band 2";
    case 13:
        return "Band 3";
    case 14:
        return "Band 4";
    case 15:
        return "Band 5";
    case 16:
        return "Band 6";
    case 17:
        return "Band 7";
    case 18:
        return "Band 8";
    case 19:
        return "Q";
    case 20:
        return "Output";
    default:
        return 0;
    }
}

const char *Waxman::parameter_description(unsigned index) noexcept
{
    switch (index) {
    default:
        return 0;
    }
}

const char *Waxman::parameter_style(unsigned index) noexcept
{
    switch (index) {
    default:
        return "knob";
    }
}

const char *Waxman::parameter_symbol(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "gate_threshold";
    case 1:
        return "comp_bypass";
    case 2:
        return "comp_strength";
    case 3:
        return "comp_threshold";
    case 4:
        return "comp_attack";
    case 5:
        return "comp_release";
    case 6:
        return "dist_bypass";
    case 7:
        return "dist_gain";
    case 8:
        return "dist_curve";
    case 9:
        return "dist_output";
    case 10:
        return "eq_bypass";
    case 11:
        return "eq_band_1";
    case 12:
        return "eq_band_2";
    case 13:
        return "eq_band_3";
    case 14:
        return "eq_band_4";
    case 15:
        return "eq_band_5";
    case 16:
        return "eq_band_6";
    case 17:
        return "eq_band_7";
    case 18:
        return "eq_band_8";
    case 19:
        return "eq_q";
    case 20:
        return "eq_output";
    default:
        return 0;
    }
}

const char *Waxman::parameter_unit(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "dB";
    case 1:
        return "";
    case 2:
        return "";
    case 3:
        return "dB";
    case 4:
        return "ms";
    case 5:
        return "ms";
    case 6:
        return "";
    case 7:
        return "";
    case 8:
        return "";
    case 9:
        return "dB";
    case 10:
        return "";
    case 11:
        return "";
    case 12:
        return "";
    case 13:
        return "";
    case 14:
        return "";
    case 15:
        return "";
    case 16:
        return "";
    case 17:
        return "";
    case 18:
        return "";
    case 19:
        return "";
    case 20:
        return "dB";
    default:
        return 0;
    }
}

const Waxman::ParameterRange *Waxman::parameter_range(unsigned index) noexcept
{
    switch (index) {
    case 0: {
        static const ParameterRange range = { -70.0, -90.0, 0.0 };
        return &range;
    }
    case 1: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    case 2: {
        static const ParameterRange range = { 30.0, 0.0, 100.0 };
        return &range;
    }
    case 3: {
        static const ParameterRange range = { -20.0, -50.0, 0.0 };
        return &range;
    }
    case 4: {
        static const ParameterRange range = { 0.5, 0.01, 100.0 };
        return &range;
    }
    case 5: {
        static const ParameterRange range = { 80.0, 0.01, 300.0 };
        return &range;
    }
    case 6: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    case 7: {
        static const ParameterRange range = { 25.0, 1.0, 100.0 };
        return &range;
    }
    case 8: {
        static const ParameterRange range = { 3.5, 0.0, 10.0 };
        return &range;
    }
    case 9: {
        static const ParameterRange range = { -6.0, -90.0, 10.0 };
        return &range;
    }
    case 10: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    case 11: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 12: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 13: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 14: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 15: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 16: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 17: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 18: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 19: {
        static const ParameterRange range = { 1.0, 0.1, 2.0 };
        return &range;
    }
    case 20: {
        static const ParameterRange range = { 0.0, -15.0, 15.0 };
        return &range;
    }
    default:
        return 0;
    }
}

unsigned Waxman::parameter_scale_point_count(unsigned index) noexcept
{
    switch (index) {
    default:
        return 0;
    }
}

const Waxman::ParameterScalePoint *Waxman::parameter_scale_point(unsigned index, unsigned point) noexcept
{
    switch (index) {
    default:
        return 0;
    }
(void) point;}

bool Waxman::parameter_is_trigger(unsigned index) noexcept
{
    switch (index) {
    default:
        return false;
    }
}

bool Waxman::parameter_is_boolean(unsigned index) noexcept
{
    switch (index) {
    case 1:
        return true;
    case 6:
        return true;
    case 10:
        return true;
    default:
        return false;
    }
}

bool Waxman::parameter_is_enum(unsigned index) noexcept
{
    switch (index) {
    default:
        return false;
    }
}

bool Waxman::parameter_is_integer(unsigned index) noexcept
{
    switch (index) {
    case 1:
        return true;
    case 6:
        return true;
    case 10:
        return true;
    default:
        return false;
    }
}

bool Waxman::parameter_is_logarithmic(unsigned index) noexcept
{
    switch (index) {
    default:
        return false;
    }
}

float Waxman::get_parameter(unsigned index) const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    case 0:
        return dsp.fHslider0;
    case 1:
        return dsp.fCheckbox0;
    case 2:
        return dsp.fHslider4;
    case 3:
        return dsp.fHslider1;
    case 4:
        return dsp.fHslider3;
    case 5:
        return dsp.fHslider2;
    case 6:
        return dsp.fCheckbox1;
    case 7:
        return dsp.fHslider5;
    case 8:
        return dsp.fHslider6;
    case 9:
        return dsp.fHslider7;
    case 10:
        return dsp.fCheckbox2;
    case 11:
        return dsp.fVslider9;
    case 12:
        return dsp.fVslider8;
    case 13:
        return dsp.fVslider7;
    case 14:
        return dsp.fVslider6;
    case 15:
        return dsp.fVslider5;
    case 16:
        return dsp.fVslider4;
    case 17:
        return dsp.fVslider3;
    case 18:
        return dsp.fVslider0;
    case 19:
        return dsp.fVslider1;
    case 20:
        return dsp.fVslider2;
    default:
        (void)dsp;
        return 0;
    }
}

void Waxman::set_parameter(unsigned index, float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    case 0:
        dsp.fHslider0 = value;
        break;
    case 1:
        dsp.fCheckbox0 = value;
        break;
    case 2:
        dsp.fHslider4 = value;
        break;
    case 3:
        dsp.fHslider1 = value;
        break;
    case 4:
        dsp.fHslider3 = value;
        break;
    case 5:
        dsp.fHslider2 = value;
        break;
    case 6:
        dsp.fCheckbox1 = value;
        break;
    case 7:
        dsp.fHslider5 = value;
        break;
    case 8:
        dsp.fHslider6 = value;
        break;
    case 9:
        dsp.fHslider7 = value;
        break;
    case 10:
        dsp.fCheckbox2 = value;
        break;
    case 11:
        dsp.fVslider9 = value;
        break;
    case 12:
        dsp.fVslider8 = value;
        break;
    case 13:
        dsp.fVslider7 = value;
        break;
    case 14:
        dsp.fVslider6 = value;
        break;
    case 15:
        dsp.fVslider5 = value;
        break;
    case 16:
        dsp.fVslider4 = value;
        break;
    case 17:
        dsp.fVslider3 = value;
        break;
    case 18:
        dsp.fVslider0 = value;
        break;
    case 19:
        dsp.fVslider1 = value;
        break;
    case 20:
        dsp.fVslider2 = value;
        break;
    default:
        (void)dsp;
        (void)value;
        break;
    }
}

float Waxman::get_gate_threshold() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider0;
}

float Waxman::get_comp_bypass() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox0;
}

float Waxman::get_comp_strength() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider4;
}

float Waxman::get_comp_threshold() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider1;
}

float Waxman::get_comp_attack() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider3;
}

float Waxman::get_comp_release() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider2;
}

float Waxman::get_dist_bypass() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox1;
}

float Waxman::get_dist_gain() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider5;
}

float Waxman::get_dist_curve() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider6;
}

float Waxman::get_dist_output() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider7;
}

float Waxman::get_eq_bypass() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox2;
}

float Waxman::get_eq_band_1() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider9;
}

float Waxman::get_eq_band_2() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider8;
}

float Waxman::get_eq_band_3() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider7;
}

float Waxman::get_eq_band_4() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider6;
}

float Waxman::get_eq_band_5() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider5;
}

float Waxman::get_eq_band_6() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider4;
}

float Waxman::get_eq_band_7() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider3;
}

float Waxman::get_eq_band_8() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider0;
}

float Waxman::get_eq_q() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider1;
}

float Waxman::get_eq_output() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider2;
}

void Waxman::set_gate_threshold(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider0 = value;
}

void Waxman::set_comp_bypass(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox0 = value;
}

void Waxman::set_comp_strength(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider4 = value;
}

void Waxman::set_comp_threshold(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider1 = value;
}

void Waxman::set_comp_attack(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider3 = value;
}

void Waxman::set_comp_release(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider2 = value;
}

void Waxman::set_dist_bypass(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox1 = value;
}

void Waxman::set_dist_gain(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider5 = value;
}

void Waxman::set_dist_curve(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider6 = value;
}

void Waxman::set_dist_output(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider7 = value;
}

void Waxman::set_eq_bypass(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox2 = value;
}

void Waxman::set_eq_band_1(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider9 = value;
}

void Waxman::set_eq_band_2(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider8 = value;
}

void Waxman::set_eq_band_3(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider7 = value;
}

void Waxman::set_eq_band_4(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider6 = value;
}

void Waxman::set_eq_band_5(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider5 = value;
}

void Waxman::set_eq_band_6(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider4 = value;
}

void Waxman::set_eq_band_7(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider3 = value;
}

void Waxman::set_eq_band_8(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider0 = value;
}

void Waxman::set_eq_q(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider1 = value;
}

void Waxman::set_eq_output(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider2 = value;
}


