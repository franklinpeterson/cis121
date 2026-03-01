#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // input
    int part_number, quantity;
    double cost_per_unit, total_cost;

    cout << "enter part number: ";
    cin >> part_number;
    cout << "enter quantity: ";
    cin >> quantity;

    // process
    if (part_number == 10 && quantity > 1000) {
        cost_per_unit = 1.00;
    } else if (part_number == 99 && quantity > 500) {
        cost_per_unit = 2.00;
    } else {
        cost_per_unit = 5.00;
    }

    total_cost = quantity * cost_per_unit;

    // output
    cout << fixed << setprecision(2);
    cout << "part number: " << part_number << endl;
    cout << "cost per unit: " << cost_per_unit << endl;
    cout << "total cost: " << total_cost << endl;

    return 0;
}