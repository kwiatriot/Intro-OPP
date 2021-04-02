/*
Date: 3/14/21
Author: Wayne Kwiat
Description:
Write a program that displays a simulated paycheck. The program should ask the user to enter the date, the payee’s name, and the amount of the check (up to $10,000).
It should then display a simulated check with the dollar amount spelled out. Be sure to format the numeric value of the check in fixed-point notation with two decimal places of precision.
Be sure the decimal place always displays, even when the number is zero or has no fractional part. Use either C-strings or string class objects in this program.
Input Validation: Do not accept negative dollar amounts, or amounts over $10,000.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, date, amount;
	string a1[] = { " ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };
	string a2[] = { " "," ","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety" };

	cout << "Enter date in the format mm/dd/yyyy:";
	cin >> date;
	cin.ignore();
	cout << "Enter payee name:";
	getline(cin, name);

	do {
		cout << "Enter Amount in the format xxxx.xx:";
		cin >> amount;
	} while (amount.length() != 7 || amount[4] != '.');

	cout << endl << "\t\t\t\t\t" << "Date: " << date << endl;
	cout << "Pay to the order of: " << name << "\t\t" << "$" << amount << endl;
	cout << a1[amount[0] - 48] << " Thousand " << a1[amount[1] - 48] << " Hundred " << a2[amount[2] - 48] << " " << a1[amount[3] - 48] << " and " << amount[5] << amount[6] << " Cents" << endl;

	return 0;

}

