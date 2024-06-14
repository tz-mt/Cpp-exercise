#include <iostream>

double transfer(double lyear) {
    return lyear * 63240;
}

int main() {
    int lyear, units;

    std::cin >> lyear;
    std::cout << "Enter the number of hours: " << lyear << std::endl;

    units = transfer(lyear);
    std::cout << lyear << " light years = " << units << " astronomical units." <<std::endl;

}