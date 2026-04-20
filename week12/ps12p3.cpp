#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Function to load employee data into arrays
void loadEmployees(string firstName[], string lastName[], double salary[]) {
    ifstream inputFile("Empldata.txt");
    for (int i = 0; i < 10; i++) {
        inputFile >> firstName[i] >> lastName[i] >> salary[i];
    }
    inputFile.close();
}

// Function to display all employee data
void displayEmployees(string firstName[], string lastName[], double salary[]) {
    for (int i = 0; i < 10; i++) {
        cout << firstName[i] << " " << lastName[i] << " $" << fixed << setprecision(2) << salary[i] << endl;
    }
}

// Function to perform sequential search on last name
int searchEmployees(string lastName[], string searchName) {
    for (int i = 0; i < 10; i++) {
        if (lastName[i] == searchName) {
            return i;
        }
    }
    return -1;
}

int main() {
    string firstName[10];
    string lastName[10];
    string searchName;
    double salary[10];
    int index;

    // Input
    loadEmployees(firstName, lastName, salary);
    displayEmployees(firstName, lastName, salary);

    // Process & Output Loop
    cout << "\nEnter last name to search, ctl+z to stop: ";
    while (cin >> searchName) {
        index = searchEmployees(lastName, searchName);

        if (index != -1) {
            cout << "Found: " << firstName[index] << " " << lastName[index] << " Salary: $" << salary[index] << endl;
        } else {
            cout << searchName << " not found" << endl;
        }
        cout << "Enter last name to search, ctl+z to stop: ";
    }

    return 0;
}