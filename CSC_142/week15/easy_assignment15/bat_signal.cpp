// batman_signal
// This code just prints that the joker is spotted in Arkham Asylum
// Anthony Frederick
// 04/17/25

#include <iostream>
#include <utility>

int main(){
    std::pair<std::string, std::string> alert("Joker", "Arkham Asylum");
    std::cout << alert.first << " is spotted at " << alert.second << "!" << std::endl;
    return 0;
}