/*
Coin Calculator.cpp
Creator: Daniel Edberg
Class: CS231-002 Computer Programming I
Program: The Coin Calculator
Description: Coin Calculator.cpp is intended as practice for writing small programs in C++ utilizing arithmetic and variables,
    to write selection control flow statements(cfs) using if-then-else statements, to write iteration cfs using while loops, and
    to perform simple input validation on user input to check its validity.
Due Date: 20Sep2020 2359CST
*/

#include <iostream>
using namespace std;

int main()
{
    float pens, nics, dims, quarts, halfs, dolls; //Coin Amounts
    float penst, nicst, dimst, quartst, halfst, dollst; //Coin Value Total Amounts
    float total; //Total Value of Coin Value totals summed

    cout << "\n\n Welcome to \n";
    cout << " The Coin Calculator C++ Edition!\n\n";
    
    cout << "Welcome! I am Coin Calculator 9001!TM. Please insert the following coins when prompted and I will give you a total!.\n";

    cout << "Please insert all available Pennies: " << endl ;
    do //This section tests for and rejects less than 0 inputs from the user, it will endlessly cycle until it receives a 0 or a positive integer
    {   
        cin >> pens; //This user input request works as the value does not exist yet and qualifies as less than 1
            if (pens < 0)
                cout << "Please enter a positive integer or 0." << endl;
    } while (pens < 0);
    penst = pens * 0.01; //redundant for pennies, used for formatting other coins and testing

    cout << "Please insert all available Nickels: " << endl;
    do
    {
        cin >> nics;
        if (nics < 0)
            cout << "Please enter a positive integer or 0." << endl;
    } while (nics < 0);
    nicst = nics * 0.05;

    cout << "Please insert all available Dimes: " << endl;
    do
    {
        cin >> dims;
        if (dims < 0)
            cout << "Please enter a positive integer or 0." << endl;
    } while (dims < 0);
    dimst = dims * 0.10; 

    cout << "Please insert all available Quarters: " << endl;
    do
    {
        cin >> quarts;
        if (quarts < 0)
            cout << "Please enter a positive integer or 0." << endl;
    } while (quarts < 0);
    quartst = quarts * 0.25; 

    cout << "Please insert all available Half-Dollars: " << endl;
    do
    {
        cin >> halfs;
        if (halfs < 0)
            cout << "Please enter a positive integer or 0." << endl;
    } while (halfs < 0);
    halfst = halfs * 0.50; 

    cout << "Please insert all available Dollar Coins: " << endl;
    do
    {
        cin >> dolls;
        if (dolls < 0)
            cout << "Please enter a positive integer or 0." << endl;
    } while (dolls < 0);
    dollst = dolls * 1; 

    total = penst + nicst + dimst + quartst + halfst + dollst;

    cout << "Out of " << pens << " Pennies, You have $" << penst << "\n"; //Calculates the total for a given coin/type
    cout << "Out of " << nics << " Nickles, You have $" << nicst << "\n";
    cout << "Out of " << dims << " Dimes, You have $" << dimst << "\n";
    cout << "Out of " << quarts << " Quarters, You have $" << quartst << "\n";
    cout << "Out of " << halfs << " Half-Dollars, You have $" << halfst << "\n";
    cout << "Out of " << dolls << " Dollar Coins, You have $" << dollst << "\n";

    cout << "Your Total change comes out to: " << "$" <<total; //total curency

    /*
    cout << "\n Pennies \n" << pens << "\n" << penst << "\n\n";
    cout << "\n nickels \n" << nics << "\n" << nicst << "\n\n";
    cout << "\n dimes \n"   << dims << "\n" << dimst << "\n\n";
    cout << "\n quarters \n"<< quarts << "\n" << quartst << "\n\n";
    cout << "\n half-dollars \n" << halfs << "\n" << halfst << "\n\n";
    cout << "\n dollars \n" << dolls << "\n" << dollst << "\n\n";
    cout << "\n total \n" << total << "\n";
    */ //This section is for testing and will not be displayed to the user

    return 0;
}