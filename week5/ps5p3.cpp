#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string lastname;
    double hours, rate, total;
    char jobcode;

    cout << "Enter last name: ";
    cin >> lastname;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter job code: ";
    cin >> jobcode;

    // Process
    if (jobcode == 'A') rate = 25;
    else if (jobcode == 'B') rate = 20;
    else rate = 15;

    total = hours * rate;

    // Output
    cout << "Lastname: " << lastname << " Hours: " << hours << " Rate: " << rate << " Total: " << total << endl;
    return 0;
}