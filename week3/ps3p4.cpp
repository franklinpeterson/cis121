#include <iostream>
using namespace std;

int main() {
    double purchaseprice, currentprice, percentchange;
    cout << "Enter purchase price: ";
    cin >> purchaseprice;
    cout << "Enter current price: ";
    cin >> currentprice;
    percentchange = (currentprice - purchaseprice) / purchaseprice;
    cout << "Percentage Change: " << percentchange * 100 << "%" << endl;
    return 0;
}