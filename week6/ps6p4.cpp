#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // input
    char equipment_code, day_code;
    double cost;

    cout << "enter equipment code: ";
    cin >> equipment_code;
    cout << "enter day code: ";
    cin >> day_code;

    // process
    if ((equipment_code == 'a' || equipment_code == 'A') && (day_code == 'f' || day_code == 'F')) {
        cost = 10.00;
    } else if ((equipment_code == 'a' || equipment_code == 'A') && (day_code == 'h' || day_code == 'H')) {
        cost = 15.00;
    } else if ((equipment_code == 'b' || equipment_code == 'B') && (day_code == 'f' || day_code == 'F')) {
        cost = 20.00;
    } else if ((equipment_code == 'b' || equipment_code == 'B') && (day_code == 'h' || day_code == 'H')) {
        cost = 35.00;
    } else if ((equipment_code == 'c' || equipment_code == 'C') && (day_code == 'h' || day_code == 'H')) {
        cost = 40.00;
    } else if ((equipment_code == 'c' || equipment_code == 'C') && (day_code == 'f' || day_code == 'F')) {
        cost = 45.00;
    } else {
        cost = 50.00;
    }

    // output
    cout << fixed << setprecision(2);
    cout << "rental cost: " << cost << endl;

    return 0;
}