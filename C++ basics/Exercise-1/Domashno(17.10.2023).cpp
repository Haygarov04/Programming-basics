// Domashno(17.10.2023).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include "Domashno(17.10.2023).h"
#include <cmath>

using namespace std;


int Avarage(int Ar, int S, int Br, int c)
{
	Br = 0;
	S = 0;

	while (true)
	{
		std::cout << "Enter positive number which is integer" << std::endl;
		std::cout << "if you want to end the entering press 0" << std::endl;
		std::cin >> c;

		if (c < 0)
		{
			std::cout << "The number is not positive" << std::endl;
			continue;
		}
		if (c == 0)
		{
			break;
		}
		S += c;
		Br++;

	}

	if (Br == 0)
	{
		std::cout << "There is no entered numbers" << std::endl;
	}
	else
	{
		Ar = S / Br;
	}

	std::cout << "The avarage is: " << Ar << std::endl;
	return 0;
}
int Opposite(int number, int reversedNumber, int oldNum)
{
	reversedNumber = 0;



	std::cout << "Enter number: ";
	std::cin >> number;
	oldNum = number;

	while (number != 0) {
		reversedNumber = reversedNumber * 10 + number % 10;
		number /= 10;
	}

	std::cout << "The opposite of  " << oldNum << " is " << reversedNumber << std::endl;

	return 0;
}

int quadraticEquation(int a, int b, int c, int D, int x1, int x2)
{
	x1 = 0;
	x2 = 0;


	std::cout << "Enter number for a: ";
	std::cin >> a;
	std::cout << "Enter number for b: ";
	std::cin >> b;
	std::cout << "Enter number for c: ";
	std::cin >> c;
	std::cout << "The value of the 	quadratic equation is:  (" << a << ")x*x + (" << b << ")x + (" << c << ") = 0" << std::endl;


	D = b * b - 4 * a * c;
	x1 = (-b + sqrt(D)) / (a * 2);
	x2 = (-b - sqrt(D)) / (a * 2);
	std::cout << "The value of the first root is:  " << x1 << std::endl;
	std::cout << "The value of the second root is:  " << x2 << std::endl;


	return 0;
}
int sumWhile(int number, int sum)
{
	sum = 0;

	while (sum < 999)
	{
		std::cout << "Enter number: ";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "The number is not positive! " << std::endl;;
			continue;
		}
		if (number != std::round(number))
		{
			std::cout << "The number is not integer." << std::endl;
			continue;
		}

		sum += number;
	}

	std::cout << "The sum is:" << sum << std::endl;

	return 0;
}
int sumOfQuad(int n, int sumquad, int inum, int chislo)
{
	 sumquad = 0;
	

	std::cout << "Enter the number n: ";
	std::cin >> n;

	std::cout << "The sum of cubes of digits which are not bigger than " << n << " are:" << std::endl;
	int i;
	for (i = 99; i <= n; i++)
	{
		inum = i;
		chislo = 0;
		while (inum > 0)
		{
			chislo = inum % 10;
			sumquad += std::pow(chislo, 3);
			inum = inum / 10;
		}
		if (i = sumquad)
		{
			std::cout << i << std::endl;
		}
		std::cout << std::endl;
	}
	return 0;
}


//int Ar, int S, int Br, int c, int number, int reversedNumber, int oldNum
//int a, int b, int c, int D, int x1, int x2
//int number,int sum
int main(int Ar, int S, int Br, int c, int number, int reversedNumber, int oldNum, int a, int b, int D, int x1, int x2, int sum,int n,int sumquad,int inum,int chislo)
{
	/*Avarage(Ar,  S,  Br,  c);*/

	//Opposite(number, reversedNumber, oldNum);

	//quadraticEquation(a, b, c, D, x1, x2);

	//sumWhile(sum , number);

	//sumOfQuad(n,sumquad,inum,chislo);

	int N;

	while (true)
	{
		std::cout << "Enter value of the operation: " << std::endl;
		std::cout << "Avarage: (1)" << std::endl;
		std::cout << "Opposite: (2)" << std::endl;
		std::cout << "quadraticEquation: (3)" << std::endl;
		std::cout << "sumWhile: (4)." << std::endl;
		std::cout << "sumOfQuad: (5)" << std::endl;
		std::cout << "EXIT: (0)" << std::endl;
		std::cin >> N;



		system("cls");


		if (N == 0)
		{
			break;
		}

		switch (N) {
		case 1:
			Avarage(Ar, S, Br, c);
			break;
		case 2:
			Opposite(number, reversedNumber, oldNum);
			break;
		case 3:
			quadraticEquation(a, b, c, D, x1, x2);
			break;
		case 4:
			sumWhile(sum, number);
			break;
		case 5:
			sumOfQuad(n, sumquad, inum, chislo);
		default:
			std::cout << "Invalid option." << std::endl;
			std::cout << "Please try again." << std::endl;

		}

		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;

	}
}
