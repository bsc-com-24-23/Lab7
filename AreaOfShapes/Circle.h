#pragma once

namespace Shapes{

    class Circle
    {
    private:
        float radius;
    public:

        //default constructor
        Circle();
        //overloaded constructo
        Circle(float r);

        //destructor
        ~Circle();

        //accessor methods
        void setRadius(float r);
        float getRadius() const;
    };
    
    
}