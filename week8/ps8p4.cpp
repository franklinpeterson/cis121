#include <iostream>
#include <iomanip>
using namespace std;

double getUnitPrice(char code) {
    if (code == 'W') return 10.00;
    if (code == 'C') return 15.00;
    if (code == 'G') return 20.00;
    return 0;
}

double getShipping(char code) {
    if (code == 'W') return 2.00;
    if (code == 'C') return 5.00;
    if (code == 'G') return 7.00;
    return 0;
}

int main() {
    char productCode;
    double quantity, unitPrice, shippingCost, extendedPrice, totalOrder;
    double grandTotal = 0;

    // Input
    while (cin >> productCode >> quantity) {

        // Process
        unitPrice = getUnitPrice(productCode);
        shippingCost = getShipping(productCode);
        extendedPrice = quantity * unitPrice;
        totalOrder = extendedPrice + shippingCost;
        grandTotal += totalOrder;

        // Output
        cout << fixed << setprecision(2) << "Code: " << productCode << " Unit Price: " << unitPrice << " Shipping: " << shippingCost << " Extended: " << extendedPrice << " Total: " << totalOrder << "\n\n";
    }

    cout << "Grand Total: " << grandTotal << endl;

    return 0;
}