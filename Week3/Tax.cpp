// Tax
// Gets an input item and price from the user and calcualtes sales tax and total price
// Anthony Frederick
// 02/03/25

#include <iostream>
#include <iomanip>
int main(){

std::string purchasedescription;
std::string taxlessString;
double taxless;
double salestax = 0.0;
salestax = 0.06;
std::string confirmation;
bool keepGoing = true;

// Gets information from the user about the item
while (keepGoing == true){
    std::cout<<"Please enter a description of what you purchased: ";
    std::getline(std::cin, purchasedescription);
    do{
        std::cout<<"Please input the cost of your purchase in dollars and cents: ";
        std::getline(std::cin, taxlessString);
        taxless = std::stod(taxlessString);
        } while(taxless <= 0);
    
    // Displays all input and calculated information
    double taxamount = salestax * taxless;
    double totalprice = taxamount + taxless;
    std::cout<<"You have purchased "<<purchasedescription<<".";
    std::cout<<"The original price of all of the purchase was $"<<std::fixed<<std::setprecision(2)<<taxless<<".\n";
    std::cout<<"The tax in this area is " <<6<< "%.\n";
    std::cout<<"The tax that you are adding to the purchase is $"<<std::fixed<<std::setprecision(2)<<taxamount<< ".\n";
    std::cout<<"The final cost of the purchase is $"<<std::fixed<<std::setprecision(2)<<totalprice<< ".\n";

    // Prompts the user to input yes or no to redo the program
    do{
    std::cout<<"\nWould you like to enter another purchase? (yes/no): ";
    std::getline(std::cin, confirmation);
        if (confirmation == "no" || confirmation == "NO" || confirmation == "No"){
            keepGoing = false;
            break;
        }
        else if (confirmation == "yes" || confirmation == "YES" || confirmation ==  "Yes"){
            keepGoing = true;
            break;
        }
        else {
            std::cout<<"\nPlease enter either yes or no\n";
        }
    } while(true);
}

}
