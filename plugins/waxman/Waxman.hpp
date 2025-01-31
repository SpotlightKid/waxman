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
// FAUST compilation options: -a /home/chris/tmp/tmpkic346gf.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
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
    enum { NumActives = 20 };
    enum { NumPassives = 0 };
    enum { NumParameters = 20 };

    enum Parameter {
        p_strength,
        p_threshold,
        p_attack,
        p_release,
        p_gain,
        p_curve,
        p_dist_output,
        p_f_0,
        p_f_1,
        p_f_2,
        p_f_3,
        p_f_4,
        p_f_5,
        p_f_6,
        p_f_7,
        p_q,
        p_eq_output,
        p_bypass_compressor,
        p_bypass_distortion,
        p_bypass_eq,
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

    float get_strength() const noexcept;
    float get_threshold() const noexcept;
    float get_attack() const noexcept;
    float get_release() const noexcept;
    float get_gain() const noexcept;
    float get_curve() const noexcept;
    float get_dist_output() const noexcept;
    float get_f_0() const noexcept;
    float get_f_1() const noexcept;
    float get_f_2() const noexcept;
    float get_f_3() const noexcept;
    float get_f_4() const noexcept;
    float get_f_5() const noexcept;
    float get_f_6() const noexcept;
    float get_f_7() const noexcept;
    float get_q() const noexcept;
    float get_eq_output() const noexcept;
    float get_bypass_compressor() const noexcept;
    float get_bypass_distortion() const noexcept;
    float get_bypass_eq() const noexcept;
    void set_strength(float value) noexcept;
    void set_threshold(float value) noexcept;
    void set_attack(float value) noexcept;
    void set_release(float value) noexcept;
    void set_gain(float value) noexcept;
    void set_curve(float value) noexcept;
    void set_dist_output(float value) noexcept;
    void set_f_0(float value) noexcept;
    void set_f_1(float value) noexcept;
    void set_f_2(float value) noexcept;
    void set_f_3(float value) noexcept;
    void set_f_4(float value) noexcept;
    void set_f_5(float value) noexcept;
    void set_f_6(float value) noexcept;
    void set_f_7(float value) noexcept;
    void set_q(float value) noexcept;
    void set_eq_output(float value) noexcept;
    void set_bypass_compressor(float value) noexcept;
    void set_bypass_distortion(float value) noexcept;
    void set_bypass_eq(float value) noexcept;

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;

};


#endif // Waxman_Faust_pp_Gen_HPP_