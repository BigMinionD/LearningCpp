#include <iostream>

// forward declaration of add() (using a function declaration)
int add(int x, int y);

int main()
{
    // this works because we forward declared add() above
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

// even though the body of add() isn't defined until here
int add(int x, int y)
{
    return x + y;
}