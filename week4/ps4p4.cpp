#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string name;
    double cost;
    cout << "Enter name and cost: ";
    cin >> name >> cost;

    // Process
    double warranty;
    if (cost > 1000) warranty = 0.10 * cost;
    else warranty = 0.05 * cost;

    double total = cost + warranty;

    // Output
    cout << "Name: " << name << endl;
    cout << "Cost: " << cost << endl;
    cout << "Warranty: " << warranty << endl;
    cout << "Total: " << total << endl;

    return 0;
}