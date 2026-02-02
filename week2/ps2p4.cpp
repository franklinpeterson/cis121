#include<iostream>
using namespace std;
int main()
{
    // input
    string lastname;
    float credits, tuition;
    cout << "Enter last name: ";
    cin >> lastname;
    cout << "Enter credits: ";
    cin >> credits;

    // process
    tuition = 250 * credits + 100;

    // output
    cout << lastname << ": $" << tuition << endl;

    return 0;
}