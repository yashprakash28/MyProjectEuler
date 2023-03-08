#include<iostream>
#include<set>
#include<map>
#include<vector>

using namespace std;

long long CountDigits(long long num)
{
	if (num == 0)	return 1;
	if (num < 0)
		num *= -1;

	int count = 0;

	while (num > 0)
	{
		long long digit = num % 10;
		count++;
		num /= 10;
	}

	return count;
}

int main()
{
	long long a = 1;
	long long b = 1;
	long long c = -1;
	
	// printing 12 fibonaccis
	
	cout << "1 - " << a << " - " << CountDigits(a) << endl;
	cout << "2 - " << b << " - " << CountDigits(b) << endl;

	/*for (int i = 3; i <= 12; i++)
	{
		c = a + b;
		a = b;
		b = c;
		cout << i << " - " << c << " - " << CountDigits(c) << endl;
	}*/

	long long currIndex = 2;
	long long digitLength = 0;
	long long targetLength = 1000;

	while (digitLength != targetLength)
	{
		currIndex++;
		c = a + b;
		digitLength = CountDigits(c);
		a = b;
		b = c;
		cout << currIndex << " - " << c << " - " << CountDigits(c) << endl;
	}

	cout << currIndex;
	/*cout << CountDigits(1234) << endl;
	cout << CountDigits(1) << endl;
	cout << CountDigits(0) << endl;
	cout << CountDigits(-1234) << endl;
	cout << CountDigits(-1) << endl;*/
	return 0;
}