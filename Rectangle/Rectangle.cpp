#include "Rectangle.h"

//Implementing default constructor
Rectangle::Rectangle()
{
    length = 0.0f;
    width = 0.0f;
}

//Implementing overloaded constructer
Rectangle::Rectangle(float l, float w){

    length = l;
    width = w;
}

Rectangle::~Rectangle()
{
    //does nothing for now
}

void Rectangle::setLength(float l){

    length = l;
}

void Rectangle::setWidth(float w)
{
    width = w;
}
float Rectangle::getWidth() const{

    return width;
}
float Rectangle::getLength() const{
    return length;
}

float Rectangle::calculateArea() const{

    return length * width;
}