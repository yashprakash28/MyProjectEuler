#include<iostream>
#include<set>
using namespace std;

int Power(int x, int y)
{
	if (y == 0)	return 1;

	return (x * Power(x, y - 1));
}

int main()
{
	set<int> distinctNums;
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 2; j <= 100; j++)
		{
			int ans = Power(i, j);
			cout << i << ", " << j << " : " << ans << endl;
		}
	}
	return 0;
}