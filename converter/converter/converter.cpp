//tymoteusz walichnowski
//jasmin suter

#include <iostream>

int main()
{
	return 1;
}

char printMenu() // written by jasmin
{
	char choice = ' '; // user input choice
	std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert right to left\n\n" << std::endl;

	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celcius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit <---> Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}