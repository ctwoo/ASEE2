#include <iostream>

int main()
{
   int number = 12345;
   int rightmost = number % 10;

   std::cout << "The rightmost digit is " << rightmost << "." << std::endl;
   return 0;

}
