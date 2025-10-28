# Question 1
Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:
- A function named “readNumber” should be used to get (and return) a single integer from the user.
- A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
- A main() function should be used to glue the above functions together.

# Answer 1
main.cpp:
```cpp
#include <iostream>

int readNumber() {
    int num;

    std::cout << "Please enter an integer: ";
    std::cin >> num;

    return num;
}

void writeAnswer(int x){
    std::cout << "You entered: " << x << '\n';
}

int main(){
    writeAnswer(readNumber());

    return 0;
}
```

# Question 2
Modify the program you wrote in Question 1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.

# Answer 2
main.cpp:
```cpp
#include <iostream>

int readNumber();

void writeAnswer(int x);

int main() {
    writeAnswer(readNumber());

    return 0;
}
```

io.cpp:
```cpp
#include <iostream>

int readNumber() {
    int num;

    std::cout << "Please enter an integer: ";
    std::cin >> num;

    return num;
}

void writeAnswer(int x) {
    std::cout << "You entered: " << x << '\n';
}
```

# Question 3
Modify the program you wrote in Question 2 so that it uses a header file (named io.h) to access the functions instead of using forward declarations directly in your code (.cpp) files. Make sure your header file uses header guards.

# Answer 3
main.cpp:
```cpp
#include "io.h"
#include <iostream>

int main() {
    writeAnswer(readNumber());

    return 0;
}
```

io.cpp:
```cpp
#include <iostream>

int readNumber() {
    int num;

    std::cout << "Please enter an integer: ";
    std::cin >> num;

    return num;
}

void writeAnswer(int x) {
    std::cout << "You entered: " << x << '\n';
}
```

io.h:
```cpp
#include <iostream>
#ifndef IO_H
#define IO_H

int readNumber();

void writeAnswer(int x);

#endif
```
