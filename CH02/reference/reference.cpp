#include <iostream>






int main()
{

    int object = 69;
    int &refToObject = object;

    std::cout << "The object value is " << object << " and it's referenced by refToObject, which value is "
              << refToObject << "\nThat happens because a reference is binded to its object.\n"
              << "The object address is " << &object << " And the refToObject address is " << &refToObject
              << std::endl;

    refToObject = 100;
    
    std::cout << "By assigning the value 100 for refToObject, because of its direct binding to the object it refers, "
                 "The value of both the object and the refToObject are gonna be the same\n"
              << "refToObject: " << refToObject << "\nobject: " << object << std::endl;

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
}
