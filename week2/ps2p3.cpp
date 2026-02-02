#include<iostream>
using namespace std;
int main()
{
    // input
    float length, width, area, circ;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // process
    area = length * width;
    circ = 2 * length + 2 * width;

    // output
    cout << "Area: " << area << " Circumference: " << circ << endl;

    return 0;
}