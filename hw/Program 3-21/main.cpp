#include <iostream>

int main()
{
    char ch;

    std::cout << "This program has paused. Press Enter to continue.\n";
    std::cin.get(ch);
    std::cout << "It has paused a second time. Press Enter again.\n";
    std::cin.get(ch);
    std::cout << "It paused a third time because I hate you. Press Enter again lmao \n";
    std::cin.get(ch);
    std::cout << "All good.";
    return 0;
}
