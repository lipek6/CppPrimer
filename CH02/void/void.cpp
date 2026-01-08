#include <iostream>

int main()
{
    int int_val  = 99; 
    void *vd_ptr = &int_val; 

    std::cout << vd_ptr << " " << &int_val << std::endl;
    
}