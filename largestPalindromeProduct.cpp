#include <iostream>

/* for elegant solution 

bool isPalindrome(int n) {

	if (n < 0) {
		return !n;
	}

	else {
		long long num = 0;
		int tmp = n;

		while(tmp) {
			num = num * 10 + tmp % 10;
			tmp /= 10;
		}

		return !(n - num);
	}
}

*/

bool isProductOfTwo3Digit(int n) {

	for (int i = 999; i > 99; --i) {
		if (n % i == 0 && n / i > 99 && n / i < 999) {	
			return true;
		}
	}

	return false;
}

int largestPalindromeProduct() {

// more effective

	int palindrome = 997799;

	while (palindrome > 100000) {

		if (isProductOfTwo3Digit(palindrome)) {
			return palindrome;
		}

		else if ((palindrome / 100) % 10 != 0) {
			palindrome -= 1100;
		}

		else if ((palindrome / 10) % 10 == 0) {
			palindrome -= 11;
		} 
		
		else 
			palindrome -= 110;
	}

	//elegant solution
/*
	for (int i = 997799; i > 10000; --i) {
		if (isPalindrome(i) && isProductOfTwo3Digit(i)) {
			return i;
		}
	}
*/
	return -1;
}

int main()
{
	std::cout << "The largest polindrome made from product of two 3-digit numbers : " << largestPalindromeProduct() << std::endl;
	return 0;
}
