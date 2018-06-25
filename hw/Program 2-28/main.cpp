#include <iostream>

int main()
{
   const double PI = 3.14159;
   const double DIAMETER = 10;

   double circumference;
   circumference = PI * DIAMETER;

   std::cout << "The circumference of the circle with radius 5 is " << circumference << ".\n";
   return 0;
}
