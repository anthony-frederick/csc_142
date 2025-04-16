// party_inventory
// This program creates an inveotyr for a person or player and gives it a max size
// Anthony Frederick
// 03/31/25

#include <iostream>

class Inventory{

    private:
    // These are the variables being used
    std::string* items;
    int capacity;
    int count;

    public:

    // This is the constructor for the inventory
    Inventory(int cap = 20)
    : capacity(cap), count(0){
        items = new std::string[capacity];


    }

    // This is a deep copy of the inventory so we don't lose the original
    Inventory(const Inventory& other)
    : capacity (other.capacity), count (other.count){

        items = new std::string[capacity];
        for (int i = 0; i < count; i++){
            items[i] = other.items[i];
        }
    }

    // This is a destructor to conserve data
    ~Inventory(){
        delete[] items;
    }

// This is a function to add items to the inventory 
void addItem (const std::string& item){
    if (count < capacity) {
        items[count++] = item;
    }
    else{
        std::cout << "Inventoy full. You cannot get any more items." << std::endl;
    }}

// This is a function to show the inventory's contents
void showInventory() const{

    for(int i = 0; i < count; i++)
        std::cout << "- " << items[i] << std::endl;
}
};



int main(){

    // This adds items to the first inventory
    Inventory Inventory1;
    Inventory1.addItem("keyboard");
    Inventory1.addItem("pencil");

    // This sets the two inventories to be the same
    Inventory Inventory2 = Inventory1;

    // This adds the item to the second backpack
    Inventory2.addItem("backpack");

    // These show off the two inventories
    std::cout << "Inventory 1" << std::endl;
    Inventory1.showInventory();

    std::cout << "\nInventory 2" << std::endl;
    Inventory2.showInventory();

return 0;
}