#include<iostream>

using namespace std;

int main()
{
	int sum = 1;
	for (int i = 3; i <= 1001; i += 2)
	{
		int a = i * i;
		int b = a - i + 1;
		int c = b - i + 1;
		int d = c - i + 1;
		sum += (a + b + c + d);
	}
	cout << sum;
	return 0;
}