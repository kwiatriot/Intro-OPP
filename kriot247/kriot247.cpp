/*
Date: 4/8/21
Author: Wayne Kwiat
Description:
Create a pure abstract class and two derived classes. 
After you have created these classes, create a driver program that defines a Circle object and a Rectangle object. 
Demonstrate that each object properly calculates and reports its area.
*/


#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Circle cir1(0, 0, 4);
    Rectangle rec1(8, 12);

    cir1.calcArea();
    rec1.calcArea();

    cout << "The circle's area is: " << cir1.getArea() << endl;
    cout << "The rectangle's area is: " << rec1.getArea() << endl;

    return 0;

}

