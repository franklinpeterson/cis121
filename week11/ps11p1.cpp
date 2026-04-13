#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void computeAutoDetails(double msrp, double salesPrice, double &savings, double &salesTax) {
    savings = msrp - salesPrice;
    salesTax = salesPrice * 0.07;
}

int main() {
    ifstream inputFile("auto.txt");
    string autoMake, autoModel;
    double msrp, salesPrice, savings, salesTax;
    double totalSavings = 0;

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Input
    while (inputFile >> autoMake >> autoModel >> msrp >> salesPrice) {
        
        // Process
        computeAutoDetails(msrp, salesPrice, savings, salesTax);
        totalSavings += savings;

        // Output
        cout << fixed << setprecision(2) << "Make: " << autoMake << " Model: " << autoModel << " MSRP: " << msrp << " Sales Price: " << salesPrice << " Savings: " << savings << " Tax: " << salesTax << "\n\n";
    }

    cout << "Total Savings: " << totalSavings << endl;

    inputFile.close();
    return 0;
}