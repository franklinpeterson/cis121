#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string lastname;
    double num_dependents, g_income;
    cout << "Enter last name, dependents, and gross income: ";
    cin >> lastname >> num_dependents >> g_income;

    // Process
    double ag_income = g_income - (num_dependents * 12000);
    double taxrate;

    if (ag_income > 50000) taxrate = 0.20;
    else taxrate = 0.10;

    double income_tax = ag_income * taxrate;
    if (income_tax < 0) income_tax = 100;

    // Output
    cout << "Lastname: " << lastname << endl;
    cout << "G_income: " << g_income << endl;
    cout << "Num_dependents: " << num_dependents << endl;
    cout << "Ag_income: " << ag_income << endl;
    cout << "Income_tax: " << income_tax << endl;

    return 0;
}