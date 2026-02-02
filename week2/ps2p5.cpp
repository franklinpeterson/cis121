#include<iostream>
using namespace std;
int main()
{
    // input
    float price, discount, damount, dprice;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter discount percent (decimal): ";
    cin >> discount;

    // process
    damount = price * discount;
    dprice = price - damount;

    // output
    cout << "Discount amount: " << damount << endl;
    cout << "Discount price: " << dprice << endl;

    return 0;
}