#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    
    std::cout << u2 - u; 
    if(u2 - u == 32) 
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;


    std::cout << u - u2;
    if(u - u2 == 4294967264)
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;



    int i = 10, i2 = 42;
    
    std::cout << i2 - i;
    if(i2 - i == 32)
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;


    std::cout << i - i2;
    if(i - i2 == -32)
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;


    std::cout << i - u;
    if(i - u == 0)
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;


    std::cout << u - i;
    if(u - i == 0)
        std::cout << " ok" << std::endl;
    else
        std::cout << " X" << std::endl;

}