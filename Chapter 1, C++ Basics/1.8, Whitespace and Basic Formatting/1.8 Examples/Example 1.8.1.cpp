#include <iostream>
#include <string>
// Preprocessor directives must be on separate lines

int x; // int and x must be whitespace separated

int main(); // int and main must be whitespace separated

int x;
int                y;
            int
z;
// All of the above are valid, but some are harder to read

std::cout << "Hello world!"; // This is part of the comment and
this is not part of the comment

std::cout << "Hello world!";          // This statement
std::cout << "Hello          world!"; // Is different from this statement

std::cout << "Hello
     world!"; // Not allowed!

std::cout << "Hello "
     "world!"; // prints "Hello world!"

int main(){std::cout<<"Hello world";return 0;} //This is hard to read

int main() {
std::cout << "Hello world";
return 0;
}
// The above is easier to read but still dense

int main()
{
    std::cout << "Hello world";

    return 0;
}
// The above is the best way to format this

int main()
{
    std::cout
        << "Hello world"; // works fine
    return 0;
}

int main() {
    // statements here
}

int main()
{
    // statements here
}
// Both work fine, but the tutorial uses the second one of these

int main()
{
    std::cout << "Hello world!\n"; // tabbed in one tab (4 spaces)
    std::cout << "Nice to meet you.\n"; // tabbed in one tab (4 spaces)
}

int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}

std::cout << 3 + 4
    + 5 + 6
    * 7 * 8;
// This will work

// The below
cost = 57;
pricePerItem = 24;
value = 5;
numberOfItems = 17;

std::cout << "Hello world!\n"; // cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
std::cout << "Yeah!\n"; // especially when lines are different lengths

// cout lives in the iostream library
std::cout << "Hello world!\n";
// these comments make the code hard to read
std::cout << "It is very nice to meet you!\n";
// especially when all bunched together
std::cout << "Yeah!\n";

// Whitespace makes the below easier to read
cost          = 57;
pricePerItem  = 24;
value         = 5;
numberOfItems = 17;

std::cout << "Hello world!\n";                  // cout lives in the iostream library
std::cout << "It is very nice to meet you!\n";  // these comments are easier to read
std::cout << "Yeah!\n";                         // especially when all lined up

// cout lives in the iostream library
std::cout << "Hello world!\n";

// these comments are easier to read
std::cout << "It is very nice to meet you!\n";

// when separated by whitespace
std::cout << "Yeah!\n";