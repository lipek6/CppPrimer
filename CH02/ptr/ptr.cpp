#include <iostream>

int main()
{
    int int_val  = 99; 
    int *int_ptr = &int_val; 

    std::cout << "int_ptr points to " << int_ptr << "\n"
                 "That is the same as the address of int_val" << &int_val
                 << "\n the content of the object pointed by int_ptr is " << *int_ptr << "The same as the content of int_val " 
                 << int_val << std::endl;
    
    *int_ptr += 1;
    std::cout << *int_ptr << " " << int_val << std::endl;

    int int_val2 = 1;
    int_ptr = &int_val2;
    std::cout << *int_ptr << std::endl;

}