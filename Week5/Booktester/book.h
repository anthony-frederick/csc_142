#pragma once
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

    // This constructor is created to s=assign these variables to things en masse
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
    int getPrice(){return price;};

    // This method allows the price to be changed
    void changePrice(double newPrice){price = newPrice;};


};