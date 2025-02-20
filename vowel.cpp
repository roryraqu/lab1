#include <iostream>
#include <string>

using namespace std;


int main(){
    int count = 0;
    string Gl_Alpha = "aeiouy";
    string String;
    getline(cin, String);
    
    
    for(int i = 0; Gl_Alpha[i] != '\0'; i++){
        for (int j = 0; String[j] != '\0'; j++){
            
            if(Gl_Alpha[i] == tolower(String[j])) count+=1;
            
            
        }
    }
    
    cout << count << endl;
}


