#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

double computeBiWeekly(double salary) {
    return salary / 26.0;
}

int main() {
    ifstream inputFile("empl.txt");
    string lastName;
    double annualSalary, biWeeklySalary, averageAnnualSalary;
    double sumAnnualSalary = 0;
    int employeeCount = 0;

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Input
    while (inputFile >> lastName >> annualSalary) {
        
        // Process
        biWeeklySalary = computeBiWeekly(annualSalary);
        sumAnnualSalary += annualSalary;
        employeeCount++;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Annual: " << annualSalary << " Bi-Weekly: " << biWeeklySalary << "\n\n";
    }

    if (employeeCount > 0) averageAnnualSalary = sumAnnualSalary / employeeCount;
    else averageAnnualSalary = 0;

    cout << "Sum Annual: " << sumAnnualSalary << " Count: " << employeeCount << " Average: " << averageAnnualSalary << endl;

    inputFile.close();
    return 0;
}