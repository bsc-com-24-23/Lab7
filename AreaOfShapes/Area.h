#pragma once

#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

class Area
{
public:
    static float calculateAreaOfcircle(const Shapes::Circle &c);
    static float calculateAreaOfSquare(const Shapes::Square &s);
    static float calculateAreaOfTriangle(const Shapes::Triangle &t);
    
};