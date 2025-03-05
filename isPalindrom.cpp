#include <iostream>
#include <string>
#include <algorithm>

std::string isPalindrom(std::string& string){
    std::string reverse_string;
    string.erase(std::remove(string.begin(), string.end(), ' '), string.end());
    for(int i = string.size()-1; i >= 0; --i){
        reverse_string += string[i];

    std::transform(string.begin(), string.end(), string.begin(), [](char c){return std::tolower(c);});
    string.erase(std::remove(string.begin(), string.end(), ' '), string.end());
    for(int i = string.size()-1; i >= 0; --i){
        reverse_string += std::tolower(string[i]);
    }
    return string == reverse_string? "yes" : "no";
}}

int main(){
    std::string string, result;
    std::getline(std::cin, string);

    result = isPalindrom(string);
    std::cout << result;
}