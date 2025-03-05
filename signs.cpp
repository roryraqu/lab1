#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int isNotSign(char String1);

int main(){
    string String1, String2;
    getline(cin, String1);
    for(int i = 0; String1[i] != '\0'; i++){
        if(isNotSign(String1[i])){
            String2 += String1[i];
        }
    }
    cout << String2 << endl;
}

int isNotSign(char String1){ //функция знак ли
    return ((String1 >= 65 && String1 <= 90) || (String1 >= 97 && String1 <= 122) || (String1 >= 48 && String1 <= 57)) || String1 == ' ';
}
