// Revisiting 1.4
// Assignment Vs Initalization

/*
#include  <iostream>
int main()
{
	int x; // told computer to take one RAM box and label it x, it has system garbage data in it rn
	int y;
	x = 3;// replaced the garbage data with 3 in box named x
	y = 5;

	std::cout << x << y;

	return 0;
}*/
// we see that 35 is printed,however initalization is preffered bcuz it prevents garbage data.
//Lets see how that works, for now lets commentify the above code

#include <iostream>
int main()
{
	int x{ 7 };// computer found a RAM box, labelled it x AND put the value 7 in it in ONE step
	int y{ 8 };
	std::cout << x<< "\n" << y;
	return 0;
}
// voila! we have printed 7!
// now lets add some new things I learned to the above code only
// first, the concept of '\n' ( i am adding another variable y)
// we see that its printed as 7 (then in the next line) 8
// Lets see what happens if we reverse the slash..we get an absurdly large number,7121428...but why?
// it does its own math, by putting '/n' we made a multicharacter literal, / has the ASCII value 47 which is multiplied by 256 then n has value 110, so after adding we get 12148
// now lets see what happens when we put /n in double quotes...we get 7/n8..why? bcuz we made a string literal so basically it prints exactly whatever is in quotes (like hello world)
// lets put \n in double quotes...we still get a newline. '' is CHARACTER LITERAL whereas "" is STRING LITERAL