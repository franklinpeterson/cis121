#include<iostream>
using namespace std;
int main()
{
    // input
    float quantity, unit_price, extended_price;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unit_price;

    // process
    extended_price = quantity * unit_price;

    // output
    cout << "Extended Price: " << extended_price << endl;

    return 0;
}