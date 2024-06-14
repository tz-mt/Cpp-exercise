#include <iostream>

float temperature(float temp) {
    return 18 * temp + 32.0; 
}

int main() {
    float temp, Ftemp;

    std::cin >> temp;
    std::cout << "Please enter a Celsius value: " << temp << std::endl;

    Ftemp = temperature(temp);
    std::cout << temp << " degrees Celsius is " << Ftemp << "degrees Fahrenheit" << std::endl;

    return 0;
}