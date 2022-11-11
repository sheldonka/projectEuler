////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: /////
/////                                                                                                                                              /////         
///// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...                                                                                                        /////
/////                                                                                                                                              /////            
///// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.           /////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int fibonacci(int n)
{
	if (n < 0) {
		return 0;
	}
	
	if (n <= 1) {
		return 1;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	unsigned long int maxValue = 4000000;
	unsigned long int sumOfEvenFibonacci = 0;

	// Even numbers in the Fibonacci sequence are numbers with an index multiple of three, so...

	for (int i = 2; fibonacci(i) <= maxValue; i += 3)
	{
		sumOfEvenFibonacci += fibonacci(i);
	}

	std::cout << "Sum of even fibonacci numbers that do not exceed 4 000 000 : " << sumOfEvenFibonacci << std::endl;

	return 0;
}
