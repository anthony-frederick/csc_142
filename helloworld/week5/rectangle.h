#pragma once
#include <string>

class Rectangle{

    private: 
        // The length and with are set to be private and have a value
        double length;
        double width;

    public:
        // Let the length be input by the user
        void setLength (double inputLength){length = inputLength;};

        // Let the width be input by the user
        void setWidth (double inputWidth){width = inputWidth;};

        // Length is returned to set it's value
        double getlength(){return length;};

        // Width is returned to set it's value
        double getwidth(){return width;};

        // The rectangles area is calculated and returned 
        double getarea(){
            double area = (length * width);
            return area;};  
};