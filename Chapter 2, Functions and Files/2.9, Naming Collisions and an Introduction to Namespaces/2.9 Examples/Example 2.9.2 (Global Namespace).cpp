#include <iostream>
// imports the declaration of std::cout into the global scope

// All of the following statements are part of the global namespace

// okay: function forward declaration
void foo();

// compiles but strongly discouraged: non-const global variable definition (without initializer)
int x;

// compiles but strongly discouraged: non-const global variable definition (with initializer)
int y { 5 };

// compile error: executable statements are not allowed in namespaces
x = 5;

// okay: function definition
int main()
{
    return 0;
}

// okay: A function forward declaration
void goo();