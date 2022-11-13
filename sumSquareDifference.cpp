///////////////////////////////////////////////////////////////////////////////////
/// The sum of the squares of the first ten natural numbers is,                 ///
///               1^2 + 2^2 + ... + 10^2 = 385                                  ///
/// The square of the sum of the first ten natural numbers is,                  ///
///               (1 + 2 + ... + 10)^2 = 55^2 = 3025                            ///
/// Hence the difference between the sum of the squares of the                  ///
/// first ten natural numbers and the square of the sum is 3025 -385 = 2640.    ///
///                                                                             /// 
/// Find the difference between the sum of the squares of the first one hundred ///
/// natural numbers and the square of the sum.                                  ///
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    const int n = 100;                        // number of terms in arithmetic sequence
    const int a1 = 1;                         // first term
    const int an = 100;                       // last term
    const double Sn = ((a1 + an) / 2.0) * n;  // sum of arithmetic sequence
    long int difference = 0;                  // between the sum of squares and the square of the sum

    for (int i = 1; i <= n; ++i) {

        // (1 + 2 + 3 + ... + 100)^2 = 1 * (1 + 2 + 3 + ... + 100) + 
        //                             2 * (1 + 2 + 3 + ... + 100) +
        //                             ...
        //                             100 * (1 + 2 + 3 ... + 100) =>
        //                             
        // =>... (1 + 2 + 3 + ... + 100)^2 - (1^2 - 2^2 - 3^2 - ... - 100^2) =
        // = 1 * (2 + 3 + ... 100) + 2 * ( 1 + 3 + 4 + 5 + ... + 100) + ...
        // ... + 100 * (1 + 2 + 3 + ... + 99)

        difference += (Sn - i) * i;
    }

    std::cout << difference << std::endl;

    return 0;
} 
