// Even
// Generates 1000 random numbers between 1 an 100 and figures out which are odd and even
// Anthony Frederick
// 02/10/25

#include <iostream>
#include <ctime>

// Defines the method for isEven
bool isEven (int num){
    if (num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

// Defines the variables and gives them placeholders
srand(time(0));
int randomNum = 0;
int even = 0;
int odd = 0;

// Makes the program generate for 1000 numbers
while (randomNum < 1000){
    int num = rand() % 101;
    if( isEven(num) == true){ // figures out how many are even
        even++;
    }
    else{ // Figures out how many are odd
        odd++;
    }
    randomNum++;
}

// Prints the results
std::cout<<"The ammount of random numbers generated was "<< randomNum << "." << std::endl;
std::cout<<"The amount of even numbers generated was "<< even << "." << std::endl;
std::cout<<"The amount of odd number generated was "<< odd << "." << std::endl;

return 0;
}