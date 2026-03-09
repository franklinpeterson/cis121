#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    double hits, atBats, battingAverage;
    int playerCount = 0;

    // Input
    while (cin >> lastName >> hits >> atBats) {

        // Process
        battingAverage = hits / atBats;
        playerCount = playerCount + 1;

        // Output
        cout << "Player: " << lastName << " Batting Average: " << battingAverage << "\n\n";
    }

    cout << "Total player count: " << playerCount << endl;

    return 0;
}