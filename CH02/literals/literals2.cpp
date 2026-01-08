#include <iostream>

int main()
{
    auto a01 = 'a';           // char
    auto a02 = L'a';          // wchar_t
    auto a03 = "a";           // string literal                             (const char*)   
    auto a04 = L"a";          // string literal made by wchar_t characters  (const wchar_t*)
    auto a05 = 10;            // int
    auto a06 = 10u;           // unsigned int
    auto a07 = 10L;           // long
    auto a08 = 10uL;          // unisgned long
    auto a09 = 012;           // int octadecimal
    auto a10 = 0xC;           // int hexadecimal
    auto a11 = 3.14;          // double
    auto a12 = 3.14f;         // float
    auto a13 = 3.14L;         // long double
    auto a14 = 10;            // int 
    auto a15 = 10u;           // unsigned int 
    auto a16 = 10.;           // double
    auto a17 = 10e-2;         // double
    auto a18 = 3.14e1L;       // long double
    auto a19 = 1024.f;        // float
    auto a20 = 3.14L;         // long double
}