#include "Vector3.h"

//Cross Product
Vector3 Vector3::cross(Vector3 v) {
    
    float a1 = getComponent(0);
    float a2 = getComponent(1);
    float a3 = getComponent(2);
    
    float b1 = v.getComponent(0);
    float b2 = v.getComponent(1);
    float b3 = v.getComponent(2);
    
    float s1 = a2*b3 - a3*b2;
    float s2 = a3*b1 - a1*b3;
    float s3 = a1*b2 - a2*b1;
    
    Vector3 f;
    
    f.setComponent(0, s1);
    f.setComponent(1, s2);
    f.setComponent(2, s3);
    
    return f;
}
