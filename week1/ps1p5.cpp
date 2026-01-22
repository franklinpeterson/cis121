#include<iostream>
using namespace std;
int main()
{
    // input
    float number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;

    float sum = number1+number2;
    float product = number1*number2;
    float difference = abs(number1-number2);

    // process + output
    cout << endl << "Sum: " << sum << endl << "Product: " << product << endl << "Difference: " << difference << endl;

    return 0;
}