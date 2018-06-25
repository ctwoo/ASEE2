#include <iostream>
#include <string>
int main()
{
    std::string name;
    std::string address;
    std::string phone_number;
    name = "Cameron Woo";
    address = "9907 Kapalua Lane";
    phone_number = "(916)842-6974";
    std::cout << "My name is " << name << " and my address is " << address << ".\n";
    std::cout << "Also, my phone number is " << phone_number << ".\n" << std::endl;
    return 0;
}
