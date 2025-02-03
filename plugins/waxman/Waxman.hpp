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
// FAUST compilation options: -a /home/chris/tmp/tmpp0xjkbym.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
//------------------------------------------------------------------------------


#pragma once
#ifndef Waxman_Faust_pp_Gen_HPP_
#define Waxman_Faust_pp_Gen_HPP_

#include <memory>
#include <string>

class Waxman {
public:
    Waxman();
    ~Waxman();

    void init(float sample_rate);
    void clear() noexcept;

    void process(
        const float *in0, 
        float *out0, 
        unsigned count) noexcept;

    enum { NumInputs = 1 };
    enum { NumOutputs = 1 };
    enum { NumActives = 21 };
    enum { NumPassives = 0 };
    enum { NumParameters = 21 };

    enum Parameter {
        p_gate_threshold,
        p_comp_bypass,
        p_comp_strength,
        p_comp_threshold,
        p_comp_attack,
        p_comp_release,
        p_dist_bypass,
        p_dist_gain,
        p_dist_curve,
        p_dist_output,
        p_eq_bypass,
        p_eq_band_1,
        p_eq_band_2,
        p_eq_band_3,
        p_eq_band_4,
        p_eq_band_5,
        p_eq_band_6,
        p_eq_band_7,
        p_eq_band_8,
        p_eq_q,
        p_eq_output,
    };

    struct ParameterRange {
        float init;
        float min;
        float max;
    };

    struct ParameterScalePoint {
        std::string label;
        float value;
    };

    int parameter_group(unsigned index) noexcept;
    int parameter_order(unsigned index) noexcept;
    static const char *parameter_group_label(unsigned group_id) noexcept;
    static const char *parameter_group_symbol(unsigned group_id) noexcept;
    static const char *parameter_label(unsigned index) noexcept;
    static const char *parameter_short_label(unsigned index) noexcept;
    static const char *parameter_description(unsigned index) noexcept;
    static const char *parameter_style(unsigned index) noexcept;
    static const char *parameter_symbol(unsigned index) noexcept;
    static const char *parameter_unit(unsigned index) noexcept;
    static const ParameterRange *parameter_range(unsigned index) noexcept;
    unsigned parameter_scale_point_count(unsigned index) noexcept;
    static const ParameterScalePoint *parameter_scale_point(unsigned index, unsigned point) noexcept;
    static bool parameter_is_trigger(unsigned index) noexcept;
    static bool parameter_is_boolean(unsigned index) noexcept;
    static bool parameter_is_enum(unsigned index) noexcept;
    static bool parameter_is_integer(unsigned index) noexcept;
    static bool parameter_is_logarithmic(unsigned index) noexcept;

    float get_parameter(unsigned index) const noexcept;
    void set_parameter(unsigned index, float value) noexcept;

    float get_gate_threshold() const noexcept;
    float get_comp_bypass() const noexcept;
    float get_comp_strength() const noexcept;
    float get_comp_threshold() const noexcept;
    float get_comp_attack() const noexcept;
    float get_comp_release() const noexcept;
    float get_dist_bypass() const noexcept;
    float get_dist_gain() const noexcept;
    float get_dist_curve() const noexcept;
    float get_dist_output() const noexcept;
    float get_eq_bypass() const noexcept;
    float get_eq_band_1() const noexcept;
    float get_eq_band_2() const noexcept;
    float get_eq_band_3() const noexcept;
    float get_eq_band_4() const noexcept;
    float get_eq_band_5() const noexcept;
    float get_eq_band_6() const noexcept;
    float get_eq_band_7() const noexcept;
    float get_eq_band_8() const noexcept;
    float get_eq_q() const noexcept;
    float get_eq_output() const noexcept;
    void set_gate_threshold(float value) noexcept;
    void set_comp_bypass(float value) noexcept;
    void set_comp_strength(float value) noexcept;
    void set_comp_threshold(float value) noexcept;
    void set_comp_attack(float value) noexcept;
    void set_comp_release(float value) noexcept;
    void set_dist_bypass(float value) noexcept;
    void set_dist_gain(float value) noexcept;
    void set_dist_curve(float value) noexcept;
    void set_dist_output(float value) noexcept;
    void set_eq_bypass(float value) noexcept;
    void set_eq_band_1(float value) noexcept;
    void set_eq_band_2(float value) noexcept;
    void set_eq_band_3(float value) noexcept;
    void set_eq_band_4(float value) noexcept;
    void set_eq_band_5(float value) noexcept;
    void set_eq_band_6(float value) noexcept;
    void set_eq_band_7(float value) noexcept;
    void set_eq_band_8(float value) noexcept;
    void set_eq_q(float value) noexcept;
    void set_eq_output(float value) noexcept;

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;

};


#endif // Waxman_Faust_pp_Gen_HPP_