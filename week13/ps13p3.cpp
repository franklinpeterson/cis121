#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Global structure
struct Student {
    string firstName;
    string lastName;
    char districtCode;
    double creditHours;
    double tuitionBalance;
};

// Function to compute tuition based on residency
double calculateTuition(char code, double credits) {
    double rate = (code == 'I') ? 250.00 : 500.00;
    return credits * rate;
}

// Function to display vector using range-based loop
void displayStudents(const vector<Student>& list) {
    cout << fixed << setprecision(2) << "\nStudent Records:\n";
    for (const auto& s : list) {
        cout << s.firstName << " " << s.lastName << " | Code: " << s.districtCode 
             << " | Credits: " << s.creditHours << " | Owed: $" << s.tuitionBalance << endl;
    }
}

int main() {
    vector<Student> students;
    string f, l;
    char c;
    double h;

    // Input loop
    cout << "Enter first name (Ctrl+Z to stop): ";
    while (cin >> f) {
        cout << "Enter last name, district code (I/O), and credits: ";
        cin >> l >> c >> h;

        Student temp;
        temp.firstName = f;
        temp.lastName = l;
        temp.districtCode = c;
        temp.creditHours = h;
        
        // Process
        temp.tuitionBalance = calculateTuition(c, h);
        students.push_back(temp);

        cout << "\nEnter first name (Ctrl+Z to stop): ";
    }

    // Output
    displayStudents(students);
    cout << "\nTotal number of students: " << students.size() << endl;

    return 0;
}