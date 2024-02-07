// Program 2 (csc222).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    /* cout << fixed << showpoint;
    cout << setprecision(2);
    */

    ifstream Saldata;
    Saldata.open("Salarydata.txt");
        
    string lastname, firstname;
    double salary, increase;

    while (!Saldata.eof()) {
        Saldata >> lastname >> firstname >> salary >> increase;
        cout << fixed << showpoint;
        cout << setprecision(2);
        double Salper = increase / 100;
        double Salinc = (salary * Salper) + salary;
        cout << firstname << " " << lastname << " " << " " << salary << " " << increase << " " << Salinc << endl;
    }
    Saldata.close();
}
