#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout<<"Please enter your name: ";
    std::cin>>name;

    std::cout<<"Please enter your age: ";
    std::cin>>age;

    std::cout<<"Your name is "<< name << " and you are "<< age*365 << " years old.";

}
