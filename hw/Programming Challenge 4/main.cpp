#include <iostream>

int main()
{
    double TaxPercentage = .0675, TaxAmount;
    double TipPercentage = .20, TipAmount;
    double InitialBill = 88.67, TotalBill;

    //How much tax is going to be added onto the bill.
    TaxAmount = InitialBill * TaxPercentage;

    //How much tip is going to be added onto the bill
    TipAmount = TipPercentage * (TaxAmount + InitialBill);

    //Total Bill amount
    TotalBill = TipAmount + TaxAmount + InitialBill;

    //Results
    std::cout << "Total Tax Added: $" << TaxAmount << std::endl;
    std::cout << "Total Tip Added: $" << TipAmount << std::endl;
    std::cout << "Total Bill: $" << TotalBill << std::endl;
    return 0;
}
