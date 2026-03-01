#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // input
    int number_of_tickets;
    char location_code;
    double price, total_cost;

    cout << "enter number of tickets: ";
    cin >> number_of_tickets;
    cout << "enter location code: ";
    cin >> location_code;

    // process
    if (number_of_tickets > 25 || location_code == 'h' || location_code == 'H') {
        price = 30.00;
    } else if (number_of_tickets > 10 || location_code == 'l' || location_code == 'L') {
        price = 40.00;
    } else {
        price = 50.00;
    }

    total_cost = number_of_tickets * price;

    // output
    cout << fixed << setprecision(2);
    cout << "number of tickets: " << number_of_tickets << endl;
    cout << "price per ticket: " << price << endl;
    cout << "total cost: " << total_cost << endl;

    return 0;
}