#include <iostream>

int main()
{
    int TotalSeconds = 700;
    int minutes, seconds;

    minutes= TotalSeconds / 60;
    seconds= TotalSeconds % 60;

    std::cout << "700 seconds is equivalent to:\n";
    std::cout << "Minutes: " << minutes << std::endl;
    std::cout << "Seconds: " << seconds << std::endl;
    return 0;

}
