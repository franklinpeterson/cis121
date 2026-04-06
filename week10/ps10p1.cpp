#include <iostream>
#include <iomanip>
using namespace std;

void computeOrder(double qty, double prc, double &ttl, double &tx, double &ttlOrd) {
    ttl = qty * prc;
    tx = ttl * 0.07;
    ttlOrd = ttl + tx;
}

int main() {
    double quantity, price, total, tax, totalOrder;
    double sumTotalOrder = 0, sumTotalTax = 0;

    // Input
    while (cin >> quantity >> price) {
        
        // Process
        computeOrder(quantity, price, total, tax, totalOrder);
        sumTotalOrder += totalOrder;
        sumTotalTax += tax;

        // Output
        cout << fixed << setprecision(2) << "Total: " << total << " Tax: " << tax << " Order Total: " << totalOrder << "\n\n";
    }

    // Output
    cout << "Total Orders: " << sumTotalOrder << " Total Tax: " << sumTotalTax << endl;

    return 0;
}