#include<iostream>
#include<set>
using namespace std;

#define N 46349
int primeCount = 0;

// prime sieve

int main()
{
	bool primeSieve[N];
	for (int i = 0; i < N; i++)
		primeSieve[i] = true;	// all numbers are not prime.

	primeSieve[0] = primeSieve[1] = false;

	for (int i = 2; i < N; i++)
	{
		if (primeSieve[i] == true)
		{
			// the number is prime
			// traverse all the factors of i and mark them as not prime
			for (int j = i * i; j < N; j += i)
			{
				primeSieve[j] = false;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (primeSieve[i] == true)
		{
			primeCount++;
			cout << i << endl;
		}

		if (primeCount == 10001)
		{
			cout << i;
		}
	}

	cout << "Count: " << primeCount;

	return 0;
}