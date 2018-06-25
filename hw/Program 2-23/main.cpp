#include <iostream>

int main()
{
    double InitialPrice = 59.95, Discount = .20, TotalDiscount, FinalPrice;

    //Total Discount Calculation
    TotalDiscount = InitialPrice * Discount;
    std::cout << "The total discount off of the initial price is $" << TotalDiscount << ".\n";

    //Final Price
    FinalPrice = InitialPrice - TotalDiscount;
    std::cout << "The final price is $" << FinalPrice << "." << std::endl;
    return 0;
}
