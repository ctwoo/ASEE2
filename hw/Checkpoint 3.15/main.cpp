#include <iostream>

int main()
{
    int x, y;

    x = 10;
    x += 6;
    std::cout << x << std::endl;
    x -= 4;
    std::cout << x << std::endl;

    y = 27;
    y *= 4;
    std::cout << y << std::endl;
    y /= 27;
    std::cout << y << std::endl;
    x %= 7;
    std::cout << x << std::endl;
    x += y * 5;
    std::cout << x << std::endl;
    return 0;
}
