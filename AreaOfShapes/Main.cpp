#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Area.h"

using namespace std;
using namespace Shapes;

int main(){

    int choice;
    do
    {
        cout <<"1. Calculate area 0f Square"<< endl;
        cout <<"2. Calculate area 0f Triangle"<< endl;
        cout <<"3. Calculate area 0f Circle"<< endl;
        cout <<"4. Quit program"<< endl;
        cout <<"Enter your choice: ";
        cin >> choice; 

        switch(choice){

            case 1:{
                Square value;
                float length;
                cout <<"Enter length: ";
                cin >> length;
                Square s(length);
                cout<<"Area of Square is: "<<Area::calculateAreaOfSquare(s)<<endl;
                break;
            }
            case 2:{
                Triangle value;
                float height, base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Enter base: ";
                cin >> base;
                Triangle t(base, height);
                cout << "Area of Triangle is: "<<Area::calculateAreaOfTriangle(t)<<endl;
                break;
            }
            case 3:{
                Circle value;
                float radius;
                cout << "Enter radius: ";
                cin >> radius;
                Circle c(radius);
                cout << "Area of Circle is: "<<Area::calculateAreaOfcircle(c)<<endl;
                break;
            }
            case 4:{
                cout << "Quit program";
                break;
            }
            default:
            cout << "Invalid choice! Try again"<<endl;
        }

    } while (choice != 4);
   return 0; 
}