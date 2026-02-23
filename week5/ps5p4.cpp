#include <iostream>
using namespace std;

int main() {
    // Input
    double salary, taxrate, taxamount;

    cout << "Enter salary: ";
    cin >> salary;

    // Process
    if (salary > 100000) taxrate = 0.30;
    else if (salary > 50000) taxrate = 0.20;
    else taxrate = 0.10;

    taxamount = salary * taxrate;

    // Output
    cout << "Salary: " << salary << " Taxrate: " << taxrate << " Taxamount: " << taxamount << endl;
    return 0;
}