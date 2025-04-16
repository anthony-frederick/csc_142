// InventoryTester
// Makes an array of books, prints their info and changes their prices
// Anthony Frederick
// 2/27/2025
#include <iostream>
#include <cstdio>
#include "Book.h"
#include "Inventory.h"

int main(){

    // Makes an inventory that has 10 spaces for books
    Inventory Inventory(10);

    // Adds the information for each book into the book class to be printed or changed
    Book book1 = Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    // Prints a message that the books have ben added to the array
    if (Inventory.addBook(book1)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};
    if (Inventory.addBook(book2)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};
    if (Inventory.addBook(book3)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};
    if (Inventory.addBook(book4)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};
    if (Inventory.addBook(book5)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};
    if (Inventory.addBook(book6)) {std::cout << "The book has successfully been added to the array." << std::endl;}
    else{std::cout << "The book couldn't be added to the array...";};

    // Call the printInventory method to print the inventory of books
    Inventory.printInventory();

    // Changes the price of three of the books
    Inventory.changePrice("013478796X", 50.00);
    Inventory.changePrice("0143067889", 9.95);
    Inventory.changePrice("0134743350", 100.00);

    // Print the books again with the changed prices
    Inventory.printInventory();

    return 0;
}