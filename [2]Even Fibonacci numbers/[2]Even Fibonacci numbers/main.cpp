#include<iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = a + b;
	int sum = 2;

	while (c <= 4000000)
	{
		c = a + b;

		if (c % 2 == 0)
		{
			sum += c;
		}

		a = b;
		b = c;
		

	}

	cout << sum;

	return 0;
}
 