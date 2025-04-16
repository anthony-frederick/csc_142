#include <iostream>
#include <string>

enum class CharacterClass{Warrior, Archer, Mage, Rogue};

struct Character{

    std::string name;
    CharacterClass type;
    int health;
    float strength;
 };


 std::string classToString(CharacterClass type){    
    
        switch(type) {
            case CharacterClass::Warrior: return "Warrior";
            case CharacterClass::Mage:    return "Mage";
            case CharacterClass::Archer:  return "Archer";
            case CharacterClass::Rogue:   return "Rogue";
            default:                      return "Unknown";
        };
    };


int main(){

        int totalHealth = 0;

    Character Characters[4] = {
    {"Gurt", CharacterClass::Warrior, 1900, 500.0f},
    {"Steele", CharacterClass::Archer, 1400, 550.0f},
    {"Gerald", CharacterClass::Mage, 750, 800.0f},
    {"Striker", CharacterClass::Rogue, 900, 600.0f}
    };



    for(int i = 0; i < 4; i++){

        std::cout<< "Name: " << Characters[i].name 
                 << " | Class: " << classToString(Characters[i].type)
                 << " | Health: " << Characters[i].health
                 << " | Strength: " << Characters[i].strength;
}

    for(int i = 0; i < 4; i++){

        totalHealth += Characters[i].health;
    }

    float avgHealth = static_cast<float>(totalHealth) / 4.0f; 

    std::cout << "\nAverage Health: " << avgHealth << std::endl;


        return 0;

}