/*#include <iostream>

int main()
{
	int x{ 32767 }; // x may be 16 or 32 bit
	x = x + 1; // 32678 will overflow 16 bit but will be fine in 32 bit

	std::cout << x << '\n';

	return 0;

}*/
// since I got 32678, this means my storage is 32 bit
// commentfying the above
/*
#include <cstdint> // for fixed width integer
#include <iostream>

int main ()
{
	std::int16_t x {32767}; // x is always a 16 bit integer

	x = x + 1; // so 32678 will overflow it causing us to get -32678
	std::cout << x << '\n';

	return 0;
}*/
// now lets see std::size_t
/*
#include <iostream>
int main()
{
	std::cout << sizeof(int) << '\n';

	return 0;
} */
// we get 4 byte that is 32 bit, now commentyfying the above

#include <cstddef>
#include <iostream>

int main()
{
	int x{ 5 };
	std::size_t s{ sizeof(x) }; // sizeof returns a value of type std::size_t, so that should be type s
	std::cout << s << '\n';

	return 0;

}
// we get 4