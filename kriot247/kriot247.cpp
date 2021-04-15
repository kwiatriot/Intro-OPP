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

using namespace std;

template <class T>
class TestScores 
{
private:
    T arr[5];

public:
    class exp{};
    // Constructor
    TestScores(T y[]) 
    {
        for (int i = 0; i < 5; i++) 
        {
            if (y[i] < 0 || y[i] > 100)
                throw exp{};
            else
                arr[i] = y[i];
        }
    }
    T avg()
    {
        T total = 0;
        for (int i = 0; i < 5; i++)
            total = total + arr[i];
        return total / 5.0;
    }

};

int main()
{
    int a[5] = { 3, 6, 2, 9, 1 };
    double b[5] = { 3.6, 2.8, 7.1, 8.4, 9.7 };
    try {
    TestScores <int>o1(a);
    cout << "This is the average of the integer array: " << o1.avg() << endl;
    }
    catch (TestScores<int>::exp)
    {
        cout << "One or more numbers is below 0 or greater then 100" << endl;
    }
    try {
        TestScores <double>o2(b);
        cout << "This is the average of the double array: " << o2.avg() << endl;
    }
    catch (TestScores<double>::exp)
    {
        cout << "One or more numbers is below 0 or greater then 100" << endl;
    }
    return 0;
}