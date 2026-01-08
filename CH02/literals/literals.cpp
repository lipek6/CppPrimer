#include <iostream>

int main()
{
    // String literals concatenation example
    std::cout << "A would love to work at VALVe "
                 "because it looks like a realy "
                 "cool company, with nice salaries, "
                 "respect for their employees and it "
                 "looks like they always have good projects"
                 "on the oven. " << std::endl  << 
                 "Besides that, they have GABE NEWL. "
                "I think its written like that." << std::endl;

    
    
    // Using auto to discover the type of literals.
    auto integer   = 12;
    auto float_p   = 1.2;
    auto double_p  = 1.1234;
    auto integer_h = 0x22;

    std::cout << integer << "     "   << sizeof(integer)   << std::endl; 
    std::cout << float_p << "     "   << sizeof(float_p)   << std::endl; 
    std::cout << double_p << "     "  << sizeof(double_p)  << std::endl; 
    std::cout << integer_h << "     " << sizeof(integer_h) << std::endl; 

}