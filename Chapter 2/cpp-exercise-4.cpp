#include <iostream>

int main() {
    int age,month;

    std::cout << "Enter your age:";
    std::cin >> age;
    std::cout << age << std::endl;

    month = age * 12;
    std::cout << "Month:" << month ;

    return 0;
}