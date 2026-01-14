#include <iostream>

template <typename T>
class DynamicArray
{
private:
    size_t m_size;
    T    *m_arr;

public:
    DynamicArray(const size_t size): m_size(size), m_arr(new T[size]) {}
    
    const T & operator [](size_t idx) const
    {
        return m_arr[idx];
    }

    T & operator [](size_t idx)
    {
        return m_arr[idx];
    }

    
    void printArr() const
    {
        for(size_t i = 0; i < m_size; i++)
        {
            std::cout << m_arr[i] << " ";
        }
        std::cout << std::endl;
    }

    ~DynamicArray(){delete [] m_arr;} 
};

int main(int argc, char *argv[])
{
    const DynamicArray<int> xPos(10);
    DynamicArray<int> yPos(10);
    yPos[0] = 10;
    yPos[1] = 20;
    yPos[2] = 30;
    yPos[3] = 40;
    yPos[4] = 50;
    yPos[5] = 60;
    yPos[6] = 70;
    yPos[7] = 80;
    yPos[8] = 90;
    yPos[9] = 100;
    yPos.printArr();
    xPos.printArr();
    std::cout << xPos[0] << std::endl;
    std::cout << yPos[0] << std::endl;
    return 0;
}