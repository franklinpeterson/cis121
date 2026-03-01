#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // input
    char job_code;
    double hours, rate, gross_salary;

    cout << "enter job code: ";
    cin >> job_code;
    cout << "enter hours: ";
    cin >> hours;

    // process
    if ((job_code == 'l' || job_code == 'L') && hours > 40) {
        rate = 50.00;
    } else if ((job_code == 'l' || job_code == 'L') && hours <= 40) {
        rate = 40.00;
    } else if ((job_code == 'j' || job_code == 'J') && hours > 60) {
        rate = 100.00;
    } else if ((job_code == 'j' || job_code == 'J') && hours <= 60) {
        rate = 75.00;
    } else if ((job_code == 'a' || job_code == 'A') && hours > 40) {
        rate = 25.00;
    } else if ((job_code == 'a' || job_code == 'A') && hours <= 40) {
        rate = 20.00;
    } else {
        rate = 0.00;
    }

    //gross_salary = hours * rate;
    gross_salary = hours * rate;

    // output
    cout << fixed << setprecision(2);
    cout << "gross salary: " << gross_salary << endl;

    return 0;
}