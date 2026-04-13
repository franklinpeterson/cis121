#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void calculateTuitionAndFees(char code, double credits, double &tuition, double &fees) {
    double rate;
    if (code == 'I') rate = 250.00;
    else if (code == 'O') rate = 500.00;
    else rate = 0;

    tuition = credits * rate;
    fees = tuition * 0.10;
}

int main() {
    ifstream inputFile("student.txt");
    string lastName;
    char studentCode;
    double creditsTaken, tuitionOwed, courseFees, averageTuition;
    double sumTuition = 0;
    int studentCount = 0;

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Input
    while (inputFile >> lastName >> studentCode >> creditsTaken) {
        
        // Process
        calculateTuitionAndFees(studentCode, creditsTaken, tuitionOwed, courseFees);
        sumTuition += tuitionOwed;
        studentCount++;

        double rate = (studentCode == 'I') ? 250.00 : 500.00;

        // Output
        cout << fixed << setprecision(2) << "Name: " << lastName << " Code: " << studentCode << " Rate: " << rate << " Credits: " << creditsTaken << " Tuition: " << tuitionOwed << " Fees: " << courseFees << "\n\n";
    }

    if (studentCount > 0) averageTuition = sumTuition / studentCount;
    else averageTuition = 0;

    cout << "Total Tuition: " << sumTuition << " Students: " << studentCount << " Average Tuition: " << averageTuition << endl;

    inputFile.close();
    return 0;
}