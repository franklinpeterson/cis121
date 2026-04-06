#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgetOrder(int num, double &cost, double &ext, double &tax, double &ttl) {
    if (num >= 10000) cost = 4.00;
    else if (num >= 5000) cost = 5.00;
    else cost = 10.00;

    ext = num * cost;
    tax = ext * 0.07;
    ttl = ext + tax;
}

int main() {
    int numWidgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder, sumTotalOrders = 0;

    // Input
    while (cin >> numWidgets) {
        
        // Process
        computeWidgetOrder(numWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);
        sumTotalOrders += totalOrder;

        // Output
        cout << fixed << setprecision(2) << "Qty: " << numWidgets << " Cost: " << costPerWidget << " Extended: " << extendedPrice << " Tax: " << salesTax << " Total: " << totalOrder << "\n\n";
    }

    // Output
    cout << "Sum of all total orders: " << sumTotalOrders << endl;

    return 0;
}