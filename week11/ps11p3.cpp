#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double computeMPG(double gallons, double miles) {
    if (gallons == 0) return 0;
    return miles / gallons;
}

int main() {
    ifstream inputFile("trips.txt");
    double gallonsUsed, milesTravelled, mpg;
    double sumMiles = 0, sumGallons = 0;

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Input
    while (inputFile >> gallonsUsed >> milesTravelled) {
        
        // Process
        mpg = computeMPG(gallonsUsed, milesTravelled);
        sumMiles += milesTravelled;
        sumGallons += gallonsUsed;

        // Output
        cout << fixed << setprecision(2) << "Gallons: " << gallonsUsed << " Miles: " << milesTravelled << " MPG: " << mpg << "\n\n";
    }

    cout << "Total Gallons: " << sumGallons << " Total Miles: " << sumMiles << endl;

    inputFile.close();
    return 0;
}