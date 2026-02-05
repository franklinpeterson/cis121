#include <iostream>
using namespace std;

int main() {
    double mealtotal, tip, totalwithtip;
    cout << "Enter meal total: ";
    cin >> mealtotal;
    tip = mealtotal * 0.15;
    totalwithtip = mealtotal + tip;
    cout << "Total: " << mealtotal << "\nTip: " << tip << "\nTotal with Tip: " << totalwithtip << endl;
    return 0;
}