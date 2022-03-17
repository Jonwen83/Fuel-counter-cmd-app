#include <iostream>

int main() {

    double fuel;
    double kms;

    std::cout << "enter fuel in litres: \n";
    std::cin >> fuel;
    std::cout << "enter kms on trip meter: \n";
    std::cin >> kms;

    std::cout << "your economy is\n " << fuel / kms * 100 << "litres per 100kms \n";

    std::cout << "press any key followed by enter to exit \n";
    std::cin >> kms;
}