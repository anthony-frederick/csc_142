// galactic_coordinates
// This program promts the user for coordinates and other info to output their new location
// Anthony Frederick
// 07/04/25

#include <iostream>

int main(){

    // Variables for basic values
    double x;
    double y;
    double z;
    double thrust;
    double angle;
    double warp_factor;

    // Inputs for the user
    std::cout << "\nInput your x coordinate: ";
    std::cin >> x;
    std::cout << "\nInput your y coordinate: ";
    std::cin >> y;
    std::cout << "\nInput your z coordinate: ";
    std::cin >> z;
    std::cout << "\nEnter the thrust: ";
    std::cin >> thrust;
    std::cout << "\nEnter the angle in degrees: ";
    std::cin >> angle;
    std::cout << "\nEnter the warp factor: ";
    std::cin >> warp_factor;

    // Equations to figure out the outputs
    double new_x = (x + thrust * cos(angle)) * warp_factor;
    double new_y = (y + thrust * sin(angle)) * warp_factor;
    double new_z = z + (thrust / warp_factor);

    // Outputs using new equated coordinates
    std::cout << "\nAfter your hyperspace jump your new coordinates are as follows" << std::endl;
    std::cout << "X: " << new_x << std::endl;
    std::cout << "Y: " << new_y << std::endl; 
    std::cout << "Z: " << new_z << std::endl; 

return 0;
}