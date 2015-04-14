/* 
 * File:   camera.h
 * Author: Shubham
 *
 * The camera to raytrace a scene
 * 
 * Created on January 29, 2015, 12:44 AM
 */

#ifndef CAMERA_H
#define	CAMERA_H

#include "ray.h"
#include <vector>

using namespace std;

/*
 * Renders the field. Handles the actual raymarching, yields an array of colours.
 * Hopefully will eventually be parallelized on the GPU
 */
class Camera {
private:
    
    int width, height;
    
    Vector3f h_dir, v_dir;
    
    vector<Vector4f> colors;
    
    Vector4f getDir(float, float);
    void renderPixel(int, int);
    
    Vector4f trace(ray_t, int d);
    void setColor(int, int, const Vector4f&);
    
    void write();
    
public:
    int nSteps;
    int maxBounces;
    float near, left, right, top, bottom;
    float step_disance;
    Vector4f background, ambient;
    Vector3f up;
    string out;
    
    Vector3f pos, dir;
    
    void resln(int, int);
    
    void render();
};
#endif	/* CAMERA_H */

