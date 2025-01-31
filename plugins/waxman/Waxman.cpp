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
// FAUST version: 2.78.4
// FAUST compilation options: -a /home/chris/tmp/tmpg6x8zvac.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
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
    FAUSTFLOAT fHslider1;
    float fConst2;
    FAUSTFLOAT fHslider2;
    float fRec2[2];
    FAUSTFLOAT fHslider3;
    float fConst3;
    float fConst4;
    float fConst5;
    float fVec0[2];
    float fConst6;
    float fConst7;
    float fRec5[2];
    float fConst8;
    float fConst9;
    float fConst10;
    float fRec4[2];
    float fRec6[2];
    float fVec1[2];
    float fConst11;
    float fConst12;
    float fConst13;
    float fRec3[2];
    float fRec1[2];
    FAUSTFLOAT fCheckbox1;
    float fRec7[2];
    float fConst14;
    float fConst15;
    FAUSTFLOAT fHslider4;
    float fConst16;
    float fRec8[2];
    FAUSTFLOAT fHslider5;
    FAUSTFLOAT fHslider6;
    float fRec9[2];
    FAUSTFLOAT fCheckbox2;
    float fRec10[2];
    float fConst17;
    float fConst18;
    float fConst19;
    FAUSTFLOAT fVslider0;
    float fConst20;
    float fConst21;
    FAUSTFLOAT fVslider1;
    float fConst22;
    FAUSTFLOAT fVslider2;
    float fRec11[2];
    float fConst23;
    float fConst24;
    float fConst25;
    FAUSTFLOAT fVslider3;
    float fConst26;
    float fConst27;
    float fConst28;
    float fConst29;
    float fConst30;
    FAUSTFLOAT fVslider4;
    float fConst31;
    float fConst32;
    float fConst33;
    float fConst34;
    float fConst35;
    FAUSTFLOAT fVslider5;
    float fConst36;
    float fConst37;
    float fConst38;
    float fConst39;
    float fConst40;
    FAUSTFLOAT fVslider6;
    float fConst41;
    float fConst42;
    float fConst43;
    float fConst44;
    float fConst45;
    FAUSTFLOAT fVslider7;
    float fConst46;
    float fConst47;
    float fConst48;
    float fConst49;
    float fConst50;
    FAUSTFLOAT fVslider8;
    float fConst51;
    float fConst52;
    float fConst53;
    float fConst54;
    float fConst55;
    FAUSTFLOAT fVslider9;
    float fConst56;
    float fConst57;
    float fConst58;
    float fRec19[3];
    float fRec18[3];
    float fRec17[3];
    float fRec16[3];
    float fRec15[3];
    float fRec14[3];
    float fRec13[3];
    float fRec12[3];
    
 public:
    mydsp() {
    }
    
    void metadata(Meta* m) { 
        m->declare("analyzers.lib/name", "Faust Analyzer Library");
        m->declare("analyzers.lib/version", "1.2.0");
        m->declare("author", "Christopher Arndt");
        m->declare("basics.lib/bypass1:author", "Julius Smith");
        m->declare("basics.lib/name", "Faust Basic Element Library");
        m->declare("basics.lib/version", "1.21.0");
        m->declare("compile_options", "-a /home/chris/tmp/tmpg6x8zvac.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
        fConst2 = 1.0f / fConst0;
        fConst3 = std::tan(628.31854f / fConst0);
        fConst4 = 1.0f / fConst3;
        fConst5 = 1.0f - fConst4;
        fConst6 = 3.9810717f / fConst3;
        fConst7 = 1.0f / (fConst4 + 1.0f);
        fConst8 = 1.0f / std::tan(3141.5928f / fConst0);
        fConst9 = 1.0f - fConst8;
        fConst10 = 1.0f / (fConst8 + 1.0f);
        fConst11 = 1.0f / std::tan(6283.1855f / fConst0);
        fConst12 = 1.0f - fConst11;
        fConst13 = 1.0f / (fConst11 + 1.0f);
        fConst14 = 44.1f / fConst0;
        fConst15 = 1.0f - fConst14;
        fConst16 = 22.05f / fConst0;
        fConst17 = ftbl0mydspSIG0[7];
        fConst18 = 3.1415927f / fConst0;
        fConst19 = std::tan(fConst18 * fConst17);
        fConst20 = 6.2831855f / fConst0;
        fConst21 = fConst17 / std::sin(fConst20 * fConst17);
        fConst22 = 1.0f / fConst19;
        fConst23 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst19);
        fConst24 = ftbl0mydspSIG0[6];
        fConst25 = std::tan(fConst18 * fConst24);
        fConst26 = fConst24 / std::sin(fConst20 * fConst24);
        fConst27 = 1.0f / fConst25;
        fConst28 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst25);
        fConst29 = ftbl0mydspSIG0[5];
        fConst30 = std::tan(fConst18 * fConst29);
        fConst31 = fConst29 / std::sin(fConst20 * fConst29);
        fConst32 = 1.0f / fConst30;
        fConst33 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst30);
        fConst34 = ftbl0mydspSIG0[4];
        fConst35 = std::tan(fConst18 * fConst34);
        fConst36 = fConst34 / std::sin(fConst20 * fConst34);
        fConst37 = 1.0f / fConst35;
        fConst38 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst35);
        fConst39 = ftbl0mydspSIG0[3];
        fConst40 = std::tan(fConst18 * fConst39);
        fConst41 = fConst39 / std::sin(fConst20 * fConst39);
        fConst42 = 1.0f / fConst40;
        fConst43 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst40);
        fConst44 = ftbl0mydspSIG0[2];
        fConst45 = std::tan(fConst18 * fConst44);
        fConst46 = fConst44 / std::sin(fConst20 * fConst44);
        fConst47 = 1.0f / fConst45;
        fConst48 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst45);
        fConst49 = ftbl0mydspSIG0[1];
        fConst50 = std::tan(fConst18 * fConst49);
        fConst51 = fConst49 / std::sin(fConst20 * fConst49);
        fConst52 = 1.0f / fConst50;
        fConst53 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst50);
        fConst54 = ftbl0mydspSIG0[0];
        fConst55 = std::tan(fConst18 * fConst54);
        fConst56 = fConst54 / std::sin(fConst20 * fConst54);
        fConst57 = 1.0f / fConst55;
        fConst58 = 1.0f - 1.0f / mydsp_faustpower2_f(fConst55);
    }
    
    FAUSTDR_VIRTUAL void instanceResetUserInterface() {
        fCheckbox0 = FAUSTFLOAT(0.0f);
        fHslider0 = FAUSTFLOAT(-2e+01f);
        fHslider1 = FAUSTFLOAT(8e+01f);
        fHslider2 = FAUSTFLOAT(0.5f);
        fHslider3 = FAUSTFLOAT(3e+01f);
        fCheckbox1 = FAUSTFLOAT(0.0f);
        fHslider4 = FAUSTFLOAT(25.0f);
        fHslider5 = FAUSTFLOAT(3.5f);
        fHslider6 = FAUSTFLOAT(-6.0f);
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
            fVec0[l2] = 0.0f;
        }
        for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
            fRec5[l3] = 0.0f;
        }
        for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
            fRec4[l4] = 0.0f;
        }
        for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
            fRec6[l5] = 0.0f;
        }
        for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
            fVec1[l6] = 0.0f;
        }
        for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
            fRec3[l7] = 0.0f;
        }
        for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
            fRec1[l8] = 0.0f;
        }
        for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
            fRec7[l9] = 0.0f;
        }
        for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
            fRec8[l10] = 0.0f;
        }
        for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
            fRec9[l11] = 0.0f;
        }
        for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
            fRec10[l12] = 0.0f;
        }
        for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
            fRec11[l13] = 0.0f;
        }
        for (int l14 = 0; l14 < 3; l14 = l14 + 1) {
            fRec19[l14] = 0.0f;
        }
        for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
            fRec18[l15] = 0.0f;
        }
        for (int l16 = 0; l16 < 3; l16 = l16 + 1) {
            fRec17[l16] = 0.0f;
        }
        for (int l17 = 0; l17 < 3; l17 = l17 + 1) {
            fRec16[l17] = 0.0f;
        }
        for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
            fRec15[l18] = 0.0f;
        }
        for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
            fRec14[l19] = 0.0f;
        }
        for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
            fRec13[l20] = 0.0f;
        }
        for (int l21 = 0; l21 < 3; l21 = l21 + 1) {
            fRec12[l21] = 0.0f;
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
        ui_interface->openVerticalBox("Compressor");
        ui_interface->declare(&fHslider3, "1", "");
        ui_interface->addHorizontalSlider("Strength", &fHslider3, FAUSTFLOAT(3e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fHslider0, "2", "");
        ui_interface->declare(&fHslider0, "unit", "dB");
        ui_interface->addHorizontalSlider("Threshold", &fHslider0, FAUSTFLOAT(-2e+01f), FAUSTFLOAT(-5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider2, "3", "");
        ui_interface->declare(&fHslider2, "unit", "ms");
        ui_interface->addHorizontalSlider("Attack", &fHslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.01f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider1, "4", "");
        ui_interface->declare(&fHslider1, "unit", "ms");
        ui_interface->addHorizontalSlider("Release", &fHslider1, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.01f), FAUSTFLOAT(3e+02f), FAUSTFLOAT(0.01f));
        ui_interface->closeBox();
        ui_interface->openVerticalBox("Distortion");
        ui_interface->declare(&fHslider4, "1", "");
        ui_interface->addHorizontalSlider("Gain", &fHslider4, FAUSTFLOAT(25.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider5, "2", "");
        ui_interface->addHorizontalSlider("Curve", &fHslider5, FAUSTFLOAT(3.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fHslider6, "3", "");
        ui_interface->declare(&fHslider6, "symbol", "dist_output");
        ui_interface->declare(&fHslider6, "unit", "dB");
        ui_interface->addHorizontalSlider("Output", &fHslider6, FAUSTFLOAT(-6.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
        ui_interface->closeBox();
        ui_interface->openHorizontalBox("EQ");
        ui_interface->addVerticalSlider("F 0", &fVslider9, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 1", &fVslider8, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 2", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 3", &fVslider6, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 4", &fVslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 5", &fVslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 6", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->addVerticalSlider("F 7", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
        ui_interface->declare(&fVslider1, "1", "");
        ui_interface->addVerticalSlider("Q", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
        ui_interface->declare(&fVslider2, "2", "");
        ui_interface->declare(&fVslider2, "symbol", "eq_output");
        ui_interface->declare(&fVslider2, "unit", "dB");
        ui_interface->addVerticalSlider("Output", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.01f));
        ui_interface->closeBox();
        ui_interface->openVerticalBox("Output");
        ui_interface->declare(&fCheckbox0, "1", "");
        ui_interface->addCheckButton("Bypass Compressor", &fCheckbox0);
        ui_interface->declare(&fCheckbox1, "2", "");
        ui_interface->addCheckButton("Bypass Distortion", &fCheckbox1);
        ui_interface->declare(&fCheckbox2, "3", "");
        ui_interface->addCheckButton("Bypass EQ", &fCheckbox2);
        ui_interface->closeBox();
        ui_interface->closeBox();
    }
    
    FAUSTDR_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
        FAUSTFLOAT* input0 = inputs[0];
        FAUSTFLOAT* output0 = outputs[0];
        float fSlow0 = float(fCheckbox0);
        float fSlow1 = float(fHslider0);
        float fSlow2 = fSlow1 + 2.0f;
        float fSlow3 = 0.001f * float(fHslider1);
        int iSlow4 = std::fabs(fSlow3) < 1.1920929e-07f;
        float fSlow5 = ((iSlow4) ? 0.0f : std::exp(-(fConst2 / ((iSlow4) ? 1.0f : fSlow3))));
        float fSlow6 = 0.001f * float(fHslider2);
        int iSlow7 = std::fabs(fSlow6) < 1.1920929e-07f;
        float fSlow8 = ((iSlow7) ? 0.0f : std::exp(-(fConst2 / ((iSlow7) ? 1.0f : fSlow6))));
        float fSlow9 = fSlow1 + -2.0f;
        float fSlow10 = 0.0005f * float(fHslider3);
        float fSlow11 = float(fCheckbox1);
        float fSlow12 = fConst16 * float(fHslider4);
        float fSlow13 = float(fHslider5);
        float fSlow14 = fConst14 * float(fHslider6);
        float fSlow15 = fSlow13 + 1.0f;
        float fSlow16 = float(fCheckbox2);
        float fSlow17 = float(fVslider0);
        int iSlow18 = fSlow17 > 0.0f;
        float fSlow19 = float(fVslider1);
        float fSlow20 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow17)) / fSlow19) * fConst21;
        float fSlow21 = fConst18 / fSlow19;
        float fSlow22 = fSlow21 * fConst21;
        float fSlow23 = ((iSlow18) ? fSlow22 : fSlow20);
        float fSlow24 = (fConst22 + fSlow23) / fConst19 + 1.0f;
        float fSlow25 = fConst14 * float(fVslider2);
        float fSlow26 = ((iSlow18) ? fSlow20 : fSlow22);
        float fSlow27 = (fConst22 - fSlow26) / fConst19 + 1.0f;
        float fSlow28 = (fConst22 - fSlow23) / fConst19 + 1.0f;
        float fSlow29 = float(fVslider3);
        int iSlow30 = fSlow29 > 0.0f;
        float fSlow31 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow29)) / fSlow19) * fConst26;
        float fSlow32 = fSlow21 * fConst26;
        float fSlow33 = ((iSlow30) ? fSlow32 : fSlow31);
        float fSlow34 = (fConst27 + fSlow33) / fConst25 + 1.0f;
        float fSlow35 = ((iSlow30) ? fSlow31 : fSlow32);
        float fSlow36 = (fConst27 - fSlow35) / fConst25 + 1.0f;
        float fSlow37 = (fConst27 - fSlow33) / fConst25 + 1.0f;
        float fSlow38 = float(fVslider4);
        int iSlow39 = fSlow38 > 0.0f;
        float fSlow40 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow38)) / fSlow19) * fConst31;
        float fSlow41 = fSlow21 * fConst31;
        float fSlow42 = ((iSlow39) ? fSlow41 : fSlow40);
        float fSlow43 = (fConst32 + fSlow42) / fConst30 + 1.0f;
        float fSlow44 = ((iSlow39) ? fSlow40 : fSlow41);
        float fSlow45 = (fConst32 - fSlow44) / fConst30 + 1.0f;
        float fSlow46 = (fConst32 - fSlow42) / fConst30 + 1.0f;
        float fSlow47 = float(fVslider5);
        int iSlow48 = fSlow47 > 0.0f;
        float fSlow49 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow47)) / fSlow19) * fConst36;
        float fSlow50 = fSlow21 * fConst36;
        float fSlow51 = ((iSlow48) ? fSlow50 : fSlow49);
        float fSlow52 = (fConst37 + fSlow51) / fConst35 + 1.0f;
        float fSlow53 = ((iSlow48) ? fSlow49 : fSlow50);
        float fSlow54 = (fConst37 - fSlow53) / fConst35 + 1.0f;
        float fSlow55 = (fConst37 - fSlow51) / fConst35 + 1.0f;
        float fSlow56 = float(fVslider6);
        int iSlow57 = fSlow56 > 0.0f;
        float fSlow58 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow56)) / fSlow19) * fConst41;
        float fSlow59 = fSlow21 * fConst41;
        float fSlow60 = ((iSlow57) ? fSlow59 : fSlow58);
        float fSlow61 = (fConst42 + fSlow60) / fConst40 + 1.0f;
        float fSlow62 = ((iSlow57) ? fSlow58 : fSlow59);
        float fSlow63 = (fConst42 - fSlow62) / fConst40 + 1.0f;
        float fSlow64 = (fConst42 - fSlow60) / fConst40 + 1.0f;
        float fSlow65 = float(fVslider7);
        int iSlow66 = fSlow65 > 0.0f;
        float fSlow67 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow65)) / fSlow19) * fConst46;
        float fSlow68 = fSlow21 * fConst46;
        float fSlow69 = ((iSlow66) ? fSlow68 : fSlow67);
        float fSlow70 = (fConst47 + fSlow69) / fConst45 + 1.0f;
        float fSlow71 = ((iSlow66) ? fSlow67 : fSlow68);
        float fSlow72 = (fConst47 - fSlow71) / fConst45 + 1.0f;
        float fSlow73 = (fConst47 - fSlow69) / fConst45 + 1.0f;
        float fSlow74 = float(fVslider8);
        int iSlow75 = fSlow74 > 0.0f;
        float fSlow76 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow74)) / fSlow19) * fConst51;
        float fSlow77 = fSlow21 * fConst51;
        float fSlow78 = ((iSlow75) ? fSlow77 : fSlow76);
        float fSlow79 = (fConst52 + fSlow78) / fConst50 + 1.0f;
        float fSlow80 = ((iSlow75) ? fSlow76 : fSlow77);
        float fSlow81 = (fConst52 - fSlow80) / fConst50 + 1.0f;
        float fSlow82 = (fConst52 - fSlow78) / fConst50 + 1.0f;
        float fSlow83 = float(fVslider9);
        int iSlow84 = fSlow83 > 0.0f;
        float fSlow85 = fConst18 * (std::pow(1e+01f, 0.05f * std::fabs(fSlow83)) / fSlow19) * fConst56;
        float fSlow86 = fSlow21 * fConst56;
        float fSlow87 = ((iSlow84) ? fSlow86 : fSlow85);
        float fSlow88 = (fConst57 + fSlow87) / fConst55 + 1.0f;
        float fSlow89 = ((iSlow84) ? fSlow85 : fSlow86);
        float fSlow90 = (fConst57 - fSlow89) / fConst55 + 1.0f;
        float fSlow91 = (fConst57 - fSlow87) / fConst55 + 1.0f;
        float fSlow92 = (fConst57 + fSlow89) / fConst55 + 1.0f;
        float fSlow93 = (fConst52 + fSlow80) / fConst50 + 1.0f;
        float fSlow94 = (fConst47 + fSlow71) / fConst45 + 1.0f;
        float fSlow95 = (fConst42 + fSlow62) / fConst40 + 1.0f;
        float fSlow96 = (fConst37 + fSlow53) / fConst35 + 1.0f;
        float fSlow97 = (fConst32 + fSlow44) / fConst30 + 1.0f;
        float fSlow98 = (fConst27 + fSlow35) / fConst25 + 1.0f;
        float fSlow99 = (fConst22 + fSlow26) / fConst19 + 1.0f;
        for (int i0 = 0; i0 < count; i0 = i0 + 1) {
            float fTemp0 = fConst1 + fRec0[1];
            float fTemp1 = fRec0[1] - fConst1;
            fRec0[0] = ((fTemp0 < fSlow0) ? fTemp0 : ((fTemp1 > fSlow0) ? fTemp1 : fSlow0));
            float fTemp2 = 1.0f - fRec0[0];
            float fTemp3 = std::fabs(fRec1[1]);
            float fTemp4 = ((fTemp3 > fRec2[1]) ? fSlow8 : fSlow5);
            fRec2[0] = fTemp3 * (1.0f - fTemp4) + fRec2[1] * fTemp4;
            float fTemp5 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec2[0]));
            int iTemp6 = (fTemp5 > fSlow9) + (fTemp5 > fSlow2);
            float fTemp7 = float(input0[i0]);
            fVec0[0] = fTemp7;
            fRec5[0] = fConst7 * (fConst6 * (fTemp7 - fVec0[1]) - fConst5 * fRec5[1]);
            fRec4[0] = -(fConst10 * (fConst9 * fRec4[1] - (fRec5[0] + fRec5[1])));
            fRec6[0] = -(fConst10 * (fConst9 * fRec6[1] - fConst8 * (fRec5[0] - fRec5[1])));
            float fTemp8 = fRec6[0] + 0.1f * fRec4[0];
            fVec1[0] = fTemp8;
            fRec3[0] = -(fConst13 * (fConst12 * fRec3[1] - (fTemp8 + fVec1[1])));
            fRec1[0] = fRec3[0] * fTemp2 * std::pow(1e+01f, -(fSlow10 * std::max<float>(0.0f, ((iTemp6 == 0) ? 0.0f : ((iTemp6 == 1) ? 0.125f * mydsp_faustpower2_f(fTemp5 + 2.0f - fSlow1) : fTemp5 - fSlow1)))));
            float fTemp9 = fRec3[0] * fRec0[0] + fRec1[0] * fTemp2;
            float fTemp10 = fConst1 + fRec7[1];
            float fTemp11 = fRec7[1] - fConst1;
            fRec7[0] = ((fTemp10 < fSlow11) ? fTemp10 : ((fTemp11 > fSlow11) ? fTemp11 : fSlow11));
            float fTemp12 = 1.0f - fRec7[0];
            fRec8[0] = fSlow12 + fConst15 * fRec8[1];
            fRec9[0] = fSlow14 + fConst15 * fRec9[1];
            float fTemp13 = fRec7[0] + fSlow15 * (fRec8[0] * mydsp_faustpower2_f(fTemp12) * std::pow(1e+01f, 0.05f * fRec9[0]) / (std::fabs(fSlow13 * fRec8[0] * fTemp12 * fTemp9) + 1.0f));
            float fTemp14 = fConst1 + fRec10[1];
            float fTemp15 = fRec10[1] - fConst1;
            fRec10[0] = ((fTemp14 < fSlow16) ? fTemp14 : ((fTemp15 > fSlow16) ? fTemp15 : fSlow16));
            fRec11[0] = fSlow25 + fConst15 * fRec11[1];
            float fTemp16 = 2.0f * fRec12[1] * fConst23;
            float fTemp17 = 2.0f * fRec13[1] * fConst28;
            float fTemp18 = 2.0f * fRec14[1] * fConst33;
            float fTemp19 = 2.0f * fRec15[1] * fConst38;
            float fTemp20 = 2.0f * fRec16[1] * fConst43;
            float fTemp21 = 2.0f * fRec17[1] * fConst48;
            float fTemp22 = 2.0f * fRec18[1] * fConst53;
            float fTemp23 = 2.0f * fRec19[1] * fConst58;
            float fTemp24 = 1.0f - fRec10[0];
            fRec19[0] = fTemp24 * fTemp9 * fTemp13 - (fRec19[2] * fSlow91 + fTemp23) / fSlow88;
            fRec18[0] = (fTemp23 + fRec19[0] * fSlow92 + fRec19[2] * fSlow90) / fSlow88 - (fRec18[2] * fSlow82 + fTemp22) / fSlow79;
            fRec17[0] = (fTemp22 + fRec18[0] * fSlow93 + fRec18[2] * fSlow81) / fSlow79 - (fRec17[2] * fSlow73 + fTemp21) / fSlow70;
            fRec16[0] = (fTemp21 + fRec17[0] * fSlow94 + fRec17[2] * fSlow72) / fSlow70 - (fRec16[2] * fSlow64 + fTemp20) / fSlow61;
            fRec15[0] = (fTemp20 + fRec16[0] * fSlow95 + fRec16[2] * fSlow63) / fSlow61 - (fRec15[2] * fSlow55 + fTemp19) / fSlow52;
            fRec14[0] = (fTemp19 + fRec15[0] * fSlow96 + fRec15[2] * fSlow54) / fSlow52 - (fRec14[2] * fSlow46 + fTemp18) / fSlow43;
            fRec13[0] = (fTemp18 + fRec14[0] * fSlow97 + fRec14[2] * fSlow45) / fSlow43 - (fRec13[2] * fSlow37 + fTemp17) / fSlow34;
            fRec12[0] = (fTemp17 + fRec13[0] * fSlow98 + fRec13[2] * fSlow36) / fSlow34 - (fRec12[2] * fSlow28 + fTemp16) / fSlow24;
            output0[i0] = FAUSTFLOAT(fTemp24 * (fTemp16 + fRec12[0] * fSlow99 + fRec12[2] * fSlow27) * std::pow(1e+01f, 0.05f * fRec11[0]) / fSlow24 + fRec10[0] * fTemp9 * fTemp13);
            fRec0[1] = fRec0[0];
            fRec2[1] = fRec2[0];
            fVec0[1] = fVec0[0];
            fRec5[1] = fRec5[0];
            fRec4[1] = fRec4[0];
            fRec6[1] = fRec6[0];
            fVec1[1] = fVec1[0];
            fRec3[1] = fRec3[0];
            fRec1[1] = fRec1[0];
            fRec7[1] = fRec7[0];
            fRec8[1] = fRec8[0];
            fRec9[1] = fRec9[0];
            fRec10[1] = fRec10[0];
            fRec11[1] = fRec11[0];
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
            fRec14[2] = fRec14[1];
            fRec14[1] = fRec14[0];
            fRec13[2] = fRec13[1];
            fRec13[1] = fRec13[0];
            fRec12[2] = fRec12[1];
            fRec12[1] = fRec12[0];
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
        return 0;
    case 2:
        return 0;
    case 3:
        return 0;
    case 4:
        return 1;
    case 5:
        return 1;
    case 6:
        return 1;
    case 7:
        return 2;
    case 8:
        return 2;
    case 9:
        return 2;
    case 10:
        return 2;
    case 11:
        return 2;
    case 12:
        return 2;
    case 13:
        return 2;
    case 14:
        return 2;
    case 15:
        return 2;
    case 16:
        return 2;
    case 17:
        return 3;
    case 18:
        return 3;
    case 19:
        return 3;
    default:
        return -1;
    }
}

const char *Waxman::parameter_group_label(unsigned group_id) noexcept
{
    switch (group_id) {
    case 0:
        return "Compressor";
    case 1:
        return "Distortion";
    case 2:
        return "EQ";
    case 3:
        return "Output";
    default:
        return 0;
    }
}

const char *Waxman::parameter_group_symbol(unsigned group_id) noexcept
{
    switch (group_id) {
    case 0:
        return "Compressor";
    case 1:
        return "Distortion";
    case 2:
        return "EQ";
    case 3:
        return "Output";
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
        return 2;
    case 2:
        return 3;
    case 3:
        return 4;
    case 4:
        return 1;
    case 5:
        return 2;
    case 6:
        return 3;
    case 15:
        return 1;
    case 16:
        return 2;
    case 17:
        return 1;
    case 18:
        return 2;
    case 19:
        return 3;
    default:
        return -1;
    }
}

const char *Waxman::parameter_label(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "Strength";
    case 1:
        return "Threshold";
    case 2:
        return "Attack";
    case 3:
        return "Release";
    case 4:
        return "Gain";
    case 5:
        return "Curve";
    case 6:
        return "Output";
    case 7:
        return "F 0";
    case 8:
        return "F 1";
    case 9:
        return "F 2";
    case 10:
        return "F 3";
    case 11:
        return "F 4";
    case 12:
        return "F 5";
    case 13:
        return "F 6";
    case 14:
        return "F 7";
    case 15:
        return "Q";
    case 16:
        return "Output";
    case 17:
        return "Bypass Compressor";
    case 18:
        return "Bypass Distortion";
    case 19:
        return "Bypass EQ";
    default:
        return 0;
    }
}

const char *Waxman::parameter_short_label(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "Strength";
    case 1:
        return "Threshold";
    case 2:
        return "Attack";
    case 3:
        return "Release";
    case 4:
        return "Gain";
    case 5:
        return "Curve";
    case 6:
        return "Output";
    case 7:
        return "F 0";
    case 8:
        return "F 1";
    case 9:
        return "F 2";
    case 10:
        return "F 3";
    case 11:
        return "F 4";
    case 12:
        return "F 5";
    case 13:
        return "F 6";
    case 14:
        return "F 7";
    case 15:
        return "Q";
    case 16:
        return "Output";
    case 17:
        return "Bypass Compressor";
    case 18:
        return "Bypass Distortion";
    case 19:
        return "Bypass EQ";
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
        return "strength";
    case 1:
        return "threshold";
    case 2:
        return "attack";
    case 3:
        return "release";
    case 4:
        return "gain";
    case 5:
        return "curve";
    case 6:
        return "dist_output";
    case 7:
        return "f_0";
    case 8:
        return "f_1";
    case 9:
        return "f_2";
    case 10:
        return "f_3";
    case 11:
        return "f_4";
    case 12:
        return "f_5";
    case 13:
        return "f_6";
    case 14:
        return "f_7";
    case 15:
        return "q";
    case 16:
        return "eq_output";
    case 17:
        return "bypass_compressor";
    case 18:
        return "bypass_distortion";
    case 19:
        return "bypass_eq";
    default:
        return 0;
    }
}

const char *Waxman::parameter_unit(unsigned index) noexcept
{
    switch (index) {
    case 0:
        return "";
    case 1:
        return "dB";
    case 2:
        return "ms";
    case 3:
        return "ms";
    case 4:
        return "";
    case 5:
        return "";
    case 6:
        return "dB";
    case 7:
        return "";
    case 8:
        return "";
    case 9:
        return "";
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
        return "dB";
    case 17:
        return "";
    case 18:
        return "";
    case 19:
        return "";
    default:
        return 0;
    }
}

const Waxman::ParameterRange *Waxman::parameter_range(unsigned index) noexcept
{
    switch (index) {
    case 0: {
        static const ParameterRange range = { 30.0, 0.0, 100.0 };
        return &range;
    }
    case 1: {
        static const ParameterRange range = { -20.0, -50.0, 0.0 };
        return &range;
    }
    case 2: {
        static const ParameterRange range = { 0.5, 0.01, 100.0 };
        return &range;
    }
    case 3: {
        static const ParameterRange range = { 80.0, 0.01, 300.0 };
        return &range;
    }
    case 4: {
        static const ParameterRange range = { 25.0, 1.0, 100.0 };
        return &range;
    }
    case 5: {
        static const ParameterRange range = { 3.5, 0.0, 10.0 };
        return &range;
    }
    case 6: {
        static const ParameterRange range = { -6.0, -90.0, 10.0 };
        return &range;
    }
    case 7: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 8: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 9: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    case 10: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
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
        static const ParameterRange range = { 1.0, 0.1, 2.0 };
        return &range;
    }
    case 16: {
        static const ParameterRange range = { 0.0, -15.0, 15.0 };
        return &range;
    }
    case 17: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    case 18: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    case 19: {
        static const ParameterRange range = { 0, 0, 1 };
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
    case 17:
        return true;
    case 18:
        return true;
    case 19:
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
    case 17:
        return true;
    case 18:
        return true;
    case 19:
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
        return dsp.fHslider3;
    case 1:
        return dsp.fHslider0;
    case 2:
        return dsp.fHslider2;
    case 3:
        return dsp.fHslider1;
    case 4:
        return dsp.fHslider4;
    case 5:
        return dsp.fHslider5;
    case 6:
        return dsp.fHslider6;
    case 7:
        return dsp.fVslider9;
    case 8:
        return dsp.fVslider8;
    case 9:
        return dsp.fVslider7;
    case 10:
        return dsp.fVslider6;
    case 11:
        return dsp.fVslider5;
    case 12:
        return dsp.fVslider4;
    case 13:
        return dsp.fVslider3;
    case 14:
        return dsp.fVslider0;
    case 15:
        return dsp.fVslider1;
    case 16:
        return dsp.fVslider2;
    case 17:
        return dsp.fCheckbox0;
    case 18:
        return dsp.fCheckbox1;
    case 19:
        return dsp.fCheckbox2;
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
        dsp.fHslider3 = value;
        break;
    case 1:
        dsp.fHslider0 = value;
        break;
    case 2:
        dsp.fHslider2 = value;
        break;
    case 3:
        dsp.fHslider1 = value;
        break;
    case 4:
        dsp.fHslider4 = value;
        break;
    case 5:
        dsp.fHslider5 = value;
        break;
    case 6:
        dsp.fHslider6 = value;
        break;
    case 7:
        dsp.fVslider9 = value;
        break;
    case 8:
        dsp.fVslider8 = value;
        break;
    case 9:
        dsp.fVslider7 = value;
        break;
    case 10:
        dsp.fVslider6 = value;
        break;
    case 11:
        dsp.fVslider5 = value;
        break;
    case 12:
        dsp.fVslider4 = value;
        break;
    case 13:
        dsp.fVslider3 = value;
        break;
    case 14:
        dsp.fVslider0 = value;
        break;
    case 15:
        dsp.fVslider1 = value;
        break;
    case 16:
        dsp.fVslider2 = value;
        break;
    case 17:
        dsp.fCheckbox0 = value;
        break;
    case 18:
        dsp.fCheckbox1 = value;
        break;
    case 19:
        dsp.fCheckbox2 = value;
        break;
    default:
        (void)dsp;
        (void)value;
        break;
    }
}

float Waxman::get_strength() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider3;
}

float Waxman::get_threshold() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider0;
}

float Waxman::get_attack() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider2;
}

float Waxman::get_release() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider1;
}

float Waxman::get_gain() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider4;
}

float Waxman::get_curve() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider5;
}

float Waxman::get_dist_output() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider6;
}

float Waxman::get_f_0() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider9;
}

float Waxman::get_f_1() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider8;
}

float Waxman::get_f_2() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider7;
}

float Waxman::get_f_3() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider6;
}

float Waxman::get_f_4() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider5;
}

float Waxman::get_f_5() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider4;
}

float Waxman::get_f_6() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider3;
}

float Waxman::get_f_7() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider0;
}

float Waxman::get_q() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider1;
}

float Waxman::get_eq_output() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider2;
}

float Waxman::get_bypass_compressor() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox0;
}

float Waxman::get_bypass_distortion() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox1;
}

float Waxman::get_bypass_eq() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox2;
}

void Waxman::set_strength(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider3 = value;
}

void Waxman::set_threshold(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider0 = value;
}

void Waxman::set_attack(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider2 = value;
}

void Waxman::set_release(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider1 = value;
}

void Waxman::set_gain(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider4 = value;
}

void Waxman::set_curve(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider5 = value;
}

void Waxman::set_dist_output(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider6 = value;
}

void Waxman::set_f_0(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider9 = value;
}

void Waxman::set_f_1(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider8 = value;
}

void Waxman::set_f_2(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider7 = value;
}

void Waxman::set_f_3(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider6 = value;
}

void Waxman::set_f_4(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider5 = value;
}

void Waxman::set_f_5(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider4 = value;
}

void Waxman::set_f_6(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider3 = value;
}

void Waxman::set_f_7(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider0 = value;
}

void Waxman::set_q(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider1 = value;
}

void Waxman::set_eq_output(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider2 = value;
}

void Waxman::set_bypass_compressor(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox0 = value;
}

void Waxman::set_bypass_distortion(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox1 = value;
}

void Waxman::set_bypass_eq(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox2 = value;
}


