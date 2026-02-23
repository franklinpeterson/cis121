#include <iostream>
using namespace std;

int main() {
    // Input
    double quantity, price, total;

    cout << "Enter quantity: ";
    cin >> quantity;

    // Process
    if (quantity >= 50) price = 0.50;
    else if (quantity >= 20) price = 0.75;
    else price = 1.00;

    total = quantity * price;

    // Output
    cout << "Price: " << price << " Total: " << total << endl;
    return 0;
}