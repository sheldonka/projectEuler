#include <iostream>

int fibonacci(int n)
{
	if(n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	unsigned long int sumOfEvenFibonacci = 0;

	// Even numbers in the Fibonacci sequence are numbers with an index multiple of three, so...

	for ( int i = 3; fibonacci(i) <= 4000000; i += 3 )
	{
		sumOfEvenFibonacci += fibonacci(i);
	}

	std::cout << "Sum of even fibonacci numbers that do not exceed 4 000 000 : " <<  sumOfEvenFibonacci << std::endl;

	return 0;
}
