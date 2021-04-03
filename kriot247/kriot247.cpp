/*
Date: 3/21/21
Author: Wayne Kwiat
Description:
Write a program that simulates a soft drink machine. Each time the program runs, it should enter a loop that performs the following steps:
A list of drinks is displayed on the screen. The user should be allowed to either quit the program or pick a drink.
If the user selects a drink, he or she will next enter the amount of money that is to be inserted into the drink machine.
The program should display the amount of change that would be returned and subtract one from the number of that drink left in the machine.
If the user selects a drink that has sold out, a message should be displayed.
The loop then repeats.
When the user chooses to quit the program it should display the total amount of money the machine earned.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Drink
{
    string drinkName;   //Drink name
    int itemQuantity;   //Drink quantity
    float itemCost;     //Drink cost
};


int main()
{
    bool machine_on = true;
    int choice;
    float payment;
    float total = 0;
    float change;
    const int NUM_DRINKS = 5;
    Drink drinkMachine[NUM_DRINKS] =
    {
        {"Cola", 20, .75},
        {"Root Beer", 20, .75},
        {"Lemon-Lime", 20, .75},
        {"Grape Soda", 20, .80},
        {"Cream Soda", 20, .80}
    };

    while (machine_on) {
        //display menu
        cout << "Menu\n";
        for (int i = 0; i < NUM_DRINKS; i++)
            cout << i << "." << " " << drinkMachine[i].drinkName << " " << drinkMachine[i].itemCost << " " << drinkMachine[i].itemQuantity << endl;
        cout << "5. Quit\nEnter your choice: ";
        cin >> choice;
        if (choice == 5) {
            cout << "The machine's total for today was: " << total;
            machine_on = false;
        }
        else {
            cout << "Please enter " << drinkMachine[choice].itemCost << endl;
            cout << "How much money are you entering: ";
            cin >> payment;
            change = payment - drinkMachine[choice].itemCost;
            total = total + drinkMachine[choice].itemCost;
            drinkMachine[choice].itemQuantity--;
            cout << "Your change is: " << change << endl;
            cout << "Thank you for your selection!" << endl;
        }
    }
    return 0;
}
