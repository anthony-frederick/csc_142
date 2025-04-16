// fibonacci
// This program is a range for the fibonacci sequence to go
// Anthony Frederick
// 04/03/25

#include "08_02_fibonacci_prime_number_range.h"
#include "fibonacci_iterator.h"
#include "fibonacci_range.h"

#include <cstdio>

int main() {
	
	FibonacciRange range{ 5000 };
	const auto end = range.end();
	for (auto x = range.begin(); x != end; ++x) {
		const auto i = *x;
		printf("%d ", i);
	}
	return 0;
}