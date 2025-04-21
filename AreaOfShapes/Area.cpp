#include "Area.h"
#include <cmath>

float Area::calculateAreaOfcircle(const Shapes::Circle &c){
    return 3.14f * c.getRadius() * c.getRadius();
}

float Area::calculateAreaOfTriangle(const Shapes::Triangle &t){
    return t.getBase() * t.getHeight() * 0.5;
}

float Area::calculateAreaOfSquare(const Shapes::Square &s){
    return s.getLength() * s.getLength();
}