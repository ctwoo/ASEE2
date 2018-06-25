#include <iostream>
#include <cmath>

int main()
{
    const double pi = 3.14159;
    int radius, height;
    double volume;

    std::cout << "What is the radius and height respectively of the cylinder?\n";
    std::cin >> radius >> height;

    volume = pi * height * pow(radius,2.0);

    std::cout << "The volume of the cylinder is " << volume << ".\n";
    return 0;
}
