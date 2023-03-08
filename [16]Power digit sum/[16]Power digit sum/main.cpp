#include<iostream>

using namespace std;

int currNum[500];
int nextNum[500];

int main()
{
	for (int i = 0; i < 500; i++)
		currNum[i] = 0;

	currNum[499] = 1;

	for (int i = 1; i <= 1000; i++)
	{
		int carry = 0;
		for (int i = 499; i >= 0; i--)
		{
			int product = (currNum[i] * 2) + carry;

			nextNum[i] = product % 10;
			carry = product / 10;
		}

		for (int i = 0; i < 500; i++)
			currNum[i] = nextNum[i];
	}

	int sum = 0;
	for (int i = 0; i < 500; i++)
		sum += currNum[i];

	cout << sum;
	return 0;
}