#include <iostream>
using namespace std;

int main() {
    // Input
    double quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Process
    double price;
    if (quantity >= 1000) price = 3.00;
    else price = 5.00;

    double extended_price = quantity * price;
    double tax = 0.07 * extended_price;
    double total = extended_price + tax;

    // Output
    cout << "Quantity: " << quantity << endl;
    cout << "Unit price: " << price << endl;
    cout << "Extended price: " << extended_price << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << total << endl;

    return 0;
}