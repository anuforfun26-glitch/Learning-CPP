// Hola! Now we are learning about character input
/* #include <iostream>
int main()
{
	std::cout << "Hello, Please enter a number ";
	int x{}; // defined a variable and value initalized it
	std::cin >> x; // we are telling the program to take the input from the keyboard, therefore the user and store it in the box named x
	std::cout << "Your number is " << x << '\n';
	std::cout << "Thank you!";
	return 0;
} */
// Yay! Btw some quirks
// If u enter a letter, (when its expecting an integer,it will give 0, since it entered FAIL STAGE)
// If u enter a decimal, it will simply ONLY print the integer part!

//Lets do a slightly better version! Commentyfying the above...

#include <iostream>
int main()
{
	std::cout << "Hello there! Please input a number ,click enter , enter a number and click enter ";
	int x{};
	int y{};
	std::cin >> x >> y;
	std::cout << "You entered " << x << '\t' << " and " << '\t' << y << "\n" << "Thank you! ";
	return 0;

}
// voila! ( the spacing took SOO lonG!!)