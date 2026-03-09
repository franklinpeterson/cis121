#include <iostream>
#include <string>
using namespace std;

int main() {
    string destinationCity;
    double milesTravelled, gallonsUsed, milesPerGallon;
    double totalMiles = 0;
    int tripCount = 0;

    // Input
    while (cin >> destinationCity >> milesTravelled >> gallonsUsed) {

        // Process
        milesPerGallon = milesTravelled / gallonsUsed;
        totalMiles += milesTravelled;
        tripCount = tripCount + 1;

        // Output
        cout << "City: " << destinationCity << " MPG: " << milesPerGallon << "\n\n";
    }

    cout << "Total miles: " << totalMiles << " Total trips: " << tripCount << endl;

    return 0;
}