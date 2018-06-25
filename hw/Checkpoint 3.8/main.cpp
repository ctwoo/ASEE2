#include <iostream>

int main()
{
    int books, months = 12;
    double BooksPerYear;

    std::cout << "How many books have you read this year?\n";
    std::cin >> books;
    BooksPerYear = static_cast<double>(books)/ months;
    std::cout << BooksPerYear << " books per year." << std::endl;
    return 0;

}
