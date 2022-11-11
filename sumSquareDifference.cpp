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
    int sum_of_hundred_numbers = 5050;
    long int sum = 0;

    for (int i = 1; i <= 100; ++i) {

        // (1 + 2 + 3 + ... + 100)^2 = 1 * (1 + 2 + 3 + ... + 100) + 
        //                             2 * (1 + 2 + 3 + ... + 100) +
        //                             ...
        //                             100 * (1 + 2 + 3 ... + 100)
        //                             
        // so... (1 + 2 + 3 + ... + 100)^2 - (1^2 - 2^2 - 3^2 - ... - 100^2) =
        // = 1 * (2 + 3 + ... 100) + 2 * ( 1 + 3 + 4 + 5 + ... + 100) + ...
        // ... + 100 * (1 + 2 + 3 + ... + 99)

        sum += (sum_of_hundred_numbers - i) * i;
    }

    std::cout << sum << std::endl;

    return 0;
} 
