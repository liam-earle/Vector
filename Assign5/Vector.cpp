#include <stdio.h>
#include <math.h>
#include "Vector.h"

//Default Constructor
template <std::size_t N>
Vector<N>::Vector() {
    for(int i = 0; i < N; i++) {
        components[i] = 0.0f;
    }
}

//Copy Constructor
template <std::size_t N>
Vector<N>::Vector(const Vector<N>& other) {
    for(int i = 0; i < N; i++) {
        components[i] = other.components[i];
    }
}

//Dot Product
template <std::size_t N>
float Vector<N>::dot(Vector<N> v) {
    
    float dot = 0.0f;
    
    for(int i = 0; i < N; i++) {
        dot += getComponent(i) * v.getComponent(i);
    }
    return dot;
}

//Magnitude
template <std::size_t N>
float Vector<N>::magnitude() {
    float sumComponentsSquare = 0.0f;
    
    for(int i = 0; i < N; i++) {
        sumComponentsSquare += this->components[i] * this->components[i];
    }
    
    float magnitude = sqrt(sumComponentsSquare);
    
    return magnitude;
}

//Get Component
template <std::size_t N>
float Vector<N>::getComponent(int i) const {
    
    return components[i];
}

//Set Component
template <std::size_t N>
bool Vector<N>::setComponent(int i, float value) {
    if(i>N-1) {
        return false;
    }
    else {
        components[i] = value;
        return true;
    }
}

//Addition Overload
template <std::size_t N>
Vector<N> Vector<N>::operator+(Vector<N> v) {
    Vector<N> n;
    for(int i = 0; i < N; i++) {
        n.setComponent(i, components[i] + v.components[i]);
    }
    return n;
}

//Subtraction Overload
template <std::size_t N>
Vector<N> Vector<N>::operator-(Vector<N> v) {
    Vector<N> n;
    for(int i = 0; i < N; i++) {
        n.setComponent(i, components[i] - v.components[i]);
    }
    return n;
}
