// Linenumbers
// Puts the text from one file into another and counts the lines
// Anthony Frederick
// 02/05/24

#include <iostream>
#include <string>
#include <fstream>

int main(){

// Creating variables
std::string inputFileName;
std::string outputFileName;

// Prompting user for files
std::cout<<"Enter the name of a file whose lines you want counted: ";
std::getline(std::cin, inputFileName);

std::cout<<"Enter the name of the file that you want the counted lines to appear in: ";
std::getline(std::cin, outputFileName);

// Opening the files for reading
std::ifstream inputFile;
    inputFile.open(inputFileName);
std::ofstream outputFile;
    outputFile.open(outputFileName);

    std::string line;
int lineNumber = 1;

// Adds the lines to the other file with the numbers
while (std::getline (inputFile, line)){
outputFile << lineNumber << ". " << line << "\n";
lineNumber++;
}

// Closes the files
inputFile.close();
outputFile.close();

}