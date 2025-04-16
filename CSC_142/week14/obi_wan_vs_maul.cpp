// obi-wan vs maul
// Has a duel between obi-wan and darth maul with random numbers to see who wins
// Anthony Frederick
// 04/15/25

#include <iostream>
#include <cstdlib>
#include <ctime>

int roll_attack(){
    return rand()% 10 + 1;
};

int roll_defense(){
    return rand()% 10 + 1;
};

bool is_hit(int attack, int defense){
    return (attack > defense);
};

void duel(){
    int obi_wins = 0;
    int maul_wins = 0;
    int tie = 0;

    std::cout << "Obi-wan and Darth Maul begin their duel!" << std::endl;

    for (int i = 1; i <= 5; i++){
            int attack = roll_attack();
            int defense = roll_defense();

        std::cout << "\nROUND " << i << ": Obi attacks with a " << attack << " maul defends with a " << defense <<  " -- " << std::endl;
        if (is_hit(attack, defense)){
            std::cout << "HIT!" << std::endl;
            obi_wins++;
        }
        else{
            std::cout << "MISS!" << std::endl;
            maul_wins++;        
        }
    }

    std::cout << "\nObi-Wan wins " << obi_wins << " rounds!" << std::endl;
    std::cout << "\nDarth Maul wins " << maul_wins << " rounds!" << std::endl;

    if(obi_wins > maul_wins){
        std::cout << "\nObi_Wan wins the duel!" << std::endl;
    }
    else if(maul_wins > obi_wins){
        std::cout << "\nDarth Maul wins the duel!" << std::endl;
    }
    else{
        std::cout << "\nIt was a tie!" << std::endl;
    }

}
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    duel();
    return 0;
}