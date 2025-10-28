#include <iostream>

int main()
{
    // no initializer provided
    int x;

    // Use of uninitialized variable leads to undefined result
    std::cout << x << '\n';

    return 0;
}