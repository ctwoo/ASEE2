#include <iostream>

int main()
{
    int length, width, area;

    std::cout << "What's the area of a given rectangle?\n";
    std::cin >> width >> length;

    area = length * width;

    std::cout << "The area is " << area << " units^2." << std::endl;
    return 0;

}
