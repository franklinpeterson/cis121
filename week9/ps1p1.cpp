#include <iostream>
#include <iomanip>
using namespace std;

double computeTotal(double quantity, double price) {
    return quantity * price;
}

double computeDiscountTotal(double total) {
    double discountAmount;
    if (total > 10000.00) {
        discountAmount = total * 0.10;
    } else {
        discountAmount = total * 0.05;
    }
    return total - discountAmount;
}

int main() {
    double quantity, price, total, discountTotal;
    double sumTotal = 0;
    double sumDiscountTotal = 0;

    // Input
    while (cin >> quantity >> price) {

        // Process
        total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);
        sumTotal += total;
        sumDiscountTotal += discountTotal;

        // Output
        cout << fixed << setprecision(2) << "Total: " << total << " Discount Total: " << discountTotal << "\n\n";
    }

    cout << "Sum Total: " << sumTotal << " Sum Discount Total: " << sumDiscountTotal << endl;

    return 0;
}