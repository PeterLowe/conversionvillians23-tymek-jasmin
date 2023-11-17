//tymoteusz walichnowski
//jasmin suter

#include <iostream>

char printMenu(); //signing PrintMenu

int main()
{
	char userChoice; //letter for user to pick conversion
	userChoice = printMenu(); //only print the menu once




	return 1;
}

char printMenu() //written by tymek
{
	char choice = ' '; //user input choice
	std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
	std::cout << "[A] Degrees <---> Radians        [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches        [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons        [c]" << std::endl;

	std::cout << "[Q] Exit        [---]   Exit        [q]" << std::endl;
	std::cout << "Enter your Choice : ";
	std::cin >> choice;
	return choice;
}