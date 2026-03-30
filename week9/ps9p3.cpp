#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double computeMPG(double miles, double gallons) {
    return miles / gallons;
}

double computeGasCost(double gallons) {
    return gallons * 3.50;
}

int main() {
    string destinationCity;
    double milesTravelled, gallonsUsed, milesPerGallon, gasCost;
    double totalGasCost = 0;

    // Input
    while (cin >> destinationCity >> milesTravelled >> gallonsUsed) {

        // Process
        milesPerGallon = computeMPG(milesTravelled, gallonsUsed);
        gasCost = computeGasCost(gallonsUsed);
        totalGasCost += gasCost;

        // Output
        cout << fixed << setprecision(2) << "City: " << destinationCity << " MPG: " << milesPerGallon << " Gas Cost: " << gasCost << "\n\n";
    }

    cout << "Total Gas Cost: " << totalGasCost << endl;

    return 0;
}