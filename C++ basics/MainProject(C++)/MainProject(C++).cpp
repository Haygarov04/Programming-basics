// MainProject(C++).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>


int FindBigger(int a, int b)
{



	std::cout << "Enter the value of a: ";
	std::cin >> a;

	std::cout << "Enter the value of b: ";
	std::cin >> b;

	int z = a;

	if (z > b)
	{

	}
	else
	{
		z = b;
	}

	std::cout << "The bigger number of a and b is :" << z << std::endl;
	return 0;

}

int FindSmaller(int a, int b)
{


	std::cout << "Enter the value of a: ";
	std::cin >> a;

	std::cout << "Enter the value of b: ";
	std::cin >> b;

	int z = a;

	if (z < b)
	{

	}

	else
	{
		z = b;
	}

	std::cout << "The smaller number of a and b is :" << z << std::endl;
	return 0;

}

int FindBiggestNumber(int a, int b, int c)
{

	std::cout << "Enter the value of a: ";
	std::cin >> a;

	std::cout << "Enter the value of b: ";
	std::cin >> b;

	std::cout << "Enter the value of c: ";
	std::cin >> c;

	int z = c;


	if (a > b)
	{
		if (a > z)
		{
			z = a;
		}
	}
	else if (b > z)
	{
		z = b;
	}


	std::cout << "The biggest number of a , b and c is :" << z << std::endl;
	return 0;
}

int FindSmallestNumber(int a, int b, int c)
{

	std::cout << "Enter the value of a: ";
	std::cin >> a;

	std::cout << "Enter the value of b: ";
	std::cin >> b;

	std::cout << "Enter the value of c: ";
	std::cin >> c;

	int z = c;


	if (a < b)
	{
		if (a < z)
		{
			z = a;
		}
	}
	else if (b < z)
	{
		z = b;
	}


	std::cout << "The smallest number of a , b and c is :" << z << std::endl;
	return 0;
}


int DaysOfYear(int m, int G)
{
	int month, year;

	// Въведете месец и година от потребителя
	std::cout << "Enter month from  (1-12): ";
	std::cin >> month;

	std::cout << "Enter year: ";
	std::cin >> year;

	// Проверка за валидност на въведения месец
	if (month < 1 || month > 12) {
		std::cout << "Invalid month." << std::endl;
		return 1; // Изход с код за грешка
	}

	// Проверка за високосна година
	bool isLeapYear = false;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		isLeapYear = true;
	}

	// Използване на if проверки за определяне на броя на дните в месеца
	int daysInMonth;
	if (month == 2) {
		// Февруари
		if (isLeapYear) {
			daysInMonth = 29;
		}
		else {
			daysInMonth = 28;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		// Месеца с 30 дни
		daysInMonth = 30;
	}
	else {
		// Месеца с 31 дни (останалите месеци)
		daysInMonth = 31;
	}

	// Извеждане на броя на дните в месеца
	std::cout << "Month " << month << " contains " << daysInMonth << " days." << std::endl;

	return 0;

}

int Coordinates(int x, int y)
{


	std::cout << "Enter value for x: ";
	std::cin >> x;

	std::cout << "Enter value for y: ";
	std::cin >> y;

	std::string Words[] = { "first", "second", "third", "fourth" };

	std::string Value;


	if (x > 0)
	{
		if (y > 0)
		{

			std::cout << "The coordinates are in first quadrant" << Value << std::endl;
		}
		else
		{
			std::cout << "The coordinates are in fourth quadrant" << Value << std::endl;
		}


	}
	else
	{
		if (y > 0)
		{
			std::cout << "The coordinates are in second quadrant" << Value << std::endl;
		}
		else
		{
			std::cout << "The coordinates are in third quadrant" << Value << std::endl;
		}
	}

	//std::cout << "The numbers (" << x << " , " << y << ") are from " << K << " quadrant." << std::endl;

	//std::cout << "The numbers ( " << x << " , " << y << ")" "are in" << K << std::endl;

	/*std::cout << "The numbers (" << x << " , " << y << ") are from " << Qadrant << " quadrant." << std::endl;
	return 0;*/
	//std::cout << "The value of k is: " << Qadrant << std::endl;

	//std::cout << "The first value " << Value << std::endl;


	return 0;
}


int main(int a, int b, int c, int m, int G, int x, int y)
{
	//system("chcp 1251");



	int N;

	while (true)
	{
		std::cout << "Enter value of the operation: " << std::endl;
		std::cout << "Find bigger between two numbers: (1)" << std::endl;
		std::cout << "Find smaller between two numbers: (2)" << std::endl;
		std::cout << "Find the biggest between three numbers: (3)" << std::endl;
		std::cout << "Find the smallest between three numbers: (4)." << std::endl;
		std::cout << "Find value of the deys in month: (5)" << std::endl;
		std::cout << "Find the coordinates: (6)" << std::endl;
		std::cout << "EXIT: (0)" << std::endl;
		std::cin >> N;



		system("cls");


		if (N == 0)
		{
			break;
		}

		switch (N) {
		case 1:
			FindBigger(a, b);
			break;
		case 2:
			FindSmaller(a, b);
			break;
		case 3:
			FindBiggestNumber(a, b, c);
			break;
		case 4:
			FindSmallestNumber(a, b, c);
			break;
		case 5:
			DaysOfYear(m, G);
		break;case 6:
			Coordinates(x, y);
			break;

		default:
			std::cout << "Invalid option." << std::endl;
			std::cout << "Please try again." << std::endl;

		}

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
