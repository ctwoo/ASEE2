#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string person = "Wolfgang Smith";
    std::cout << std::setw(20);
    std::cout << std::right << person << std::endl;
    std::cout << std::left << person << std::endl;
    return 0;
    }
