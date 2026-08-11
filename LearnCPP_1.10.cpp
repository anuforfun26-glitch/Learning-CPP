// Program that takes an input then delivers the double of it

#include <iostream>

int main()
{
	std::cout << "Please enter an integer ";
		int x{};
		
	std::cin >> x;
	std::cout << "Double your input is " << (x * 2) << '\n';
	std::cout << "Triple your input is " << (x * 3);

	return 0;

}