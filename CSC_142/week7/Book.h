#pragma once
#include <string>
#include <iostream>    
            

class Book{

    private:

        // This privately declares the variables so they can never be changed
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:

    // This constructor is created to assign these variables to things en masse
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
        codeNum = cn;
        author = au;
        title = ti;
        edition = ed;
        pubCode = pc;
        price = pr;
    };

    // Gets all of the information by returning their values
    std::string getTitle(){return title;};
    std::string getAuthor(){return author;};
    int getEdition(){return edition;};
    std::string getISBN(){return codeNum;};
    std::string getpubCode(){return pubCode;};
    double getPrice(){return price;};

    // This method allows the price to be changed
    void changePrice(double newPrice){price = newPrice;};

    // New constructor to create empty books in the new program
    Book(){
        price = 0;
        edition = 0;
        title = "";
        codeNum = "";
        author = "";
        pubCode = "";
    };

    // This prints the books information in certain spots based on the numbers and decimals
    friend std::ostream& operator<<(std::ostream& output, Book book){
        char c_text[100];
        std::string text = c_text;
        sprintf(c_text, "%-11s %-15.13s %-43.39s %2i  %3s $%7.2f", book.getISBN().c_str(), book.getAuthor().c_str(), book.getTitle().c_str(), book.getEdition(), book.getpubCode().c_str(), book.getPrice());
        output << c_text;
        return output;
        };

    // Makes it so the it doesnt print two of the same book
    friend bool operator == (Book mainbook, Book otherbook){
        
        if(mainbook.getISBN() == otherbook.getISBN()){
            return true;
        }
        else{
        return false;};

    };
    };