#include <iostream>

int main()
{
  double MonthlyPay = 6000.00, contribution;

  //5% Contribution
  contribution = MonthlyPay * .05;
  std::cout << "A 5% contribution from my monthly pay is $" << contribution << std::endl;

  //7% Contribution
  contribution = MonthlyPay * .07;
  std::cout << "A 7% contribution from my monthly pay is $" << contribution << std::endl;

  //10% Contribution
  contribution = MonthlyPay * .10;
  std::cout << "A 10% contribution from my monthly pay is $" << contribution << std::endl;
  return 0;
}
