#include "distances.h"

float vec2length(const Vector2f& v){
    return sqrt(abs(v.dot(v)));
}

float vec3length(const Vector3f& v){
    return sqrt(abs(v.dot(v)));
}

float plane(const Vector3f& p, const Vector3f& n, const float& o){
    return p.dot(n) - o;
}

float sphere(const Vector3f& v, const float& r){
    return (vec3length(v) - r);
}

float torus(const Vector3f& v, const float& ri, const float& ro){
    Vector2f p_xz(v[0], v[2]);
    Vector2f q(vec2length(p_xz) - ri, v[1]);
    return vec2length(q) - ro;
}

float _cone(const Vector3f& p, const Vector2f& n){
    float v2l = vec2length(Vector2f(p[0], p[2]));
    return n.dot(Vector2f(v2l, p[1]));
}

float cone(const Vector3f& p, float r, float h){
    float ang = atan2(r, h);
    Vector2f n(cos(ang), sin(ang));
    float d = _cone(Vector3f(p[0], p[1] - h, p[2]), n);
    return max(d, -p[1]);
}

float cylinder(const Vector3f& p, const float& r){
    return vec2length(Vector2f(p[0], p[2])) - r;
}

float op_union(const float& d1, const float& d2){
    return d1 <= d2 ? d1 : d2;
}

float op_subtract(const float& d1, const float& d2){
    return -d2 >= d1 ? -d2 : d1;
}

float op_intersection(const float& d1, const float& d2){
    return d1 > d2 ? d1 : d2;
}

float wiggles(const Vector3f& w){
    return 0.02 * cos(40.0 * w[1]);
}

float repeat(const float& c, const float& s){
    return c < 0.0f ? -(fmod(-c, s) - s*0.5) : fmod(c, s) - s*0.5;
}

float clamp(const float& v, const float& min, const float& max){
    return v < min ? min : v > max ? max : v;
}
