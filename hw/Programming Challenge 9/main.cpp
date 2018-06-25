#include <iostream>

int main()
{

    std::cout << "Char=" << sizeof(char) << "\n";
    std::cout << "Int=" << sizeof(int) << std::endl;
    std::cout << "Float=" << sizeof(float) << std::endl;
    std::cout << "Double=" << sizeof(double) << std::endl;
    std::cout << "Long=" << sizeof(long) << std::endl;
    std::cout << "Size_t=" << sizeof(size_t) << std::endl;
    std::cout << '\n' << std::endl;

    sizeof (int) / sizeof (char);
    sizeof (float) / sizeof (char);
    sizeof (double) / sizeof (char);
    sizeof (long) / sizeof (char);
    sizeof (size_t) / sizeof (char);

    std::cout << sizeof (int) / sizeof (char) << " characters can fit within the space of 1 int.\n";
    std::cout << sizeof (float) / sizeof (char) << " characters can fit within the space of 1 float.\n";
    std::cout << sizeof (double) / sizeof (char) << " characters can fit within the space of 1 double.\n";
    std::cout << sizeof (long) / sizeof (char) << " characters can fit within the space of 1 long.\n";
    std::cout << sizeof (size_t) / sizeof (char) << " characters can fit within the space of 1 size_t.\n";

    sizeof (double) / sizeof (float);
    sizeof (double) / sizeof (long);
    sizeof (double) / sizeof (size_t);

    std::cout << sizeof (double) / sizeof (float) << " floats can fit within the space of 1 double.\n";
    std::cout << sizeof (double) / sizeof (long) << " longs can fit within the space of 1 double.\n";
    std::cout << sizeof (double) / sizeof (size_t) << " size_ts can fit within the space of 1 double.\n";
    return 0;
}
