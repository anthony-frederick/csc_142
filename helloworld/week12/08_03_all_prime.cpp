// all_prime
// This program gets all of the prime numbers in the range it is set to
// Anthony Frederick
// 04/03/25

#include "fibonacci_range.h"
#include "fibonacci_iterator.h"
#include "08_02_fibonacci_prime_number_range.h"

#include <iostream>

int main() {

	std::cout << "Fibonacci: ";
	for (const auto &i : FibonacciRange{ 5000 })  {

		std::cout << i << ' ';
	}

	std::cout << "\n\n";
    
    PrimeNumberRange prime{ 5000 };

	std::cout << "Prime: ";
	std::cout << prime.getCurrent() << ' ';

	while (true) {

		int n{ ++prime };
		if (n < 0)
			return true;

		std::cout << n << ' ';
	}

    return 0;
}