// BookTester
// This gets some information about books and prints them
// Anthony frederick
// 02/21/25
#include <iostream>
#include <cstdio>
#include <string>
#include "book.h"

int main(){

    // Three book objects are created using the constructed method and have information stored about them
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 118.30);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.05);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);

    // Prints a few books and gives a bit of information about them
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getpubCode().c_str(), book1.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getpubCode().c_str(), book2.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getpubCode().c_str(), book3.getPrice());
    printf("-----------------------------------------------------------------------------------------\n");

    // Tells the user that the prices of the books are being changed
    std::cout<<"The price of the first book has been changed from $" << book1.getPrice() << " to $149.99"<<std::endl;
    std::cout<<"The price of the second book has been changed from $" << book2.getPrice() << " to $109.99"<<std::endl;
    std::cout<<"The price of the third book has been changed from $" << book3.getPrice() << " to $179.99"<<std::endl;

    // Changes the prices of the books
    book1.changePrice(149.99);
    book2.changePrice(109.99);
    book3.changePrice(179.99);

    // Prints the book's info with the changed prices
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getpubCode().c_str(), book1.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getpubCode().c_str(), book2.getPrice());
    printf("%-11s %-15s %-43.39s %2i  %3s $%7.2f\n",book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getpubCode().c_str(), book3.getPrice());
    printf("-----------------------------------------------------------------------------------------\n");

return 0;
};