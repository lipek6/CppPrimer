#include<iostream>

int main()
{
    unsigned long long start, end;
    std::cout << "Give me the begin and end of the range you want to sum: " << std::endl;
    std::cin >> start >> end;
    
    unsigned long long currNum = start + 1;            // +1 to avoid doing "start + start"
    //std::cout << start << " ";
    while(currNum <= end)
    {
        //std::cout << currNum << " "; 
        start += currNum;    
        ++currNum;
    }
    std::cout << std::endl << "The result is: " << start << std::endl;
    return 0;
}