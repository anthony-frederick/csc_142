// fibonacci_range
// This program is just a function for the main fibonacci code to use
// Anthony Frederick
// 04/03/25

#ifndef FIBONACCIRANGE_H
#define FIBONACCIRANGE_H

#include "fibonacci_iterator.h"

struct FibonacciRange {

	explicit FibonacciRange(int max) : max{max} { }
	FibonacciIterator begin() const {
		return FibonacciIterator{};
	}
	int end() const {
		return max;
	}

private:
	const int max;
};
#endif