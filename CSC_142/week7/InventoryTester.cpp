// InventoryTester
// Makes an array of books, prints their info and changes their prices
// Anthony Frederick
// 2/6/2025
#include <iostream>
#include <string>
#include <cstdio>
#include "Book.h"
#include "Inventory.h"

int main(){

    // Makes an inventory that has 15 spaces for books
    Inventory Inventory(15);

    // Adds the information for each book into the book class to be printed or changed
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);
    Book book7 = Book("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95);
    Book book8 = Book("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95);
    Book book9 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38);
    Book book10 = Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38);
    Book book11 = Book("0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95);
    Book book12 = Book("0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50);

    // Prints a message that the books have ben added to the array
    if (Inventory.addBook(book1)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book1.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book2)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book2.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book3)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book3.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book4)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book4.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book5)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book5.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book6)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book6.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book7)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book7.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book8)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book8.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book9)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book"<< book9.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book10)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book10.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book11)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book11.getTitle() << " couldn't be added to the array..." << std::endl;}
    if (Inventory.addBook(book12)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book "<< book12.getTitle() << " couldn't be added to the array..." << std::endl;}

    // Call the printInventory method to print the inventory of books
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    Inventory.printInventory();
    printf("-----------------------------------------------------------------------------------------\n");

    // Changes the price of three of the books
    Inventory.changePrice("013478796X", 50.00);
    Inventory.changePrice("0143067889", 9.95);
    Inventory.changePrice("0134743350", 100.00);

    // Print the books again with the changed prices
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
    Inventory.printInventory();
    printf("-----------------------------------------------------------------------------------------\n");

    return 0;
}