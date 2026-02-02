#include<iostream>
using namespace std;
int main()
{
    // input
    string last_name;
    float hours, pay_rate, gross;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> pay_rate;

    // process
    gross = hours * pay_rate;

    // output
    cout << last_name << ": $" << gross << endl;

    return 0;
}