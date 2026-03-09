#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, rate, pay, averagePay;
    double totalPay = 0;
    int entryCount = 0;

    // Input
    while (cin >> lastName >> jobCode >> hoursWorked) {

        // Process
        if (jobCode == 'L') rate = 25.00;
        else if (jobCode == 'A') rate = 30.00;
        else if (jobCode == 'J') rate = 50.00;
        else rate = 0;

        if (hoursWorked > 40) {
            pay = (40 * rate) + ((hoursWorked - 40) * rate * 1.5);
        } else {
            pay = hoursWorked * rate;
        }

        totalPay += pay;
        entryCount = entryCount + 1;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Code: " << jobCode << " Hours: " << hoursWorked << " Pay: " << pay << "\n\n";
    }

    // Process
    if (entryCount > 0) averagePay = totalPay / entryCount;
    else averagePay = 0;

    cout << "Entries: " << entryCount << " Average Pay: " << averagePay << endl;

    return 0;
}