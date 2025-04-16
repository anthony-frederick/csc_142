#include <iostream>

int main(){

    int arrayOne[] = {1, 2, 3, 4, 5};
    int arrayTwo[] = {1, 2, 3, 4, 5};
    bool similar = true;

    int size = sizeof(arrayOne) / sizeof(int);

    for(int i = 0; i < size; i++){

        if(arrayOne[i] != arrayTwo[i]){

            std::cout<<"They are not the same"<<std::endl;
            std::cout<< arrayOne[i] << "is not the same as" << arrayTwo[i] <<std::endl;
            similar = false;
            break;
        };

        if(similar){

            std::cout<<"They are the same!"<<std::endl;
            break;

        };
    };

    return 0;
};