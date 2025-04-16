// RectangleTester
// This code gets the length and width of a few rooms and calulates their area
// Anthony Frederick
// 2/19/2025
#include <iostream>
#include "rectangle.h"

int main(){

    // Set the values of the length and width
    double inputLength = 0;
    double inputWidth = 0;

    // Class being created for kitchen
    Rectangle kitchen;

    // User input for the legth and width of the kitchen
    std::cout <<"\nInput the length of the kitchen: ";
    std::cin >> inputLength;
    std::cout <<"Input the the width of the kitchen ";
    std::cin >> inputWidth;

    // Send the inputs to the variables of length and width for kitchen
    kitchen.setLength(inputLength);
    kitchen.setWidth(inputWidth); 

    // Class created for the bedroom
    Rectangle bedroom;

    // User input for the legth and width of the bedroom
    std::cout <<"\nInput the length of the bedroom: ";
    std::cin >> inputLength;
    std::cout <<"Input the length of the bedroom: ";
    std::cin >> inputWidth;

    // Send the inputs to the variables of length and width for the bedroom
    bedroom.setLength(inputLength);
    bedroom.setWidth(inputWidth);

    // Class created for the living room
    Rectangle livingroom;

    // User input for the legth and width of the living room
    std::cout <<"\nInput the length of the living room: ";
    std::cin >> inputLength;
    std::cout <<"Input the width of the living room: ";
    std::cin  >> inputWidth;

    // Send the inputs to the variables of length and width for the living room 
    livingroom.setLength(inputLength);
    livingroom.setWidth(inputWidth);

    // Displays all the information for the user
    std::cout <<"\nThe length of the kitchen is " <<kitchen.getlength() << "x" <<kitchen.getwidth() << " and the area of the room is " <<kitchen.getarea() <<" square feet."<<std::endl;
    std::cout <<"The length of the bedroom is " <<bedroom.getlength() << "x" <<bedroom.getwidth() << " and the area of the room is " <<bedroom.getarea() <<" square feet."<<std::endl;
    std::cout <<"The length of the living room is " <<livingroom.getlength() << "x" <<livingroom.getwidth() << " and the area of the room is " <<livingroom.getarea() <<" square feet."<<std::endl;

    // Displays the total area
    std::cout<<"The total area of the rooms is " <<kitchen.getarea() + bedroom.getarea() + livingroom.getarea() << " square feet.";

return 0;
}