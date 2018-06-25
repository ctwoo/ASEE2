#include <iostream>
\

int main()
{
    double NumberShares = 750;
    float PricePerShare = 35.00, PercentCommission = .02;
    double AmountPaidStock, Commission, Total;

    //Amount Paid for Stock
    AmountPaidStock = NumberShares * PricePerShare;

    //Amount of Commission
    Commission = AmountPaidStock * PercentCommission;

    //Total Paid
    Total = Commission + AmountPaidStock;

    std::cout << "The amount Kathryn paid for the stocks was $" << AmountPaidStock << ".\n";
    std::cout << "The amount of commission paid was $" << Commission << ".\n";
    std::cout << "The total amount paid was $" << Total << "." << std::endl;
    return 0;
}
