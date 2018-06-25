#include <iostream>
#include <iomanip>

int main()
{
     // Part C
    double number = 5.789e12;
    std::cout << std::setprecision(0) << std::fixed;
    std::cout << number << std::endl;
    return 0;
}
