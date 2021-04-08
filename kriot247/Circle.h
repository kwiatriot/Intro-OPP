
#include "BasicShape.h"
class Circle :
    public BasicShape
{
private:
    long centerX;
    long centerY;
    double radius;

public:
    // Constructor
    Circle(long x, long y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
        calcArea();
    }
    long getCenterX() { return centerX; }
    long getCenterY() { return centerY; }
    void calcArea() { area = 3.14159 * radius * radius; }
};

