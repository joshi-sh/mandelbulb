/* 
 * File:   camera.h
 * Author: Shubham
 *
 * Created on January 29, 2015, 12:44 AM
 */

#ifndef CAMERA_H
#define	CAMERA_H

#include "ball.h"
#include <vector>

using namespace std;

/*
 * Renders the field. Handles the actual raymarching, yields an array of colours.
 * Hopefully will eventually be parallelized on the GPU
 */
class Camera {
private:
    
    static const int nSteps = 100;
    
    int width, height;
    
    Vector3f h_dir, v_dir;
    
    Vector4f getDir(float, float);
    void renderPixel(int, int);
    
    Vector4f trace(ray_t, int d);
    Vector4f trace_m(ray_t, int d);
    void setColor(int, int, const Vector4f&);
    
    void write();
    
public:
    int maxBounces;
    float near, left, right, top, bottom;
    Vector4f background, ambient;
    vector<Vector4f> colors; //Probably want to move this to private!
    string out;
    
    Vector3f pos, dir;
    
    void resln(int, int);
    
    void render();
};
#endif	/* CAMERA_H */

