// CollatzSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int collatzSequence(long long n)
{
	int length = 1;
	while (n!=1)
	{
		if (n%2==0)
		{
			n >>= 1;
		}
		else
		{
			n=3 * n + 1;
		}
		length++;
	}
	return length;
}
int main()
{
	int maxLength=0;
	long long currLength=0;
	int startingNumber =0;

	for (int i = 1; i < 1000000; i++)
	{
		currLength = collatzSequence(i);
		if (maxLength<currLength)
		{
			maxLength = currLength;
			startingNumber = i;
		}
	}

	cout << "Starting number: " << startingNumber << endl;
	cout << "Length of the sequence: " << maxLength << endl;
}


