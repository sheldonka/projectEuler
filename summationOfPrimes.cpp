#include <iostream>
#include <cmath>

bool isPrime(unsigned long int n)
{
	int count = 0;
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
		{
			count++;
		}
	}

	return !count;
}

int main()
{
	unsigned long int sum = 0;

	for(int i = 2; i < 2000000; ++i)
	{
		if ( isPrime(i) )
			sum += i;
	}

	std::cout << sum << std::endl;

	return 0;

}
