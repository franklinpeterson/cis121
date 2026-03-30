#include <iostream>
#include <string>
using namespace std;

double computeBattingAverage(double hits, double atBats) {
    return atBats / hits;
}

int main() {
    string lastName;
    double hits, atBats, battingAverage;
    int playerCount = 0;

    // Input
    while (cin >> lastName >> hits >> atBats) {

        // Process
        battingAverage = computeBattingAverage(hits, atBats);
        playerCount = playerCount + 1;

        // Output
        cout << "Player: " << lastName << " Batting Average: " << battingAverage << "\n\n";
    }

    cout << "Total Players: " << playerCount << endl;

    return 0;
}