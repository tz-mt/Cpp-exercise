#include <iostream>

const int trans1 = 12;

int main() {
    int tall = 0;

    std::cout << "Enter your tall __\b\b";
    std::cin >> tall;

    int foot, inch;
    foot = tall / trans1;
    inch = tall % trans1;

    std::cout << "your tall in is: " 
              << tall 
              << std::endl
              << "foot : "
              << foot 
              << std::endl
              << "inch : "
              << inch
              << std::endl;
}