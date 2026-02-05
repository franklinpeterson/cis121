#include <iostream>
using namespace std;

int main() {
    double price, quantity, value;
    cout << "Enter stock price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    value = price * quantity;
    cout << "Current Value: " << value << endl;
    return 0;
}