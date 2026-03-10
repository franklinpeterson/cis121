#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getLabFee(string dept, int code) {
    if (dept == "CIS" && code == 101) return 50.00;
    if (dept == "CIS" && code == 121) return 100.00;
    if (dept == "MAT" && code == 111) return 25.00;
    if (dept == "MAT" && code == 112) return 35.00;
    if (dept == "ENG" && code == 100) return 55.00;
    return 50.00;
}

int main() {
    string department;
    int courseCode;
    double labFee, averageFee;
    double totalLabFees = 0;
    int courseCount = 0;

    // Input
    while (cin >> department >> courseCode) {

        // Process
        labFee = getLabFee(department, courseCode);
        totalLabFees += labFee;
        courseCount = courseCount + 1;

        // Output
        cout << fixed << setprecision(2) << "Dept: " << department << " Course: " << courseCode << " Fee: " << labFee << "\n\n";
    }

    if (courseCount > 0) averageFee = totalLabFees / courseCount;
    else averageFee = 0;

    cout << "Total Lab Fees: " << totalLabFees << " Average Fee: " << averageFee << endl;

    return 0;
}