#include<iostream>

using namespace std;

int main()
{
	
	// multiples of 20 are already divisible by 10, 2, 4, 5.
	/*  
	
	*/
	int factors[] = { 4,8,9,12,15,16,18,20 };
	int multiple = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
	int counter = 1;

	while (1)
	{
		bool isMultiple = true;
		multiple *= counter;

		for (int i = 0; i <= 7; i++)
		{
			if (multiple % factors[i] != 0)
			{
				isMultiple = false;
			}
		}

		counter++;

		if (isMultiple == true)
		{
			cout << multiple;
			break;
		}
	}

	return 0;
}