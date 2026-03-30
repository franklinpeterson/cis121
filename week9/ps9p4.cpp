#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double determineRate(char code) {
    if (code == 'L') return 25.00;
    if (code == 'A') return 30.00;
    if (code == 'J') return 50.00;
    return 0;
}

double determineGrossPay(double hours, double rate) {
    if (hours > 40) return (40 * rate) + ((hours - 40) * rate * 1.5);
    return hours * rate;
}

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, payRate, grossPay;
    double totalGrossPay = 0;

    // Input
    while (cin >> lastName >> jobCode >> hoursWorked) {

        // Process
        payRate = determineRate(jobCode);
        grossPay = determineGrossPay(hoursWorked, payRate);
        totalGrossPay += grossPay;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Gross Pay: " << grossPay << "\n\n";
    }

    cout << "Total Gross Pay: " << totalGrossPay << endl;

    return 0;
}