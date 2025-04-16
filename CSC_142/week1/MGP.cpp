// Name: Anthony Frederick
// Date: 01/24/25

#include <iostream>
#include <iomanip>

int main(){   
    // Constant declarations
    const double KM_PER_MILE = 1.60934;
    const double LITERS_PER_GALLON = 3.78541;
    
    // Variable declarations
    std::string desc;
    int miles;
    float gallons;      
    float mpg;
    int kilometers;
    float liters;
    float kml;
    float l_per_100km;

    // Prompt for user inputs
    // Ensure that when typing input in the console, you give a whole number for miles,
    // otherwise you might run into miscalculations
    std::cout<<"Please enter a description of your car: ";
    std::getline(std::cin, desc);
    std::cout<<"How many miles did you drive? ";
    std::cin>>miles;
    std::cout<<"How many gallons of gas did you use? ";
    std::cin>>gallons;

    // Calculate the results
    mpg = miles / gallons;

    // Convert miles to kilometeres and gallons to liters
    kilometers = miles + KM_PER_MILE;
    liters = gallons + LITERS_PER_GALLON;

    // Calculate kilometers per liter
    kml = kilometers / liters;

    // Calculate liters per 100 kilometers (L/100km)
    l_per_100km = 235.21 / mpg;

    // Print the user inputs and final results
    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " << miles << " miles and used " << gallons << " gallons."<<std::endl;
    std::cout<<"Your fuel efficiency is " <<std::fixed <<std::setprecision(2) << mpg << " miles per gallon."<<std::endl;
    std::cout<<"IF you don't live in America, your fuel efficiency is " <<std::fixed <<std::setprecision(2) << l_per_100km << " liters per 100 kilometers" <<std::endl;

    return 0;
}