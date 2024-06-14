#include <iostream>

void hmshow(int hours, int minutes) {
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}

int main() {
    int hour , min;

    std::cout << "Enter the number of hours: ";
    std::cin >> hour;

    std::cout << "Enter the number of minutes: ";
    std::cin >> min;

    hmshow(hour, min);

    return 0;
}