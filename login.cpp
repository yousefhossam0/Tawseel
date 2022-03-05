#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include"login.h"
using namespace std;



void login::MN()
{
    int choice;



    cout << endl << "          _______  _______  _     _  _______  _______  _______  ___";
    cout << endl << "         |       ||   _   || | _ | ||       ||       ||       ||   |";
    cout << endl << " ____    |_     _||  |_|  || || || ||  _____||    ___||    ___||   |           ____";
    cout << endl << "|____|     |   |  |       ||       || |_____ |   |___ |   |___ |   |          |____|";
    cout << endl << "           |   |  |       ||       ||_____  ||    ___||    ___||   |___";
    cout << endl << "           |   |  |   _   ||   _   | _____| ||   |___ |   |___ |       |";
    cout << endl << "           |___|  |__| |__||__| |__||_______||_______||_______||_______|\n";


    cout << "1.LOGIN\n";
    cout << "2.REGISTER\n";
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        login::go();
        break;
    case 2:
        login::build();
        break;

    default:
        system("cls");
        cout << "Wrong Choice\n" << endl;
        MN();
    }

}

void login::go()
{
    int count{};
    string user, pass, u, p;
    system("cls");
    cout << "please enter the following details" << endl;
    cout << "Username :";
    cin >> user;
    cout << "Password :";
    cin >> pass;

    ifstream input("database.txt");
    while (input >> u >> p)
    {
        if (u == user && p == pass)

        {
            count = 1;
            system("cls");
            break;
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "\nHello " << user << "\nLOGIN SUCESS\nWelcome in our Program\n";
        cin.get();
        cin.get();
        exit;
       
    }
    else
    {
        cout << "\nLogin Error.\nYou don't have account\n";
        cout << "For Register :\n";
        build();
    }

}
void login::build()
{    string newuser, newpass, ru, rp;
    cout << "Enter the username :";
    cin >> newuser;
    cout << "\nEnter the password :";
    cin >> newpass;

    ofstream reg("database.txt", ios::app);
    reg << newuser << ' ' << newpass << endl;
    system("cls");
    cout << "\nSuccessfully Registered\n";

    exit;
}



