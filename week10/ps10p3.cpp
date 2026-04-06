#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateTuition(double hrs, double aid, double &tut, double &owed) {
    tut = hrs * 250.00;
    owed = tut - aid;
}

int main() {
    string lastName;
    double creditHours, financialAid, tuition, tuitionOwed, sumOwed = 0;
    int entryCount = 0;

    // Input
    while (cin >> lastName >> creditHours >> financialAid) {
        
        // Process
        calculateTuition(creditHours, financialAid, tuition, tuitionOwed);
        sumOwed += tuitionOwed;
        entryCount++;

        // Output
        cout << fixed << setprecision(2) << "Student: " << lastName << " Tuition: " << tuition << " Owed: " << tuitionOwed << "\n\n";
    }

    // Output
    if (entryCount > 0) {
        cout << "Total Owed: " << sumOwed << " Entries: " << entryCount << " Average Owed: " << (sumOwed / entryCount) << endl;
    }

    return 0;
}