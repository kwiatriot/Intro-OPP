/*
Date: 4/8/21
Author: Wayne Kwiat
Description:
Write a class named TestScores. The class constructor should accept an array of test scores as its argument. 
The class should have a member function that returns the average of the test scores. 
If any test score in the array is negative or greater than 100, the class should throw an exception. 
Demonstrate the class in a program.
*/


#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
protected:
    string name;
    float cost;
public:
    MenuItem() 
    {
        name = "";
        cost = 0.0;
    }

    MenuItem(string n, float c) 
    {
        n = name;
        c = cost;
    }

    virtual float getCost() = 0;
};


class Soda: public MenuItem 
{
private:
    string soda_name;
    float soda_cost;
public:
    Soda(string n, float c) 
    {
        n = soda_name;
        c = soda_cost;
        getCost();
    }

    float getCost() 
    {
        return soda_cost;
    }

};

class Coffee: public MenuItem 
{
private:
    string coffee_name;
    float coffee_cost;
public:
    Coffee(string n, float c) 
    {
        n = coffee_name;
        c = coffee_cost;
        getCost();
    }

};


int main()
{
 
    return 0;
}