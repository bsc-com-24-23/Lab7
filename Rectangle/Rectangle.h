#pragma once

class Rectangle
{
private:
    float length;
    float width;
public:

     //default constructor
    Rectangle();
    //default destructor

    //Overloaded constructer
    Rectangle(float length1, float width1);
    ~Rectangle();

    //accessor methods
    void setLength(float length);
    void setWidth(float width);

    float getLength() const;
    float getWidth() const;

    float calculateArea() const;

};
