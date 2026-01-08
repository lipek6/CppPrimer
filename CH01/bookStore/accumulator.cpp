#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem;
    Sales_item totalItem;

    while(std::cin >> currItem)
    {
        if(totalItem.isbn() == "")
        {
            totalItem = currItem;
            std::cout << "Current state: " << currItem << std::endl;
            continue;
        }

        if(totalItem.isbn() == currItem.isbn())
        {
            totalItem = currItem + totalItem;
            std::cout << "Current state: " << totalItem << std::endl;
        }
        else
        {
            std::cerr << "Data must refer to the same ISBN" << std::endl;
            return -1;
        }
    }
    return 0;
}