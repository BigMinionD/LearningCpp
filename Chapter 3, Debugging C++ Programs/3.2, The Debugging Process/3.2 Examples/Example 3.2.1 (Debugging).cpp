#include <iostream>

// this function is supposed to perform addition
int add(int x, int y)
{
    // but it doesn't due to the wrong operator being used
    return x - y;
}

int main()
{
    // should produce 8, but produces 2
    std::cout << "5 + 3 = " << add(5, 3) << '\n';

    return 0;
}
