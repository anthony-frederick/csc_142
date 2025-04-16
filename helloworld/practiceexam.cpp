#include <iostream>

int search(int* numbers, int size){

int target = 65;
bool isfound = false;

for(int i = 0; i == size + 1; i++){

    if(numbers[i] == target){
        isfound = true;
        
};};

    if(isfound == true){
        return target;
    }
    else{

    return -1;
    };
};

int main(){

int size = 199;
int* numbers;

numbers = new int[size];

for(int i = 0; i < size; i++){
    numbers[i] = i;

};

std::cout << search(numbers, size) << std::endl;
delete[] numbers;
return 0;
};


