// buy_potions
// This program prompts you to buy a potion and you can choose to buy a certain amount
// Anthony Frederick
// 04/02/25

#include <iostream>
#include <string>

int main(){

    // These are variables to be used
    int gold = 100;
    int price = 10;
    int potions;
    std::string answer;

    // This desribes the shop and prompts the user for an amount to buy
    std::cout << "Welcome to the potion shop adventuruer!" << std::endl;
    std::cout << "\nPotions cost 10 gold each by the way." << std::endl;
    std::cout << "\nHow many potions would you like to buy? ";
    std::cin >> potions;
    int totalPrice = potions * price;
    std::cout << "\nThat will cost " << totalPrice << " gold" << std::endl;
    std::cout << "\nWould you like to make this purchase?(yes/no) ";
    std::cin >> answer;
    int currentGold = gold - totalPrice;

    // Detects if the user input yes or no to buying a potion
    if (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "y" || answer == "Y"){
        if(gold < totalPrice){ // If statement to see if you have enough gold
            std::cout << "\nUh you are a bit too broke to buy this son" << std::endl;
        }
        else{
            if(currentGold > 100){ // If statement to see if you input a negative number
                std::cout << "\nWait a minute did you just rob me...?" << std::endl;
                std::cout << "\nYou robbed the shopkeeper and now have " << currentGold << " gold!" << std::endl;
            }
            else if(currentGold == 100){
                std::cout << "\nYou came here to buy nothing?" << std::endl;
            }
            else{
            std::cout << "\nYou buy the potion(s) and now have " << currentGold << " gold!" << std::endl;}}

    }
    else if (answer == "no" || answer == "NO" || answer == "No" || answer == "n" || answer == "N"){
            std::cout << "\nOk come back another time." << std::endl;
    }
    else{
        std::cout << "\nIs that a no? Don't waste my time." << std::endl;
    };

return 0;
}