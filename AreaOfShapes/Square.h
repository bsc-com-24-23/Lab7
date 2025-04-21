#pragma once

namespace Shapes{

    class Square
    {
    private:
        float length;
    public:
        Square();
        Square(float l);
        ~Square();

        void setLength(float l);
        float getLength() const;
    };
     
}