#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

double computeExtendedPrice(double qty, double price) {
    return qty * price;
}

int main() {
    ifstream inputFile("grocery.txt");
    string groceryItem;
    double quantity, costPerItem, extendedPrice;
    double sumExtendedPrice = 0, tax, totalReceipt;

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Input
    while (inputFile >> groceryItem >> quantity >> costPerItem) {
        
        // Process
        extendedPrice = computeExtendedPrice(quantity, costPerItem);
        sumExtendedPrice += extendedPrice;

        // Output
        cout << fixed << setprecision(2) << "Item: " << groceryItem << " Qty: " << quantity << " Cost: " << costPerItem << " Extended: " << extendedPrice << "\n\n";
    }

    // Final Process
    tax = sumExtendedPrice * 0.07;
    totalReceipt = sumExtendedPrice + tax;

    // Final Output
    cout << "Subtotal: " << sumExtendedPrice << " Tax: " << tax << " Total: " << totalReceipt << endl;

    inputFile.close();
    return 0;
}