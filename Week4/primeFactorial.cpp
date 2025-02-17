// PrimeFactorial
// Determies if a random number is prime and then displays it's factorial
// Anthony Frederick
// 02/17/25

#include <iostream>
#include <ctime>

// Creates the method for detecting prime numbers
bool isPrime(int num){
    if (num <= 1) return false;
    for (int factors = 2; factors <= num / 2; factors++){
    if (num % factors == 0) return false;}
return true;
}

// Creates the method for finding the factorial of a prime number
double factorial(int num){
    double primeFactorial = 1;
    for (int i = 1; i <= num; i++){
        primeFactorial *= i;
    }
    return primeFactorial;

}

int main(){

std::string confirmation;
bool repeat = true;
srand(time(0));

// Displays the information gahtered like prime numbers and factorials
while (repeat == true){
int num = rand() % 51;
    if (isPrime(num) == true){
        std::cout<<"The number "<< num << " is prime!"<<std::endl;
        std::cout<<"The factorial of "<< num << " is "<< factorial(num) << std::endl;
    }
    else{
        std::cout<<"The number "<< num <<" is not prime."<<std::endl;
    }

    do{
        std::cout<<"\nWould you like to repeat the program? (yes/no): ";
        std::getline(std::cin, confirmation);
        if (confirmation == "yes" || confirmation == "Yes" || confirmation == "YES"){
            repeat = true;
            break;
        }
        else if (confirmation == "no" || confirmation == "No" || confirmation == "NO"){
            std::cout <<"Goodbye!" << std::endl;
            repeat = false;
            break;
        }
        else{
            std::cout <<"\nPlease enter either yes or no"<< std::endl;
        }
    } while(true);
}

}