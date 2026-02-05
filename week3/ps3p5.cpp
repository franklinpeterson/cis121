#include <iostream>
using namespace std;

int main() {
    double fixedcost, price, cost, breakeven;
    cout << "Enter fixed costs: ";
    cin >> fixedcost;
    cout << "Enter price per unit: ";
    cin >> price;
    cout << "Enter cost per unit: ";
    cin >> cost;
    breakeven = fixedcost / (price - cost);
    cout << "Break Even Point: " << breakeven << " units" << endl;
    return 0;
}