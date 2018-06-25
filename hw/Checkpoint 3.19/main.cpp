#include <iostream>
#include <iomanip>
int main()
{
    const double PI = 3.14159;
    double degrees, radians;

    std::cout << "Enter the angle in degrees." << std::endl;
    std::cin >> degrees;
    radians = degrees * PI/180;

    std::cout << std::setw(5) << std::left << std::setprecision(4) << std::showpoint << std::fixed;
    std::cout << radians << std::endl;
    return 0;
}
