# Question 1: What is the difference between initialization and assignment? How many times can a variable be initialized or assigned a value?
Initialization is when a variable is given a value at the same time as it is created, while assignment occurs when a variable is given a value after its creation. A variable can only be initialized once, while a variable can be assigned a value as many times as needed for the program.

# Question 2: When does undefined behavior occur? What are the consequences of undefined behavior?
Undefined behavior occurs when the machine is given instructions that are not clearly defined by the C++ Standard Library, like when the compiler is asked to output the value of a variable that has not been initialized or assigned a value. There are many consequences of undefined behavior, but it usually leads to the program not working as intended.

# Question 3: Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.
int main() {
	std::cout << "Enter an integer: ";

	int x{};
	std::cin >> x;

	std::cout << "Enter a second integer: ";

	int y{};
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << ".\n";
	std::cout << x << " - " << y << " is " << x - y << ".\n";

	return 0;
}
