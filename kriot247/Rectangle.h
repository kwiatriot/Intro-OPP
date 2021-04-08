#pragma once
#include "BasicShape.h"
class Rectangle :
    public BasicShape
{

private:
    long width;
    long length;
public:
    // Constructor
    Rectangle(long w, long l) 
    {
        width = w;
        length = l;
        calcArea();
    }
    long getWidth() { return width; }
    long getLength() { return length; }
    void calcArea() { area = length * width; }
};

