// uniqueAndMagical
// This program created magical weapons with charges and then uses them, lowering the charges
// Anthony Frederick
// 03/25/25

#include <iostream>
#include <string>

// This class has the method for the magic item and the one for using an item it also declares the variables
class MagicItem{

private:
    std::string name;
    std::string power;
    int charges;

public:
   
    // Tells the user that a weapon was created and what stats it has
    MagicItem(const std::string& name, const std::string& power, int charges)
        : name(name), power(power), charges(charges) {
        std::cout << name << " (" << power << " power) created with " << charges << " charges!" << std::endl;
        };

    // This removes a charge on the used weapon and alerts you if it runs out
    void useItem(){

        if(charges > 0){
        charges --;
        std::cout << "Used " << name << " (" << power << ") it has " << charges << " charges left." << std::endl; 
        }
        else{
        std::cout << "Tried to use " << name << "(" << power << ") it has run out of charges!" << std::endl; 
        };

};
};

int main(){

    MagicItem staff("Mystic power staff", "Arcane", 5); // Gives the information of the weapon
    staff.useItem(); // Calls the method to remove a charge and says that it has been used
    MagicItem sword("Cutter of Demons", "Blazing", 2);
    sword.useItem();
    sword.useItem();
    sword.useItem();
    MagicItem bow("The Piercer", "Sickening", 3);
    bow.useItem();
    bow.useItem();

    return 0;

};