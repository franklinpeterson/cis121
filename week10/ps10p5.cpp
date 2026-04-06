#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void calculateGrowth(double amt, double r5, double r10, double &a5, double &a10) {
    a5 = amt * pow((1 + r5), 5);
    a10 = amt * pow((1 + r10), 10);
}

int main() {
    double investmentAmount, fiveYearRate, tenYearRate, fiveYearAmt, tenYearAmt;

    // Input
    while (cin >> investmentAmount >> fiveYearRate >> tenYearRate) {
        
        // Process
        calculateGrowth(investmentAmount, fiveYearRate, tenYearRate, fiveYearAmt, tenYearAmt);

        // Output
        cout << fixed << setprecision(2) << "Investment: " << investmentAmount << " 5-Year: " << fiveYearAmt << " 10-Year: " << tenYearAmt << "\n\n";
    }

    return 0;
}