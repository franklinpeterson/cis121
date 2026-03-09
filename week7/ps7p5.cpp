#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string lastName;
    double creditHours, rate, tuitionOwed;
    char districtCode;
    double totalTuition = 0;
    double totalHours = 0;
    int studentCount = 0;

    // Input
    while (cin >> lastName >> creditHours >> districtCode) {

        // Process
        if (districtCode == 'I') rate = 250.00;
        else if (districtCode == 'O') rate = 550.00;
        else rate = 0;

        tuitionOwed = creditHours * rate;
        totalTuition += tuitionOwed;
        totalHours += creditHours;
        studentCount = studentCount + 1;

        // Output
        cout << fixed << setprecision(2) << "Student: " << lastName << " Tuition: " << tuitionOwed << "\n\n";
    }

    cout << "Total Tuition: " << totalTuition << " Total Hours: " << totalHours << " Total Students: " << studentCount << endl;

    return 0;
}