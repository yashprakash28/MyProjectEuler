#include<iostream>

using namespace std;

int fifthPow[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		fifthPow[i] = i * i * i * i * i;
		//cout << i << " : " << fifthPow[i] << endl;
	}

	//cout << INT_MAX << endl << LONG_MAX << endl;

	// form numbers with digits 9,8,7,6,5,4,3,2,1,0 - 2147483647

	int prev = 1;

	for (int i = 11; i <= 7*fifthPow[9]; i++)
	{
		//int sum = prev - fifthPow[(i - 1) % 10] + fifthPow[i % 10];
		//prev = sum;
		
		/*
		4150
		4151
		54748
		92727
		93084
		194979
		*/

		int sum = 0;
		int temp = i;

		while (temp)
		{
			int digit = temp % 10;
			sum += fifthPow[digit];
			temp /= 10;
		}

		if (sum == i)
		{
			cout << i << endl;
		}
	}

	return 0;
}