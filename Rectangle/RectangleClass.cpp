#include "Rectangle.h"

//Implementing default constructor
Rectangle::RectangleClass()
{
    length = 0.0f;
    width = 0.0f;
}

Rectangle::~RectangleClass()
{
    //does nothing for now
}

void rectangle::setLength(float l){

    length = l;
}

void rectangle::setWidth(float w)
{
    width = w;
}
float rectangle::getWidth() const{

    return width;
}
float rectangle::getLength() const{
    return Length;
}

float rectangle::calculateArea() const{

    return Length * Width;
}