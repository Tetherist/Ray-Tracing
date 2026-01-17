#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

class vec3 
{
    public:
    double e[3];

    vec3 : e{0,0,0} {}
    vec3(double e0, double e1, double e2) : e{e0, e1, e2};

    // getters
    double x() const { return e[0]; }
    double y() const { return e[1]; }
    double z() const { return e[2]; }

    // operater overloading
    vec3 operator-() const { return vec3 (-e[0], -e[1], -e[2]); }
};