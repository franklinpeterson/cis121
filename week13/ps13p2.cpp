#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

// Function to compute gross pay with overtime
double computeGross(double hours, double rate) {
    if (hours > 40) {
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    return hours * rate;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> staff;

    // Input loop
    for (int i = 0; i < n; i++) {
        Employee temp;
        cout << "Enter first name, last name, hours, and rate: ";
        cin >> temp.firstName >> temp.lastName >> temp.hours >> temp.rate;

        // Process: Call function and add to vector
        temp.grossPay = computeGross(temp.hours, temp.rate);
        staff.push_back(temp);
    }

    // Output loop
    cout << fixed << setprecision(2) << "\nEmployee Payroll:\n";
    for (int i = 0; i < staff.size(); i++) {
        cout << staff[i].firstName << " " << staff[i].lastName 
             << " | Hours: " << staff[i].hours << " | Rate: " << staff[i].rate 
             << " | Gross: $" << staff[i].grossPay << endl;
    }

    return 0;
}