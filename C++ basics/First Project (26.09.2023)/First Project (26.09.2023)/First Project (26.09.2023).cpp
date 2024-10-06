// First Project (26.09.2023).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <math.h>
#include <iostream>
#include <stdlib.h>

int FindMax(int a, int b)
{
	int a;
	int b;

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



	std::cout << "The bigger value between a and b is: " << z << std::endl;

	return 0;
}



int FindMin(int a, int b)
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


	std::cout << "The smaller value between a and b is: " << z << std::endl;

	return 0;
}

int main()
{
	//std::cout << "Hello World!\n";

	int a;
	int b;
	int z;

	/*std::cout << "Enter the value of a: ";
	std::cin >> a;

	std::cout << "Enter the value of b: ";
	std::cin >> b;*/

	int choice;
	std::cout << "Chose a function(1-bigger value between a & b , 2- smaleer value between a & b): ";
	std::cin >> choice;

	if (choice == 1)
	{
		int z = FindMax(a, b);

		if (z != 0)
		{
			std::cout << "Bigger value is: " << z << std::endl;
		}
		else
		{
			std::cout << "a & b are equal." << std::endl;
		}
	}
	else if (choice == 2)
	{
		int z = FindMin(a, b);

		if (z != 0)
		{
			std::cout << "Smaller value is: " << z << std::endl;
		}
		else
		{
			std::cout << "a & b are equal." << std::endl;
		}
	}
	else
	{
		std::cout << "Neutral" << std::endl;
	}

	return 0;
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



//int a;
//int b;
//
//std::cout << "Enter the value of a: ";
//std::cin >> a;
//
//std::cout << "Enter the value of b: ";
//std::cin >> b;
//
//int z = a;
//
//if (z > b)
//{
//
//}
//else
//{
//	z = b;
//}
//
//
//std::cout << "The bigger value between a and b is: " << z << std::endl;
