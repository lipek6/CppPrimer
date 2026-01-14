#include <iostream>
#include "header.hpp"

extern const int gravity;
extern const int playerWeight;
extern const int jumpVelocity;

int main()
{
    double xPos{0.0}, yPos{0.0};

    std::string action; std::cin >> action;

    if(action == "jump")
    {
        yPos = jumpVelocity*jumpVelocity / (2*gravity);
        
        double t = 12;
        while(true)
        {
            yPos = (double)(jumpVelocity*t - (gravity*t*t)/2.0);
            
            if(yPos <= 0.0001)
            {
                yPos = 0.0; 
                break;
            }
            
            std::cout << yPos << "\n";
            t -= 0.1;
        }
        std::cout << yPos << "\n";
    }
}