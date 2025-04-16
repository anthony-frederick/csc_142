#include <iostream>
#include <string>
#include <utility>

void showGadgets(std::string g1, std::string g2){

    std::cout << "\nGadget 1: " << g1 << ", Gadget 2: " << g2 << std::endl;

};

int main(){

    std::string gadget1 = "Batarang";
    std::string gadget2 = "Grappling Hook";

    showGadgets(gadget1, gadget2);
    std::swap(gadget1, gadget2);
    showGadgets(gadget1, gadget2);

    return 0;
}