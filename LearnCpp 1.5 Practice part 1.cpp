/*
// first writing the program from memory once

#include <iostream> // this is from standard library, will help us input value into the program

int main() // every function needs a 'entry point', only fun to have implict return AND only one per programme and u need one in every program
{
	std::cout << "Hello World"; // stdcout where cout means character output, the << is basically a conveyor belt on which our hello world is put so it can go on screen

	return 0;
}
// now that this has run and we revised, we will start the actual lesson so I will archive the above using multi line comment
*/

#include <iostream>
int main()
{ 
	int x{ 5 }; // defined variable x AND initalized it with value 5
	int y; // defining another variable
	y = 6; // assigning a value
	std::cout << x << '\n' << y ; // print value of x, then line and then y ( which we have set as 5 and 6 for now)
	return 0; // technically not needed since main has implict but good practice

}
