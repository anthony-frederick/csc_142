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
        if (nextEntry < (length)){
            books[nextEntry] = theBook;
            nextEntry ++;
            return(true);}
        else{return(false);};};

    // Method to change the pice of the books in the inventory
    void changePrice(std::string isbn, double newPrice){
        for (int i = 0; i < length; i++){
            if(books[i].getISBN() == isbn){
                books[i].changePrice(newPrice);
            }
        }
    }

    // Puts all of the information for the books together into a giant line of information
    void printInventory(){
        printf("-----------------------------------------------------------------------------------------\n");
        printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
        for(int i = 0; i < nextEntry; i++){
        printf("%-11s %-15.13s %-43.39s %2i  %3s $%7.2d\n",books[i].getISBN().c_str(), books[i].getAuthor().c_str(), books[i].getTitle().c_str(), books[i].getEdition(), books[i].getpubCode().c_str(), books[i].getPrice());}
        printf("-----------------------------------------------------------------------------------------\n");
    }


};