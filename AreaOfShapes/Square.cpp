#include "Square.h"

using namespace Shapes;

Square::Square(){
    length = 0.0f;
}
 
Square::Square(float l){

    length = l;
}

 Square::~Square(){
    //does nothing
 }

 void Square::setLength(float l){

    length = l;
 }

 float Square::getLength() const{

    return length;
 }