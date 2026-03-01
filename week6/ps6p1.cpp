#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // input
    int quantity;
    char status;
    double price, extended_price, tax_amount, total;

    cout << "enter quantity: ";
    cin >> quantity;
    cout << "enter status: ";
    cin >> status;

    // process
    if (quantity > 10000 && (status == 'a' || status == 'A')) {
        price = 10.0;
    } else if (quantity > 10000 && (status == 'b' || status == 'B')) {
        price = 12.0;
    } else if (quantity >= 5000 && (status == 'c' || status == 'C')) {
        price = 20.0;
    } else if (quantity >= 5000 && (status == 'd' || status == 'D')) {
        price = 22.0;
    } else {
        price = 30.0;
    }

    extended_price = quantity * price;
    tax_amount = extended_price * 0.07;
    total = extended_price + tax_amount;

    // output
    cout << fixed << setprecision(2);
    cout << "extended price: " << extended_price << endl;
    cout << "tax amount: " << tax_amount << endl;
    cout << "total: " << total << endl;

    return 0;
}