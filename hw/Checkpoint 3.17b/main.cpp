#include <iostream>
#include <iomanip>

int main()
{
   // Part B
    float number = 7.0;
    std::cout << std::setw(5) << std::setprecision(3) << std::fixed;
    std::cout << number << std::endl;
    return 0;
}
