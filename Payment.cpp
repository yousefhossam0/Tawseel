#include<iostream>
using namespace std;
#include "Payment.h"
#include"order.h"

double T;

 
/*void Payment::select_payment() {
    int type;
    string creditNumber;
    cout << "Please Select Payment Type :\n1- Cash?\n2- Credit"; cin >> type;
    if (type == 1) {
        cout << "Please pay fo the delivery" << endl;
    }
    else if (type == 2) {
        cout << "Please enter your credit card number "; cin >> creditNumber;
        cout << "Thanks" << endl;
    }
    else {
        cout << "Please close app and try again ";
    }
}*/

void Payment::select_payment()
{
	string choice;
	cout << " \n\n      ||||||||||||||||||  Cash OR Cridet  |||||||||||||||||             \n \n";
	cin >> choice;
	if (choice == "cash")
	{
		cout << "We wish u use our app again\n ";
		system("PAUSE");
	}
	else if (choice == "cridet")
	{
		int visa;
		cout << " Enter your visa Numbers :";
		cin >> visa;
		cout << "We wish u use our app again\n";
		system("PAUSE");
	}
	else
	{
		cout << "You entered wrong value , Please try again :) ";
		cin >> choice;

	}
	/*while (true) {
		switch (choice)
		{
		case'cash':
			cout << "We wish u use our app again\n ";
			system("PAUSE");
			break;

		case'visa':
			int visa;
			cout << " Enter your visa Numbers :";
			cin >> visa;
			cout << "We wish u use our app again\n";
			system("PAUSE");
			break;
		default:
			cout << "You entered wrong value , Please try again :) ";
			cin >> choice;
			break;
		}
	}*/
	
}
