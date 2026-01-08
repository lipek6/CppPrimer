#include <iostream>

std::string global_str;
int global_int;

int main()
{
    std::string book1 = "0-201-78345-X";          // Common initialization
    std::string book2 ("0-201-78345-X");          // Lame, strange initialization

    std::cout << book1 << std::endl;
    std::cout << book2 << std::endl;
    // book2 works probably because std::string is a class, so it can receive it's value as an '()' argument.


    double price = 109.99, discount = price * 0.16;             // Because we declared price first, this is okay, yay.
    std::cout << "Price: " << price << " | Discounted price: " << discount << std::endl;

    // Suck ass lame unecessary 100 ways to initialize shit.
    int units_sold1 = 0;        std::cout << units_sold1 << std::endl;
    int units_sold2 = {0};      std::cout << units_sold2 << std::endl;
    int units_sold3{0};         std::cout << units_sold3 << std::endl;
    int units_sold4(0);         std::cout << units_sold4 << std::endl;

    std::cout << global_int << " " << global_str << std::endl;
    
    int local_int;
    std::string local_str;

    std::cout << local_int << " " << local_str << std::endl;
}