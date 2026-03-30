#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double determineCost(char code) {
    if (code == 'I') return 250.00;
    if (code == 'O') return 550.00;
    return 0;
}

double computeTuition(double hours, double cost) {
    return hours * cost;
}

int main() {
    string lastName;
    double creditHours, costPerCredit, tuitionCost;
    char districtCode;
    double totalTuitionCosts = 0;

    // Input
    while (cin >> lastName >> creditHours >> districtCode) {

        // Process
        costPerCredit = determineCost(districtCode);
        tuitionCost = computeTuition(creditHours, costPerCredit);
        totalTuitionCosts += tuitionCost;

        // Output
        cout << fixed << setprecision(2) << "Student: " << lastName << " Tuition: " << tuitionCost << "\n\n";
    }

    cout << "Total Tuition Costs: " << totalTuitionCosts << endl;

    return 0;
}