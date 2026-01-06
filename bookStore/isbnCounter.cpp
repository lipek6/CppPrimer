#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem;
    Sales_item Item;

    if(std::cin >> currItem)
    {
        int cnt = 1;
        while(std::cin >> Item)
        {
            if(currItem.isbn() == Item.isbn())
                cnt++;
            else
            {
                std::cout << currItem << " ocurrs " << cnt << " times." << std::endl;
                currItem = Item;
                cnt = 1;
            }
        }
    }
    return 0;
}