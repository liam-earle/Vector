#include <stdio.h>
#include "Vector.cpp"

class Vector3 : public Vector<3> {
    public:
        Vector3 cross(Vector3 v);
};
