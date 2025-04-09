// countdown_timer
// This program makes a countdown from 10 to 1 and then says liftoff
// Anthony Frederick
// 07/04/25

#include <iostream>

int main(){

// Print countdown
std::cout << "Countdown:" << std::endl;
    for (int i = 10; i >= 1; i--){ // for loop to prints the descending numbers
        std::cout << "\n" << i << "..." << std::endl;
    }

std::cout << "Liftoff!" << std::endl;
return 0;
}