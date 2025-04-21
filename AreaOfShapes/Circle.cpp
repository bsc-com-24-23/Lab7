#include "Circle.h"

using namespace Shapes;

   Circle::Circle(){
    radius = 0.0f;
   }

   Circle::Circle(float r){

    radius = r;
   } 
   Circle::~Circle(){
    //does nothing
   }

   void Circle::setRadius(float r){

    radius = r;
   }
   float Circle::getRadius() const{
    return radius;
   }
