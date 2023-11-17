//tymoteusz walichnowski
//jasmin suter

#include <iostream>

char printMenu(); //signing PrintMenu
void fahrenheitToCelcius(); // signing fahrenheitToCelcius
void centimetersToFeetInches(); //signing centimetersToFeetInches
void degreesToRadians(); //singing degrees

int main()
{
	char userChoice; //letter for user to pick conversion
	userChoice = printMenu(); //only print the menu once

	if (userChoice == 'A')
	{
		degreesToRadians();
	}

	if (userChoice == 'B')
	{
		centimetersToFeetInches();
	}

	if (userChoice == 'f')
	{
		fahrenheitToCelcius();
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

void fahrenheitToCelcius()
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

void centimetersToFeetInches() //written by tymek
{
	//variables
	float centimetres = 0.0f;
	float feet = 0.0f;
	int fullFeet = 0;
	float inches = 0.0f;

	std::cout << "Enter distance in centimetres: ";
	std::cin >> centimetres;

	inches = centimetres / 2.54f;
	feet = inches / 12.0f;
	fullFeet = feet;
	inches = inches - (12 * fullFeet);


	std::cout << centimetres << "in feet and inches is " << fullFeet << " feet " << inches << " inches";
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