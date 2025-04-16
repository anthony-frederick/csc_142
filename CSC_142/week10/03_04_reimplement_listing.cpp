// reimplement_listing
// This prints some original number and then changes it and re prints it
// Anthony frederick
// 03/27/25

#include <iostream>

int main() {

    // This is a varibale for an original number and a refernce 
	auto original = 100;
	auto& original_ref = original;
	printf("Original: %d\n", original);
	printf("Reference: %d\n", original_ref);

    // This changes the value and re print it
	auto new_value = 200;
	original_ref = new_value;
	printf("Original: %d\n", original);
	printf("New Value: %d\n", new_value);
	printf("Reference: %d\n", original_ref);
}