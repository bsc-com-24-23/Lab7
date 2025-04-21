#include "Triangle.h"

using namespace Shapes;

    Triangle::Triangle(){
        height = 0.0f;
        base = 0.0f;
    }

    Triangle::Triangle(float b, float h){

        height = h;
        base = b;
    }

    Triangle::~Triangle(){
        //does nothing
    }
    void Triangle::setHeight(float h){
        height = h;
    }
    void Triangle::setBase(float b){
        base = b;
    }
    float Triangle::getBase() const{
        return base;
    }
    float Triangle::getHeight() const{
        return height;
    }