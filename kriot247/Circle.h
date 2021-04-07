
#include "BasicShape.h"
class Circle :
    public BasicShape
{
private:
    long centerX;
    long centerY;
    double radius;

public:
    Circle(long x, long y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
    }
    long getCenterX() 
    {
        return centerX;
    }
    long getCenterY() 
    {
        return centerY;
    }
    virtual double calcArea() const;
};

