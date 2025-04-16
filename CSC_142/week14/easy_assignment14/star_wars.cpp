// star_wars
// Makes a countdown from any number to 0 and then prints a message
// Anthony Frederick
// 04/15/25

#include <iostream>

    void countdown_to_lightspeed(int seconds){

    for (int i = seconds; i > 0; i--){
        std::cout << "\nJumping in " << i << "..." << std::endl;
    }
    std::cout << "\nPunch it Chewie!" << std::endl;
    }

int main(){

    countdown_to_lightspeed(5);
    return 0;
}