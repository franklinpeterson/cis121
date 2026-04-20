#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to load city data into arrays
void loadCities(string cityName[], int population[]) {
    ifstream inputFile("cities.txt");
    for (int i = 0; i < 8; i++) {
        inputFile >> cityName[i] >> population[i];
    }
    inputFile.close();
}

// Function to display city list
void displayCities(string cityName[], int population[]) {
    for (int i = 0; i < 8; i++) {
        cout << cityName[i] << " - " << population[i] << endl;
    }
}

// Function to perform sequential search
int searchCities(string cityName[], string searchCity) {
    for (int i = 0; i < 8; i++) {
        if (cityName[i] == searchCity) {
            return i;
        }
    }
    return -1;
}

int main() {
    string cityName[8];
    int population[8];
    string searchCity;
    int index;

    // Input
    loadCities(cityName, population);
    displayCities(cityName, population);

    // Process & Output Loop
    cout << "\nEnter city name, ctl+z to stop: ";
    while (cin >> searchCity) {
        index = searchCities(cityName, searchCity);

        if (index != -1) {
            cout << cityName[index] << " has a population of " << population[index] << endl;
        } else {
            cout << searchCity << " not found" << endl;
        }

        cout << "Enter city name, ctl+z to stop: ";
    }

    cout << "Goodbye. Have a nice day." << endl;
    return 0;
}