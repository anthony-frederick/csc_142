// summoning_goblin
// This program can summon a goblin and destroy it
// Anthony Frederick
// 03/31/25

#include <iostream>

// This is the goblin class that gets called to have the constructor and destructor used
class Goblin{
    public:

    // This is the constructor
    Goblin(){
        std::cout<< "A goblin has been summoned!" << std::endl;
    };

    // This is the destructor
    ~Goblin(){
        std::cout<< "The goblin has been destroyed!" << std::endl;
    };

};

int main(){

    // This calls the constructor from the class
    Goblin goblin;

}