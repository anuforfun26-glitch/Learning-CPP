// Chapter 4
// NO RETURN VALUE 
/*
#include <iostream>

void writeValue(int x) //void here means no return value
{
	std::cout << "The value of x is : " << x << '\n';
	return 5;
	//no return statment bcuz this function does not return value
} */

// DEPRECTAED
/*
#include <iostream>
 int getValue() // empty function parameters is an implicit void
 {
	 int x{};
	 std::cin >> x;
	 return x;
		 
 } */

// SIZEOF OPERATOR
/*
#include <iomanip> // for std::setw (which sets the width of the subsequent ouptput)
# include <iostream >
# include <climits> // for CHAR_BIT

int main()
{
	std::cout << std::left; // left justify output

	std::cout << std::setw(16) << "bool: " << sizeof(bool) << "bytes\n";
		std::cout << std::setw(16) << "long double : " << sizeof(long double) << "bytes\n";
		std::cout << std::setw(16) << "char: " << sizeof(char) << "bytes\n";
		std::cout << std::setw(16) << "short: " << sizeof(short) << "bytes\n";
		std::cout << std::setw(16) << "int: " << sizeof(int) << "bytes\n";
		std::cout << std::setw(16) << " long: " << sizeof(long ) << "bytes\n";
		std::cout << std::setw(16) << " long long : " << sizeof(long long) << "bytes\n";
		std::cout << std::setw(16) << "float: " << sizeof(float) << "bytes\n";
		std::cout << std::setw(16) << "double: " << sizeof(double) << "bytes\n";
		int x{};
		std::cout << "x is " << sizeof(x) << "bytes\n";
		return 0;
} */

// Integer OVERFLOW

#include <iostream>

int main()
{
	// A 2-byte short maxes out exactly at 32767
	short maxBox{ 32767 };

	std::cout << "Before overflow: " << maxBox << '\n';

	//  Forcing a manual bit spill by adding 1 over the limit!
	maxBox = maxBox + 1;

	std::cout << "After overflow:  " << maxBox << '\n';

	return 0;
}


