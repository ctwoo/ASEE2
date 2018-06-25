#include <iostream>

int main()
{
    float fractional;
    int integer;
    char letter;

    std::cin >> integer >> fractional >> letter;

    std::cout << "Integer: " << integer << '\n' << "Fraction: " << fractional << '\n' << "Letter: " << letter << std::endl;
    return 0;
    }
