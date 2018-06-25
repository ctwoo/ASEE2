#include <iostream>

int main()
{
    float MilesTraveled = 370;
    float GallonsGas = 15;
    double MilesPerGallon;

    MilesPerGallon = MilesTraveled / GallonsGas;

    std::cout << "The car has " << MilesPerGallon << " MPG.\n";
    return 0;
}
