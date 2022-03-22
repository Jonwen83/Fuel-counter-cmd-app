#include <iostream>

int main() {

    double fuel;
    double kms;
    char response;
    double price;

    std::cout << "enter fuel in litres: \n";
    std::cin >> fuel;
    std::cout << "enter kms on trip meter: \n";
    std::cin >> kms;

    std::cout << "your economy is " << fuel / kms * 100 << "litres per 100kms \n";

    std::cout << "would you like to calculate cost per km? y/n \n";
    std::cin >> response;
    if (!( response != 'Y' && response != 'y')) {
        std::cout << "please enter fuel price in format 0.00: \n";
        std::cin >> price;
        std::cout << "Youve used " << fuel / kms * price << "\t euro per km \n";
        std::cout << "press any key followed by enter to exit \n";
        std::cin >> kms;
    }
    else {

    std::cout << "press any key followed by enter to exit \n";
    std::cin >> kms;
    }
}