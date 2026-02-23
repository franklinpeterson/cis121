#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string lastname;
    double score;
    char grade;

    cout << "Enter last name: ";
    cin >> lastname;
    cout << "Enter score: ";
    cin >> score;

    // Process
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';

    // Output
    cout << "Student: " << lastname << " Grade: " << grade << endl;
    return 0;
}