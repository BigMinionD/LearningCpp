// tells the compiler about a function named "add" that takes two int parameters and returns an int.  No body!
int add(int x, int y);

// tells the compiler about an integer variable named x
int x;

// because this function has a body, it is an implementation of function add()
int add(int x, int y)
{
    // instantiates variable z
    int z{ x + y };

    return z;
}

// instantiates variable x
int x;