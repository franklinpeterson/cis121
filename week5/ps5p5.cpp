#include <iostream>
using namespace std;

int main() {
    // Input
    double weight, rate, total;

    cout << "Enter weight: ";
    cin >> weight;

    // Process
    if (weight > 1000) rate = 0.10;
    else if (weight > 500) rate = 0.08;
    else rate = 0.05;

    total = weight * rate;

    // Output
    cout << "Weight: " << weight << " Rate: " << rate << " Total: " << total << endl;
    return 0;
}