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

#include "PluginWaxman.hpp"

START_NAMESPACE_DISTRHO

// -----------------------------------------------------------------------

PluginWaxman::PluginWaxman()
    : Plugin(Waxman::NumParameters, presetCount, 0)  // # of params, # of programs, 0 states
{
    dsp = new Waxman;
    fSampleRate = getSampleRate();

    for (unsigned p = 0; p < Waxman::NumParameters; ++p) {
        Parameter param;
        initParameter(p, param);
        setParameterValue(p, param.ranges.def);
    }
}

PluginWaxman::~PluginWaxman() {
    delete dsp;
}

// -----------------------------------------------------------------------
// Init

void PluginWaxman::initParameter(uint32_t index, Parameter& parameter) {
    if (index >= Waxman::NumParameters)
        return;

    const Waxman::ParameterRange* range = dsp->parameter_range(index);
    parameter.name = dsp->parameter_label(index);
    parameter.shortName = dsp->parameter_short_label(index);
    parameter.description = dsp->parameter_description(index);
    parameter.symbol = dsp->parameter_symbol(index);
    parameter.unit = dsp->parameter_unit(index);
    parameter.ranges.min = range->min;
    parameter.ranges.max = range->max;
    parameter.ranges.def = range->init;
    parameter.hints = kParameterIsAutomatable;

    if (dsp->parameter_is_boolean(index))
        parameter.hints |= kParameterIsBoolean;
    if (dsp->parameter_is_integer(index))
        parameter.hints |= kParameterIsInteger;
    if (dsp->parameter_is_logarithmic(index))
        parameter.hints |= kParameterIsLogarithmic;
    if (dsp->parameter_is_trigger(index))
        parameter.hints |= kParameterIsTrigger;

    int group_id = dsp->parameter_group(index);
    if (group_id != -1) {
        parameter.groupId = group_id;
    }

    unsigned sp_count = dsp->parameter_scale_point_count(index);

    if (sp_count > 0) {
        parameter.enumValues.count = sp_count;

        const char *style = dsp->parameter_style(index);
        if (strcmp(style, "menu") || strcmp(style, "radio")) {
            parameter.enumValues.restrictedMode = true;
        }

        {
            ParameterEnumerationValue* const values = new ParameterEnumerationValue[sp_count];
            parameter.enumValues.values = values;
            for (unsigned point=0; point<sp_count; point++) {
                const Waxman::ParameterScalePoint* sp = dsp->parameter_scale_point(index, point);
                values[point].label = sp->label.c_str();
                values[point].value = sp->value;
            }
        }
    }
}

/**
   Initialize the port group @a groupId.@n
   This function will be called once,
   shortly after the plugin is created and all audio ports and parameters have been enumerated.
 */
void PluginWaxman::initPortGroup(uint32_t groupId, PortGroup& portGroup) {
    portGroup.name = dsp->parameter_group_label(groupId);
    portGroup.symbol = dsp->parameter_group_symbol(groupId);
}

/**
  Set the name of the program @a index.
  This function will be called once, shortly after the plugin is created.
*/
void PluginWaxman::initProgramName(uint32_t index, String& programName) {
    if (index < presetCount) {
        programName = factoryPresets[index].name;
    }
}

// -----------------------------------------------------------------------
// Internal data

/**
  Optional callback to inform the plugin about a sample rate change.
*/
void PluginWaxman::sampleRateChanged(double newSampleRate) {
    fSampleRate = newSampleRate;
    dsp->init(newSampleRate);
}

/**
  Get the current value of a parameter.
*/
float PluginWaxman::getParameterValue(uint32_t index) const {
    return dsp->get_parameter(index);
}

/**
  Change a parameter value.
*/
void PluginWaxman::setParameterValue(uint32_t index, float value) {
    if (index >= Waxman::NumParameters)
        return;

    const Waxman::ParameterRange* range = dsp->parameter_range(index);
    dsp->set_parameter(index, CLAMP(value, range->min, range->max));
}

/**
  Load a program.
  The host may call this function from any context,
  including realtime processing.
*/
void PluginWaxman::loadProgram(uint32_t index) {
    if (index < presetCount) {
        for (int i=0; i < Waxman::NumParameters; i++) {
            setParameterValue(i, factoryPresets[index].params[i]);
        }
    }
}

// -----------------------------------------------------------------------
// Process

/**
  Plugin is activated.
*/
void PluginWaxman::activate() {
    fSampleRate = getSampleRate();
    dsp->init(fSampleRate);
}


void PluginWaxman::run(const float** inputs, float** outputs,
                       uint32_t frames) {
    dsp->process(inputs[0], outputs[0], outputs[1], (unsigned)frames);
}

// -----------------------------------------------------------------------

Plugin* createPlugin() {
    return new PluginWaxman();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO
