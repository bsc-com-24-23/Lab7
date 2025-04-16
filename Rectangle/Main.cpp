#include <iostream>
using namespace std;
#include "Rectangle.h"

int main(){

    Rectangle value;

    float width, length;

    //getting length from the console
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    value.setLength(length);

    //getting width from the console
    cout <<"Enter value of Width: ";
    cin >> width;
    value.setWidth(width);

    //calculating area
    cout<< "Area of Rectangle is: "<<value.calculateArea()<<endl;

    Rectangle value2;

    //width of another rectangle
    float length2, width2;
    cout << "Width of another rectangle: ";
    cin >> width2;
    value2.setWidth(width2);

    //length of another rectangle
    cout << "Length of another rectangle: ";
    cin >> length2;
    value2.setLength(length2);

    //output
    cout <<"The Area of Second Rectangle is: "<<value2.calculateArea();
    return 0;
}