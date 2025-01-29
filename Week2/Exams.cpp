// exams
// Input your name and some test scores to calculate the average between the scores
// Anthony Frederick
// 01/29/25

#include <iostream>
#include <iomanip>

int main(){

    // This defines the variables
    std::string name;
    int number1;
    int number2;
    int number3;
    double average_score;

    // These next few inputs get information from the user
    std::cout <<"Please input your name: ";
    std::getline (std::cin, name);

    std::cout <<"Input your first exam score: ";
    std::cin>>number1;
    std::cout <<"Input your second exam score: ";
    std::cin>>number2;
    std::cout <<"Input your last exam score: ";
    std::cin>>number3;

    // Calculate the average score
    average_score = (number1 + number2 + number3) / 3.0;

    // Print the previous information along with the average
    std::cout <<"Hello " + name << std::endl;
    std::cout <<"Your exams scores were " <<number1<< ", " <<number2<< " and " <<number3<< "." <<std::endl;
    std::cout <<"Your average score is  " <<std::fixed<<std::setprecision(2) <<average_score<< std::endl;

}