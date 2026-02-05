#include <iostream>
using namespace std;

int main() {
    double score1, score2, totalScore;
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    totalScore = (0.6 * score1) + (0.4 * score2);
    cout << "Total Score: " << totalScore << endl;
    return 0;
}