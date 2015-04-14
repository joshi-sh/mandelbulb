/* 
 * File:   ray.h
 * Author: Shubham
 *
 * Created on November 6, 2014, 4:49 PM
 */

#ifndef RAY_H
#define	RAY_H

#include <Eigen/Dense>
#include <stdlib.h>

using namespace Eigen;

/*
 * A Ray originates at one point and moves in one direction to infinity
 */
typedef struct Ray{
    Vector4f origin;
    Vector4f dir;
} ray_t;

/*
 * A point light that radiates light in all directions with equal intensity
 */
typedef struct Light{
    Vector4f position;   //Position
    Vector4f intensity;  //Colour: x is red, y is green, b is blue
} light_t;

#endif	/* RAY_H */

