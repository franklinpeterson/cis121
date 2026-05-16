#include <iostream>
#include <string>
#include <iomanip>

class Membership {
public:

    Membership() {
        first_name = "Not Entered";
        last_name = "Not Entered";
        age = 18;
        membership_type = "Bronze";
    }


    void set_first_name(std::string name) { first_name = name; }
    void set_last_name(std::string name) { last_name = name; }
    void set_age(int a) { age = a; }
    void set_type(std::string t) { membership_type = t; }


    std::string get_first_name() { return first_name; }
    std::string get_last_name() { return last_name; }
    int get_age() { return age; }
    std::string get_type() { return membership_type; }


    double calculate_cost() {
        double cost = 0;
        if (membership_type == "Gold") cost = 1200.00;
        else if (membership_type == "Silver") cost = 1000.00;
        else cost = 500.00;

        if (age > 50) {
            cost = cost * 0.90;
        }
        return cost;
    }

protected:

    std::string first_name;
    std::string last_name;
    int age;
    std::string membership_type;
};

int main() {

    Membership member;
    std::string f_name, l_name, type;
    int age;

    std::cout << "Health Club Membership System (Press Ctrl+Z to exit)" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Enter Member First Name: ";
    while (std::cin >> f_name) {
        std::cout << "Enter Member Last Name: ";
        std::cin >> l_name;
        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cout << "Enter Membership Type (Gold/Silver/Bronze): ";
        std::cin >> type;

        member.set_first_name(f_name);
        member.set_last_name(l_name);
        member.set_age(age);
        member.set_type(type);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nMember Invoice" << std::endl;
        std::cout << "Name: " << member.get_first_name() << " " << member.get_last_name() << std::endl;
        std::cout << "Age: " << member.get_age() << std::endl;
        std::cout << "Level: " << member.get_type() << std::endl;
        std::cout << "Total Cost: " << member.calculate_cost() << std::endl;
        std::cout << "----------------------\n" << std::endl;
        std::cout << "Enter Member First Name (Ctrl+Z to exit): ";
        
    }
    return 0;
}