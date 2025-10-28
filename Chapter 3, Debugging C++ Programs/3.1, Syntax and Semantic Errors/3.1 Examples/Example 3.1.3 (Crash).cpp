#include <iostream>

int main()
{
    int a { 10 };
    int b { 0 };
    // division by 0 is undefined in mathematics
    std::cout << a << " / " << b << " = " << a / b << '\n';
    return 0;
}