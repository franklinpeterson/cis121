#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string item;
    double quantity;
    cout << "Enter item and quantity: ";
    cin >> item >> quantity;

    // Process
    double price = 0;
    if (item == "A") price = 10.00;
    if (item == "B") price = 20.00;

    double eprice = quantity * price;

    // Output
    cout << "Item: " << item << endl;
    cout << "Price: " << price << endl;
    cout << "Total price: " << eprice << endl;

    return 0;
}