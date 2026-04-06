#include <iostream>
#include <iomanip>
using namespace std;

void calculatePostage(double wgt, int zip, double &pst, double &areaChg, double &wgtChg) {
    if (zip == 60171) areaChg = 2.00;
    else if (zip == 60172) areaChg = 2.50;
    else if (zip == 60635) areaChg = 3.00;
    else areaChg = 5.00;

    double rate;
    if (wgt > 100) rate = 0.02;
    else if (wgt > 50) rate = 0.03;
    else rate = 0.05;

    wgtChg = wgt * rate;
    pst = areaChg + wgtChg;
}

int main() {
    double weight, postage, areaCharge, weightCharge;
    int zipCode, entryCount = 0;

    // Input
    while (cin >> weight >> zipCode) {
        
        // Process
        calculatePostage(weight, zipCode, postage, areaCharge, weightCharge);
        entryCount++;

        // Output
        cout << fixed << setprecision(2) << "Area Chg: " << areaCharge << " Weight Chg: " << weightCharge << " Postage: " << postage << "\n\n";
    }

    // Output
    cout << "Total entries: " << entryCount << endl;

    return 0;
}