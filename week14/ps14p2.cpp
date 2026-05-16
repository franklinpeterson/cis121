#include <iostream>
#include <string>
#include <iomanip>

class ComputerAsset {
public:

    ComputerAsset() {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hard_drive = "HD";
        type = "Laptop";
    }


    void set_make(std::string m) { make = m; }
    void set_model(std::string mod) { model = mod; }
    void set_cpu(std::string c) { cpu = c; }
    void set_ram(std::string r) { ram = r; }
    void set_drive(std::string d) { hard_drive = d; }
    void set_type(std::string t) { type = t; }

    double calculate_total_cost() {
        double cost = 0;

        if (make == "Lenovo") cost += 1200.00;
        else if (make == "HP") cost += 1000.00;
        else if (make == "Apple") cost += 2000.00;

        if (cpu == "Intel") cost += 200.00;

        if (ram == "16GB") cost += 300.00;
        else if (ram == "32GB") cost += 500.00;

        if (hard_drive == "SSD") cost += 500.00;

        if (type == "Laptop") cost += 300.00;
        else if (type == "Tablet") cost -= 200.00;

        return cost;
    }

protected:
    std::string make, model, cpu, ram, hard_drive, type;

};

int main() {

    ComputerAsset asset;
    std::string mk, md, cp, rm, dr, tp;

    std::cout << "Computer Asset Entry (Press Ctrl+Z to exit)" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    std::cout << "Enter Computer Make: ";
    while (std::cin >> mk) {

        std::cout << "Enter Model (no spaces): ";
        std::cin >> md;
        std::cout << "Enter CPU (Intel/AMD): ";
        std::cin >> cp;
        std::cout << "Enter RAM (8GB/16GB/32GB): ";
        std::cin >> rm;
        std::cout << "Enter Drive (SSD/HD): ";
        std::cin >> dr;
        std::cout << "Enter Type (Laptop/Notebook/Tablet/Desktop): ";
        std::cin >> tp;
        asset.set_make(mk);
        asset.set_model(md);
        asset.set_cpu(cp);
        asset.set_ram(rm);
        asset.set_drive(dr);
        asset.set_type(tp);
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nAsset Summary" << std::endl;
        std::cout << "Device: " << mk << " " << md << std::endl;
        std::cout << "Total Valuation: " << asset.calculate_total_cost() << std::endl;
        std::cout << "\n" << std::endl;

        std::cout << "Enter Computer Make (Ctrl+Z to exit): ";
    }
    return 0;
}