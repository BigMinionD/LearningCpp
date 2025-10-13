void printHi() // This function is non-value returning
{
    std::cout << "In printHi()" << '\n';

    return 5; // compile error: we're trying to return a value
}
