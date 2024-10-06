// Year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <math.h>
#include <iostream>
#include <stdlib.h>


	int main()
		 {
		int m;
		int G;


		std::cout << "Which month you want to check: ";
		std::cin >> m;

		std::cout << "Enter year: ";
		std::cin >> G;

		if (m <= 7)
		{
			if (m % 2 = 0)//dali e 4etno
			{
				if (m == 2)//ravno li e na 2
				{
					if (G % 4 == 0 && G % 100 != 0) || (G % 400 == 0)//visokosna li e
					{
						m = 28;
					}
					else
					{
						m = 29;
					}
				}
				else
				{
					m = 30;
				}
			}
			else
			{
				m = 31;
			}
		}

		else

		{
			if (m == 2)
			{
				m = 31;
			}
			else
			{
				m = 30;
			}


		}

		std::cout << G << std::endl;
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
