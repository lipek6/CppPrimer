class Point
{
private:
    int m_x = 0;          // in 'm_something', 'm_' is a way to indicate that the data is private. Stylistic choice only.
    int m_y = 0;

public:
    Point(int x, int y);
    int getX();
    int getY();
};