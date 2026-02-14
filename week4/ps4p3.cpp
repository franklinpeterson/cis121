#include <iostream>
using namespace std;

int main() {
    // Input
    double quantity, cost;
    cout << "Enter quantity and cost: ";
    cin >> quantity >> cost;

    // Process
    double total = quantity * cost;
    double shipping;
    if (total > 50.00) shipping = 0;
    else shipping = 25.00;

    // Output
    cout << "Total: " << total << endl;
    cout << "Shipping: " << shipping << endl;

    return 0;
}