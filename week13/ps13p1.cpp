#include <iostream>
#include <string>
using namespace std;

// Function to display parallel arrays
void displayAutos(string make[], string model[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Make: " << make[i] << " | Model: " << model[i] << endl;
    }
}

int main() {
    int numAutos;

    // Input: Define array size
    cout << "Enter the number of autos: ";
    cin >> numAutos;

    // Dynamically define parallel arrays
    string* autoMake = new string[numAutos];
    string* autoModel = new string[numAutos];

    // Input loop
    for (int i = 0; i < numAutos; i++) {
        cout << "Enter make and model for auto " << i + 1 << ": ";
        cin >> autoMake[i] >> autoModel[i];
    }

    // Process & Output
    displayAutos(autoMake, autoModel, numAutos);

    // Clean up memory
    delete[] autoMake;
    delete[] autoModel;

    return 0;
}