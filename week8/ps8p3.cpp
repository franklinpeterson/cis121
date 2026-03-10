#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double calculateTuition(double credits) {
    return credits * 250.00;
}

int main() {
    string lastName;
    double creditsTaken, tuitionOwed;
    double totalTuitionSum = 0;
    int studentCount = 0;

    // Input
    while (cin >> lastName >> creditsTaken) {

        // Process
        tuitionOwed = calculateTuition(creditsTaken);
        totalTuitionSum += tuitionOwed;
        studentCount = studentCount + 1;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Credits: " << creditsTaken << " Tuition: " << tuitionOwed << "\n\n";
    }

    cout << "Total Tuition: " << totalTuitionSum << " Students: " << studentCount << endl;

    return 0;
}