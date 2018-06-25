#include <iostream>

int main()
{
    double regularWages,
     basePayRate = 18.25,
     regularHours = 40.0,
     overtimeWages,
     overtimePayRate = 27.78,
     overtimeHours = 10,
     totalWages;

    //Regular Wages
    regularWages= basePayRate * regularHours;

    //Overtime Wages
    overtimeWages= overtimePayRate * overtimeHours;

    //Total Wages Calculation
    totalWages= regularWages + overtimeWages;

    //Total Wages
    std::cout << "The total wages for this week are $" << totalWages << std::endl;
    return 0;
}
