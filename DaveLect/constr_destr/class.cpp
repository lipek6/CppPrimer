#include <iostream>
#include "class.h"

Entity::Entity(double x, double y)
    : m_x(x)
    , m_y(y)
{
    void Entity::print()
    {
        std::cout << "(" << m_x << ", " m_y << ")" << std::endl;
    }
}

int main()
{
    Entity player(1, 1);
    player.print();

    Entity defaultPlayer;
    defaultPlayer.print();
    
    return 0;
}