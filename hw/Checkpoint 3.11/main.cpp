#include <iostream>

int main()
{
    int a = 5;
    int b = 12;
    double x = 3.4;
    double z = 9.1;

    std::cout << b / a << std::endl;
    std::cout << x * a << std::endl;
    std::cout << static_cast<double>(b / a) << std::endl;
    std::cout << static_cast<double>(b) / a << std::endl;
    std::cout << b / static_cast<double>(a) << std::endl;
    std::cout << static_cast<double>(b) / static_cast<double>(a) << std::endl;
    std::cout << b / static_cast<int>(x) << std::endl;
    std::cout << static_cast<int>(x) * static_cast<int>(z) <<std::endl;
    std::cout << static_cast<int>(x * z) << std::endl;
    std::cout << static_cast<double>(static_cast<int>(x) * static_cast<int>(z));
    return 0;
}
