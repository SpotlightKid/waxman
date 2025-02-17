/*
 * Waxman audio effect based on DISTRHO Plugin Framework (DPF)
 *
 * SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2025 Chris Arndt <info@chrisarndt.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef PLUGIN_WAXMAN_H
#define PLUGIN_WAXMAN_H

#include "DistrhoPlugin.hpp"
#include "Waxman.hpp"

START_NAMESPACE_DISTRHO

#ifndef MIN
#define MIN(a,b) ( (a) < (b) ? (a) : (b) )
#endif

#ifndef MAX
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )
#endif

#ifndef CLAMP
#define CLAMP(v, min, max) (MIN((max), MAX((min), (v))))
#endif

// -----------------------------------------------------------------------

class PluginWaxman : public Plugin {
public:
    PluginWaxman();

    ~PluginWaxman();

protected:
    // -------------------------------------------------------------------
    // Information

    const char* getLabel() const noexcept override {
        return "Waxman";
    }

    const char* getDescription() const override {
        return "Let's rock, man!";
    }

    const char* getMaker() const noexcept override {
        return "chrisarndt.de";
    }

    const char* getHomePage() const override {
        return DISTRHO_PLUGIN_URI;
    }

    const char* getLicense() const noexcept override {
        return "https://spdx.org/licenses/MIT";
    }

    uint32_t getVersion() const noexcept override {
        return d_version(0, 1, 0);
    }

    // Go to:
    //
    // http://service.steinberg.de/databases/plugin.nsf/plugIn
    //
    // Get a proper plugin UID and fill it in here!
    int64_t getUniqueId() const noexcept override {
        return d_cconst('w', 'a', 'x', 'm');
    }

    // -------------------------------------------------------------------
    // Init

    void initParameter(uint32_t index, Parameter& parameter) override;
    void initProgramName(uint32_t index, String& programName) override;
    void initPortGroup(uint32_t groupId, PortGroup& portGroup) override;

    // -------------------------------------------------------------------
    // Internal data

    float getParameterValue(uint32_t index) const override;
    void setParameterValue(uint32_t index, float value) override;
    void loadProgram(uint32_t index) override;

    // -------------------------------------------------------------------
    // Optional

    // Optional callback to inform the plugin about a sample rate change.
    void sampleRateChanged(double newSampleRate) override;

    // -------------------------------------------------------------------
    // Process

    void activate() override;
    void run(const float**, float** outputs, uint32_t frames) override;

    // -------------------------------------------------------------------

private:
    double          fSampleRate;
    Waxman*     dsp;

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PluginWaxman)
};

struct Preset {
    const char* name;
    float params[Waxman::NumParameters];
};

const Preset factoryPresets[] = {
    //{
    //    "Presetname",  // preset name
    //    {0.0, ...}     // array of Waxman::NumParameters float param values
    //},
    {
        "Dist 1",
        {
            // p_gate_threshold,
            -70.0,
            // p_comp_bypass,
            0.0,
            // p_comp_strength,
            70.0,
            // p_comp_threshold,
            20.0,
            // p_comp_attack,
            2.0,
            // p_comp_release,
            80.0,
            // p_dist_bypass,
            0.0,
            // p_dist_gain,
            60.0,
            // p_dist_curve,
            5.0,
            // p_dist_output,
            -18.0,
            // p_eq_bypass,
            0.0,
            // p_eq_band_1,
            -5.0,
            // p_eq_band_2,
            -4.0,
            // p_eq_band_3,
            -2.0,
            // p_eq_band_4,
            8.0,
            // p_eq_band_5,
            6.0,
            // p_eq_band_6,
            0.0,
            // p_eq_band_7,
            2.0,
            // p_eq_band_8,
            -9.0,
            // p_eq_q,
            0.9,
            // p_eq_output,
            -3.0,
        }
    },
    {"Clean 3", {
        -70.0,
        0.0, 70.0, -30.0, 10.0, 80.0,
        0.0, 1.0, 0.5, 3.0,
        0.0, -6.0, -5.0, -3.0, -1.2, 0.0, 2.5, 6.0, 9.00, 0.975, 3.0
    }},
    {"Fuzzy Hair", {
        -70.0,
        0.0, 50.0, -25.0, 20.0, 80.0,
        0.0, 20.0, 1.5, -18.0,
        0.0, -6.0, -5.0, 1.0, 0.0, 6.0, 0.0, -4.0, -7.0, 0.9, 1.0,
    }},
    {"Sweet Lead", {
        -70.0,
        0.0, 70.0, -30.0, 2.0, 80.0,
        0.0, 60.0, 7.5, -24.0,
        0.0, -2.7, -2.15, 6.0, 4.0, 9.12, 3.12, -3.6, -6.5, 0.5, -6.0
    }}
};

const uint presetCount = sizeof(factoryPresets) / sizeof(Preset);

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif  // #ifndef PLUGIN_WAXMAN_H
