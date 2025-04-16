// SpeedTrap
// This program will tell you if you are speeding
// Anthony Frederick
// 01/29/25

#include <iostream>

int main(){
    int speed_limit;
    double driving_speed;

    // Ask about the speed limit and what you are driving
    std::cout<<"Input the speed limit of the road you are on: ";
    std::cin>>speed_limit;
    std::cout<<"Input the speed that you were driving at: ";
    std::cin>>driving_speed;

    // Check if you are speeding
    if(driving_speed >= speed_limit)
    std::cout<<"You are speeding you maniac!" <<std::endl;

    else
    std::cout<<"You are driving at a legal speed good job." <<std::endl;

}