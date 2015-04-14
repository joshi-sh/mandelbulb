/* 
 * File:   main.cpp
 * Author: Shubham
 *
 * Created on November 4, 2014, 7:44 PM
 */

#include <Eigen/Dense>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <iostream>


#include "camera.h"

using namespace std;
using namespace Eigen;

/*
 * 
 */
int main(int argc, char** argv) {
    //Then the camera
    Camera cam;
    cam.ambient = Vector4f(0,0,0,0);
    cam.background = Vector4f(255, 255, 255, 0);
    cam.bottom = -10.0f;
    cam.left = -10.0f;
    cam.maxBounces = 3;
    cam.near = sqrt(1.0f*1.0f + 1.0f*1.0f + 5.0f*5.0f);
    cam.out = "test.ppm";
    cam.right = 10.0f;
    cam.top = 10.0f;
    cam.resln(500, 500);
    cam.pos = Vector3f(1.0, 1.0, 5.0);
    cam.nSteps = 400;
    cam.step_disance = 0.05f;
    cam.up = Vector3f(0.0f, 1.0f, 0.0f);
    //Now, render!
    cam.render();
    return 0;
}

