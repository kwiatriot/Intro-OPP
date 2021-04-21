/*
Date: 4/8/21
Author: Wayne Kwiat
Description:
A main function that utilizes minimum code to drive the program. Coding details shall be in appropriately-implemented classes. (10 points)
At least three class modules, the base class shall be abstract and two associated derived classes. (30 points)
At least one example of an overloaded constructor.(10 points)
At least one polymorphic method.(20 points)
Demonstrate correct use of public, private and protected keywords. (10 points)
*/


#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
protected:
    string name;
    float cost;
    int quantity;
public:
    MenuItem() 
    {
        name = "";
        cost = 0.0;
        quantity = 0;
    }

    MenuItem(string n, float c, int q) 
    {
        n = name;
        c = cost;
        q = quantity;
    }

    virtual float getCost() = 0;
};


class Soda: public MenuItem 
{
private:
    string soda_name;
    float soda_cost;
    int soda_quantity;
public:
    Soda(string n, float c, int q) 
    {
        n = soda_name;
        c = soda_cost;
        q = soda_quantity;
        getCost();
    }

    float getCost() { return soda_cost; }
    string getName() { return soda_name; }

};

class Coffee: public MenuItem 
{
private:
    string coffee_name;
    float coffee_cost;
    int coffee_quantity;
public:
    Coffee(string n, float c, int q) 
    {
        n = coffee_name;
        c = coffee_cost;
        q = coffee_quantity;
        getCost();
    }

    float getCost() { return coffee_cost; }
    string getName() { return coffee_name; }
};


int main()
{
    Coffee latte("latte", 2.5, 10);
    Coffee cappuccino("cappuccino", 3, 10);
    Soda coke("coke", 1.75, 10);
    Soda rootBeer("root beer", 1.75, 10);
    
    bool machine_on = true;
    int choice;
    float payment;
    float total = 0;
    float change;

    while (machine_on) {
        //display menu
        cout << "Menu\n";
        cout << "1. Latte\n2. Cappuccino\n 3. Coke\n4. Root Beer\n";
        cout << "5. Quit\nEnter your choice: ";
        cin >> choice;
        if (choice == 5) {
            cout << "The machine's total for today was: " << total;
            machine_on = false;
        }
        else {
            cout << "Please enter you money: " << endl;
            cin >> payment;
            cout << "Thank you for your selection!" << endl;
        }
    }
    return 0;
}