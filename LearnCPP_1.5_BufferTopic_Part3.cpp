#include <iostream>
int main()
{
	std::cout << "Enter two numbers";

	int x{};
	std::cin >> x;

	int y{};
	std::cin >> y;

	std::cout << "you entered" << x << "and" << y << "\n";
	
	return 0;
}
// Now we did TWO runs
// First time we did traditionally, Put a value for x , click enter then put a value of y then got the result
// However, if we had , in the first go put 4 - space- 5,then click enter, it takes both at once and gives same result as above
// this is bcuz in 2nd run, we gave the buffer 2 values in first go! it took the first value (4) then paused at space bar, when the second cin needed a value it SIMPLY TOOK WHATEVER WAS LEFT (or trapped) IN BUFFER WITHOUT ASKING U!