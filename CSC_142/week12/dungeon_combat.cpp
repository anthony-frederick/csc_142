// dungeon_combat
// This program has a goblin and barbarian fight with different stats
// Anthony Frederick
// 04/03/25

#include <iostream>
#include <cstdlib>
#include <ctime>

// This is a function to roll a type of dice
int dice_roll(int sides){
    return(rand() % sides) + 1;
}

int main(){

    // Variables for things throughout the program
    int barbarianHP = 20;
    int barbarianAC = 15;
    int goblinHP = 12;
    int goblinAC = 10;
    // This allows us to use random numbers
    srand(time(0));

    std::cout << "The barbarian encounters a goblin!" << std::endl;

    // The main code is contained in this while loop
    while (barbarianHP > 0 && goblinHP > 0){

        std::cout << "\n\nBarbarian turn start!" << std::endl;

        int barbarian_roll = dice_roll(20); // calling the function for a d20
        std::cout << "\nThe barbarian rolls a " << barbarian_roll << "!" << std::endl;

        // This if determines if the barbarian hits and how much it does
        if (barbarian_roll >= goblinAC && barbarian_roll < 20){
            int barbarian_damage = dice_roll(8); // calling the function for a d8
            std::cout << "\nThe barbarian stikes the goblin dealing " << barbarian_damage << " damage!" << std::endl;
            goblinHP -= barbarian_damage;
            std::cout << "\nThe goblin has " << goblinHP << " hp remaining" << std::endl;
        }
        // This else if detects a crit from the barbarian
        else if (barbarian_roll == 20){
            int barbarian_damage = dice_roll(8);
            std::cout << "\nThe barbarian hits a weak point dealing " << barbarian_damage * 2 << " damage!" << std::endl;
            goblinHP -= barbarian_damage;
            std::cout << "\nThe goblin has " << goblinHP << " hp remaining" << std::endl;
        }
        else{
            std::cout << "\nand misses the goblin completely" << std::endl;
        }
        if (goblinHP < 0){
            break; // break if the goblin dies
        }

        std::cout << "\n\nGoblin turn start!" << std::endl;

        int goblin_roll = dice_roll(20);
        std::cout << "\nThe goblin rolls a " << goblin_roll << "!" << std::endl;

        // This checks if the goblin hits the barbarian and calculates the damage if it does
        if (goblin_roll >= barbarianAC && goblin_roll < 20){
        int goblin_damage = dice_roll(6); // calling the function to roll a d6
        std::cout << "\nThe goblin hits the barbarian dealing " << goblin_damage << " damage!" << std::endl;
        barbarianHP -= goblin_damage;
        std::cout << "\nThe barbarian has " << barbarianHP << " health remaining!" << std::endl;
        }
        // This else if detects if the goblin crits
        else if (goblin_roll == 20){
            int goblin_damage = dice_roll(6);
            std::cout << "\nThe goblin hits a weak point dealing " << goblin_damage * 2 << " damage!" << std::endl;
            goblinHP -= goblin_damage;
            std::cout << "\nThe barbarian has " << barbarianHP << " hp remaining" << std::endl;
            }
        else{
            std::cout << "\nand misses the barbarian completely" << std::endl;
        }
        if (barbarianHP <= 0){
            break; // break if the barbarian dies
        }
    }

    // If statement to declare the victor of the battle
    if (barbarianHP > goblinHP){
        std::cout << "\nThe goblin is defeated and the barbarian has won the battle" << std::endl;
    }
    else{
        std::cout << "\nThe barbarian is defeated and the goblin wins the battle" << std::endl;
    }

    
return 0;
}