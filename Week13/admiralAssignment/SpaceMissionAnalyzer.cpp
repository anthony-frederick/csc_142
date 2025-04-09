// 

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double distance;
    double fuel;
    int crew;
    double spaceship_weight;
    double life_support_time;
    bool mission_viable = false;

    std::cout << "\nHow far are you from your destination planet? (million kilometers): ";
    std::cin >> distance;
    std::cout << "\nHow much fuel do you have? (tons): ";
    std::cin >> fuel;
    std::cout<< "\nHow many crew members do you have?: ";
    std::cin >> crew;
    std::cout << "\nHow much does your ship weigh? (tons): ";
    std::cin >> spaceship_weight;
    std::cout << "\nHow much time is left in your life support? (days): ";
    std::cin >> life_support_time;


    double fuel_efficiency = (fuel / spaceship_weight) * 100;
    double speed = (fuel * 10000) / (crew * spaceship_weight);
    double travel_time = (distance * 1000000) / speed;
    int travel_days = static_cast<int>(std::ceil(travel_time));

    std::cout << "\nFuel efficiency: " << fuel_efficiency << "%" << std::setprecision(2) << std::endl;
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "\nEstimated speed: " << speed << " km/day" << std::endl;
    std::cout << "\nEstimated travel time: " << travel_days << " days" << std::endl;

    if (fuel_efficiency >= 0 && life_support_time >= travel_time + 10 && crew >= 2 && crew <= 8 && spaceship_weight < 500){
        mission_viable = true;
    }
    if (mission_viable == true){
        std::cout << "\nMISSION VIABLE" << std::endl;
    }
    else if(mission_viable ==false){
        std::cout << "\nMISSION UNVIABLE" << std::endl;
    }
return 0;
}