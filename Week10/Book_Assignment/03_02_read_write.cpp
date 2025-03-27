// read_write
// This code reads and writes the letter d into arrays where it is capital and lowercase
// Anthony Frederick
// 03/27/25

#include <cstdio>
#include <iostream>
#include <string>

// This function reads the index of the array and siplays it which in this case is 3
void read_from(const char *ptr, std::size_t len, const int index){

    if (index < 0 || index > len - 1)
        std::cerr << "There is an invalid index at " << index << std::endl;
    else 
        std::cout << "ptr[" << index  << "] = " << ptr[index] << std::endl;
    };

// This adds the letter to the right spot in the array which is the 3rd spot here
void write_to(char *ptr, std::size_t len, const int index, char input){

    if (index < 0 || index > len - 1)
        std::cerr<< "There is an invalid index at " << index << std::endl;
    else
        ptr[index] = input;
};

int main() {

    // This is the array for the lower case letters
    char lower[] = "abc?e";
    int lower_len = sizeof(lower);

    // This is the array for the upper case letters
    char upper[] = "ABC?E";
    int upper_len = sizeof(upper);

    write_to(lower, lower_len, 3, 'd'); // This calls the write_to function to add d to the third spot of the index
    read_from(lower, lower_len, 3); // This calls the read_from function which reads the new letter
    
    write_to(upper, lower_len, 3, 'D'); // This calls the write_to function to add D to the third spot of the index
    read_from(upper, upper_len, 3); // This calls the read_from function which reads the new letter

    // These two cout's print the new arrays
    std::cout << "lower: " << lower << std::endl;
    std::cout << "upper: " << upper << std::endl;

    return 0;
}