// heroAndPotion
// This program shows a hero's health, health them and then damages them
// Anthony Frederick
// 03/24/25


#include <iostream>

// Function to raise the hp
void drinkPotion(int& hp, int heals){
    hp += heals;
};

// Function to lower the hp
void damageHero(int* hp, int damage){
    *hp -= damage;
};

int main(){

    // Setting the hp
    int hp = 10;

    // Display all of the stats for the hero over this short time
    std::cout << "The hero's starting health is " << hp << std::endl;
    std::cout << "The hero drinks a potion healing 10 health" << std::endl;
    drinkPotion(hp, 10); // Call the heal function to raise hp
    std::cout << "The hero's current health is " << hp << std::endl;
    std::cout << "The hero gets blasted by hundreds of meteors taking 5 damage" << std::endl;
    damageHero(&hp, 5); // Calling the damage function to lower hp
    std::cout << "The hero's final health is " << hp << std::endl;
    
return 0;
};