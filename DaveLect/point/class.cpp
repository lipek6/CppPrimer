#include <iostream>
#include "class.h"


Point::Point(int x, int y) 
    : m_x(x)
    , m_y(y)
{


}
int main()
{
    Point p0(1, 1);
    std::cout << p0.getX() << " " << p0.getY() << std::endl;    
}

