#pragma once

namespace Shapes{

    class Triangle
    {
    private:
        float height;
        float base;
    public:

       //default constructor    
        Triangle();
        //overloaded constructor
        Triangle(float h, float b);

         //destructor
        ~Triangle();

        //accessor methods
        void setHeight(float h);
        void setBase(float b);
        
        float getHeight() const;
        float getBase() const;

    };
}