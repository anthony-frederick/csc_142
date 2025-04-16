#include <iostream>
#include <string>
#include <cctype>

int decode_char(char letter){
    return toupper(letter) - 'A' + 1;
};

int decode_char(char letter, int bonus){
    return decode_char(letter) + bonus;
};

int decode_message(std::string message, int index = 0){
    if(index > message.size()){return 0;};
    return decode_char(message[index]) + decode_message(message, index + 1);
};

std::string yoda_shift(std::string msg, int shift = 2) {
    std::string result;
    for (char c : msg) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
};

std::string yoda_decode(const std::string& msg, int shift = -2){ // This functions decodes a message that is encrypted in a casear cipher.
    std::string result; 
    for (char c : msg){ 
        if (isalpha(c)){
            char base = isupper(c) ? 'A' : 'a'; 
            int shifted = (c - base + shift) % 26;
            if (shifted < 0) shifted += 26;
            result += static_cast<char>(shifted + base);
        } else {
            result += c;
        }
    }
    return result;
};

int main(){

std::cout << "\nYoda decode 'C" << decode_char('C') << std::endl;
std::cout << "With Force bonus +5: " << decode_char('C', 5) << std::endl;
std::cout << "Yoda message sum of 'ABC': " << decode_message("ABC") << std::endl;
std::cout << "Yoda shifted message: " << yoda_shift("Hello me Obi-Wan") << std::endl;
std::cout << "Yoda decoded message: " << yoda_decode(yoda_shift("Hello me Obi-Wan")) << std::endl;
return 0;
}