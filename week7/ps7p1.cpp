#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double quantity, price, extendedPrice, discountAmount, discountedPrice;
    double totalDiscountedSum = 0;

    // Input
    while (cin >> quantity >> price) {
        
        // Process
        extendedPrice = quantity * price;
        if (quantity > 1000) {
            discountAmount = extendedPrice * 0.10;
        } else {
            discountAmount = 0;
        }
        discountedPrice = extendedPrice - discountAmount;
        totalDiscountedSum += discountedPrice;

        // Output
        cout << fixed << setprecision(2) << "Quantity: " << quantity << " Price: " << price << " Extended: " << extendedPrice << " Discount: " << discountAmount << " Discounted Price: " << discountedPrice << "\n\n";
    }

    cout << "Total of all discounted prices: " << totalDiscountedSum << endl;

    return 0;
}