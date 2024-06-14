#include <iostream>

void mice() {
    std::cout << " blind mice\n";
}

void run() {
    std::cout << " how they run\n";
}

int main() {
    mice();
    mice();
    run();
    run();

    return 0;
}