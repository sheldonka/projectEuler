#include <iostream>
#include <cmath>

bool isPrime(long n)
{
	int count = 0;

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			++count;
		}
	}

	return !count;
}

long largestPrimeFactor(long n)
{
	long half = n / 2;

	for (long i = 2; i < half ; ++i)
	{
		if (n % i == 0)
		{
 			if (isPrime(n / i))
			{
				return n / i;
			}
		}
	}

	if (isPrime(n))
		return n;
	else return -1;
}

int main()
{
	long n = 600851475143;
	std::cout << "The largest prime factor of the number 600851475143 : " << largestPrimeFactor(n) << std::endl;

	return 0;
}
