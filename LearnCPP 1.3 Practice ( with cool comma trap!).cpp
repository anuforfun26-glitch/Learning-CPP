// This is my practice for chp 1.3

#include <iostream>

/*int main()
{
	std::cout << 5; // print literal text 5
	std::cout << 6, -7; // Now, one would think it will print literal text 6 and -7

	return 0; // again, good practice
}*/

/* Now! What we see after running the above is that it only prints 5 and 6, NOT -7
but why?

Thats bcuz in C++, the delivery truck operator (<<) preceds over the comma (,) operator.
The compiler put its own bracket after 6, ignores 7 (to it, 7 is raw data) and moved on!
*/
// That raises the question- HOW? does one get both? Well let me first commentify the above code

#include <iostream>

int main()
{
	std::cout << 5;
	std::cout << 6 << -7;

	return 0;
}
// there we go! by giving each literal a delivery box we get 56-7 printed!