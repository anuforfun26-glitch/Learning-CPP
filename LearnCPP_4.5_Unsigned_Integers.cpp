#include <iostream>
/*
int main()
{
	unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
	std::cout << "x was" << x << '\n';

	x = 65536; // 65536 is out of our range, so we get modulo wrap-around
	std::cout << " x is now :" << x << '\n';

	x = 65537; // 65537 is out of our range, so we get modulou wrap around
	std::cout << " x is now :" << x << '\n';

	return 0;
} */
// Note: bcuz I wanted to see modulo wrapping I set Warning Level on 2 and disabled Treat Warning as Error, upon running this program we see
// x was 65535
// x is now 0
// x is now 1
// we can wrap the other way around too! Lets commentify the above, and see that too
/*
int main()
{
	unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
	std::cout << " x was: " << x << '\n';

	x = -1; // -1 is out of our range so we get modulou wrap around to the upper most ceiling of our range
	std::cout << " x was :" << x << '\n';

	x = -2; // -2 is out of our range so we get modulou wrap around. Since -2 is 2 away from 0 , we get the 2 number from 2 as our result
	std::cout << " x was :" << x << '\n';

	return 0;
} */
// x was : 0
// x was : 65535
// x was : 65534

// Let's see some cases where unsigned causes issues, for the same I will commmentify the above code


//Assume int is 4 bytes
/* 1st case
int main()
{
unsigned int x{ 2 };
unsigned int y{ 3 };

std::cout << x - y << '\n'; // prints 4294967295 which is obviously incorrect

return 0;
 } */

// NOW, a doubt arised for me, since -1 is 1 below the main range then why didn't I get 1 below the highest ceiling?
// It is kind of just rolling back like a circle. The loop goes 0,1,2..4294967294, 4294967295
// When u do -1 u go 1 step back from 0...which is , if u r in a circle,4294967295, The highesr ceiling
// Now lets explore another error, first let me just commentify the above code 

// 2nd case
int main ()
{ 
	signed int s{ -1 };
	unsigned int u{ 1 };
	
	if (s < u) // -1 is implicitly converted to 4294967295 and that being less than 1 is false
		std::cout << " -1 is less than 1\n";
	else
		std::cout << " 1 is less than -1\n"; // this statements ends up being executed
	return 0;
}
// We end up getting 1 less than -1 , which is wrong
// C++ forbades comparing two different data types, so it converts the signed into unigned due to a built in hierachy




