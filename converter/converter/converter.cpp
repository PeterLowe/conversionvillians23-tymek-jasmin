//tymoteusz walichnowski
//jasmin suter

#include <iostream>

char printMenu(); //signing PrintMenu
void fahrenheitToCelcius(); // signing fahrenheitToCelcius
void degreesToRadians(); //singing degrees
void stoneAndPoundsToKilograms(); // signing stoneAndPoundsToKilograms

int main()
{
	char userChoice; //letter for user to pick conversion
	userChoice = printMenu(); //only print the menu once

	if (userChoice == 'f')
	{
		fahrenheitToCelcius();
	}

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

	if (userChoice == 'e')
	{
		stoneAndPoundsToKilograms();
	}

	return 1;
}

char printMenu() // written by both
{
	char choice = ' '; //user input choice
	std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
	std::cout << "[A] Degrees <---> Radians        [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches        [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons        [c]" << std::endl;
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celcius <---> Fahrenheit [f]" << std::endl;

	std::cout << "[Q] Exit <---> Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";

	std::cin >> choice;
	return choice;
}

void fahrenheitToCelcius() // written by jasmin
{
	// variables
	float fahrenheit = 0.0f;
	float celcius = 0.0f;

	// user input
	std::cout << "Enter your temperature in fahrenheit: ";
	std::cin >> fahrenheit;

	// math
	celcius = (fahrenheit - 32) * 5 / 9;

	// result
	std::cout << "Your temperature in celcius is " << celcius;
}

void degreesToRadians() //written by tymek
{
	//variables
	float degrees = 0.0f;
	float radians = 0.0f;

	std::cout << "Please input angle in degrees: ";
	std::cin >> degrees;

	radians = degrees * (3.14159 / 180);

	std::cout << degrees << "degrees in radians is " << radians;
}

void stoneAndPoundsToKilograms() // written by jasmin
{
	// variables
	float stones = 0.0f;
	float pounds = 0.0f;
	float kilograms = 0.0f;

	// user input
	std::cout << "Enter your weight in stones: ";
	std::cin >> stones;
	std::cout << "Enter your weight in pounds: ";
	std::cin >> pounds;

	// math
	kilograms = (stones / 0.15747) + (pounds / 2.2046);

	// result
	std::cout << "Your weight in kilograms is " << kilograms;
}