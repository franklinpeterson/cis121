#include<iostream>
using namespace std;
int main()
{
    // input
    string firstname, lastname;
    cout << "Enter first name: ";
    cin >> firstname;
    cout << "Enter last name: ";
    cin >> lastname;

    // process + output
    cout << "Hello " << lastname << "." << endl;

    return 0;
}