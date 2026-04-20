#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Function to get student data from file
void readStudents(string firstName[], string lastName[], double gpa[]) {
    ifstream inputFile("students.txt");
    for (int i = 0; i < 10; i++) {
        inputFile >> firstName[i] >> lastName[i] >> gpa[i];
    }
    inputFile.close();
}

// Function to display student data
void displayStudents(string firstName[], string lastName[], double gpa[]) {
    cout << "Student List:\n";
    for (int i = 0; i < 10; i++) {
        cout << firstName[i] << " " << lastName[i] << ": " << fixed << setprecision(2) << gpa[i] << endl;
    }
}

// Function to display student data in reverse
void displayReverseStudents(string firstName[], string lastName[], double gpa[]) {
    cout << "\nReverse Student List:\n";
    for (int i = 9; i >= 0; i--) {
        cout << firstName[i] << " " << lastName[i] << ": " << fixed << setprecision(2) << gpa[i] << endl;
    }
}

int main() {
    string firstName[10];
    string lastName[10];
    double gpa[10];

    // Input
    readStudents(firstName, lastName, gpa);

    // Process & Output
    displayStudents(firstName, lastName, gpa);
    displayReverseStudents(firstName, lastName, gpa);

    return 0;
}