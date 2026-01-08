#include<iostream>

int main()
{
    unsigned long long start, end;
    std::cout << "Give me the begin and end of the range you want to sum: " << std::endl;
    std::cin >> start >> end;
    
    unsigned long long result = ((start + end + 1) * (end - start)) / 2;

    std::cout << std::endl << "The result is: " << ++result << std::endl;
    return 0;
}