#include <iostream>

int main()
{
    int integer1, integer2;
    double result;
    integer1 = 19;
    integer2 = 2;

    result = integer1 / integer2;
    std::cout << result << std::endl;

    result = static_cast<double>(integer1) / integer2;
    std::cout << result << std::endl;

    result = static_cast<double>(integer1 / integer2);
    std::cout << result << std::endl;
    return 0;
}
