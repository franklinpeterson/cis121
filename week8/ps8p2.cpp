#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double calculatePay(char code, double hours) {
    double rate;
    if (code == 'L') rate = 25.00;
    else if (code == 'A') rate = 30.00;
    else if (code == 'J') rate = 50.00;
    else rate = 0;

    if (hours > 40) return (40 * rate) + ((hours - 40) * rate * 1.5);
    return hours * rate;
}

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, pay, averagePay;
    double totalPaySum = 0;
    int entryCount = 0;

    // Input
    while (cin >> lastName >> jobCode >> hoursWorked) {

        // Process
        pay = calculatePay(jobCode, hoursWorked);
        totalPaySum += pay;
        entryCount = entryCount + 1;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Pay: " << pay << "\n\n";
    }

    if (entryCount > 0) averagePay = totalPaySum / entryCount;
    else averagePay = 0;

    cout << "Average Pay: " << averagePay << " Entries: " << entryCount << endl;

    return 0;
}