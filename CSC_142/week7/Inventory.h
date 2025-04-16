#pragma once
#include <cstdio>
#include <iostream>
#include <string>
#include "Book.h"

class Inventory{

    // Defines the variables privately
    private:
    Book* books;
    int nextEntry;
    int length;

    // Constructor for everything relating to the books 
    public:
    Inventory(int size){
        length = size;
        books = new Book[length];
        nextEntry = 0;};

    // Destructor the release the information
    ~Inventory(){delete[] books;}


    // Method for the books to be added to the inventory
    bool addBook(Book theBook){
        for (int i = 0; i < length; i++){
            if(books[i].getISBN() == theBook.getISBN()){return false;};};
                if (nextEntry < (length)){
                    books[nextEntry] = theBook;
                    nextEntry ++;
                    return(true);}
                else{return(false);};};

    // Method to change the pice of the books in the inventory
    void changePrice(std::string isbn, double newPrice){
        for (int i = 0; i < length; i++){
            if(books[i].getISBN() == isbn){
                std::cout<<"Changing price of "<< isbn << " to $"<<newPrice<<std::endl;
                books[i].changePrice(newPrice);
            };
        };
    };
    

    // Puts all of the information for the books together into a giant line of information
    void printInventory(){
        for (int i = 0; i < nextEntry; i++)
        std::cout<<books[i] <<std::endl;

};
};