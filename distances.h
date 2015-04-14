#ifndef DISTANCES_H
#define	DISTANCES_H

#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

float vec2length(const Vector2f&);
float vec3length(const Vector3f&);
float plane(const Vector3f&, const Vector3f&, const float&);
float sphere(const Vector3f&, const float&);
float torus(const Vector3f&, const float&, const float&);
float cone(const Vector3f&, const float&, const float&);
void dbgPrint(const Vector3f&);
float cylinder(const Vector3f&, const float&);
float op_union(const float&, const float&);
float op_subtract(const float&, const float&);
float op_intersection(const float&, const float&);
float wiggles(const Vector3f&);
float repeat(const float&, const float&);
float clamp(const float&, const float&, const float&);

#endif	/* DISTANCES_H */

