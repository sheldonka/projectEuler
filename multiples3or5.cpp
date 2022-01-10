#include <iostream>

int multiplesOf3or5()
{
	//I use all of these variables to avoid magic numbers

	//arithmetic progression of sequence 3, 6, 9 ... 996, 999

	const short a1For3 = 3;
	const short anFor3 = 999;
	short membershipFor3 = anFor3 / a1For3;
	short dFor3 = anFor3 / membershipFor3;
	const int sumOfProgressionFor3 = (a1For3 + anFor3) * membershipFor3 / 2;

	//arithmetic progression of sequence 5, 10, 15 ... 990, 995

	const short a1For5 = 5;
	const short anFor5 = 995;
	short membershipFor5 = anFor5 / a1For5;
	short dFor5 = anFor5 / membershipFor5;
	const int sumOfProgressionFor5 = (a1For5 + anFor5) * membershipFor5 / 2;

	//arithmetic progression of sequence 15, 30, 45 ... 975, 990
	
	const short a1For15 = 15;
	const short anFor15 = 990;
	short membershipFor15 = anFor15 / a1For15;
	shor dFor15 = anFor15 / membershipFor15;
	const int sumOfProgressionFor15 = (a1For15 + anFor15) * membershipFor15 / 2;

	return sumOfProgressionFor3 + sumOfProgressionFor5 - sumOfProgressionFor15;
}	

int main()
{
	std::cout << "Multiples of 3 or 5 bellow 1000 : " << multiplesOf3or5() << std::endl;

/*      We can do the same as follows

	int sum = 0;

	sum = ((3 + 999) * 333 / 2) + ((5 + 995) * 199 / 2) - ((15 + 990) * 66 / 2);

	std::cout << "Multiples of 3 or 5 bellow 1000 : " << sum << std::endl;
*/
	return 0;
}
