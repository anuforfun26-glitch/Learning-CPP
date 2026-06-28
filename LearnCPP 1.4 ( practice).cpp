/* PART 1 of 1.4
#include <iostream> // Binging in pinting tools

int main() // defining the fun
{
	int x; // defining variable
	int y;
	x = 3;// giving values to vaiable
	y = 4;

	std::cout << x << '\n'; // this should add an extra line
	std::cout << y;

	return 0;
}
*/ 
// New practice block: Initialization

#include <iostream>

int main()
{
	int width{ 5 }; //define variable and give it value at the same time

	std::cout << width; // prints the assigned value

	return 0;
}