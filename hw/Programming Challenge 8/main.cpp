#include <iostream>

int main()
{
    double SalesTax = .07;
    double Price1 = 15.95, TaxAmount1, Subtotal1;
    double Price2 = 24.95, TaxAmount2, Subtotal2;
    double Price3 = 6.95, TaxAmount3, Subtotal3;
    double Price4 = 12.95, TaxAmount4, Subtotal4;
    double Price5 = 3.95, TaxAmount5, Subtotal5;
    double TotalCost;

    //Item 1 Tax Amount and Subtotal
    TaxAmount1 = Price1 * SalesTax;
    Subtotal1 = TaxAmount1 + Price1;

    //Item 2 Tax Amount and Subtotal
    TaxAmount2 = Price2 * SalesTax;
    Subtotal2 = TaxAmount2 + Price2;

    //Item 3 Tax Amount and Subtotal
    TaxAmount3 = Price3 * SalesTax;
    Subtotal3 = TaxAmount3 + Price3;

    //Item 4 Tax Amount and Subtotal
    TaxAmount4 = Price4 * SalesTax;
    Subtotal4 = TaxAmount4 + Price4;

      //Item 5 Tax Amount and Subtotal
    TaxAmount5 = Price5 * SalesTax;
    Subtotal5 = TaxAmount5 + Price5;

    TotalCost = Subtotal1 + Subtotal2 + Subtotal3 + Subtotal4 + Subtotal5;

    std::cout << "Subtotal 1: $" << Subtotal1 << std::endl;
    std::cout << "Subtotal 2: $" << Subtotal2 << std::endl;
    std::cout << "Subtotal 3: $" << Subtotal3 << std::endl;
    std::cout << "Subtotal 4: $" << Subtotal4 << std::endl;
    std::cout << "Subtotal 5: $" << Subtotal5 << std::endl;
    std::cout << "The total cost of the purchase was $" << TotalCost << ".\n";
    return 0;
}
