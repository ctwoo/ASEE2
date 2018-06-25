#include <iostream>

int main()
{
    double numerator, denominator;

    std::cout << "Enter numerator: " << std::endl;
    std::cin >> numerator;
    std::cout << "Enter denominator: " << std::endl;
    std::cin >> denominator;
    std::cout << "The fraction is " << (numerator/denominator);
    return 0;
}
