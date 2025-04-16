#include <iostream>
#include<ctime>

int main(){


    int i;
    srand (time(NULL));

    int charisma = (rand() % 20) + 1;

    if (charisma > 10){
        std::cout<< "With a roll of " << charisma << " You can enter the castle safely";}
    else{
        std::cout<< "With a roll of " << charisma << " You are unable to enter the castle";};

return 0;
}