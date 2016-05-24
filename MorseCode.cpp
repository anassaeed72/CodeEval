//
//  main.cpp
//  MorseCode
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/116/

#include <iostream>
void parser(std::string input){
    for ( int i = 0;i < input.length();i++){
      
        if (i+4<input.length()) {
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='-' && input[i+3] =='-' && input[i+4] =='-') {
                std::cout <<"0";
                i = i+4;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '-' && input[i+2] =='-' && input[i+3] =='-' && input[i+4] =='-') {
                std::cout <<"1";
                i = i+4;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='-' && input[i+3] =='-' && input[i+4] =='-') {
                std::cout <<"2";
                i = i+4;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='-' && input[i+4] =='-') {
                std::cout <<"3";
                i = i+4;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='.' && input[i+4] =='-') {
                std::cout <<"4";
                i = i+4;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='.' && input[i+4] =='.') {
                std::cout <<"5";
                i = i+4;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='.' && input[i+4] =='.') {
                std::cout <<"6";
                i = i+4;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='.' && input[i+3] =='.' && input[i+4] =='.') {
                std::cout <<"7";
                i = i+4;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='-' && input[i+3] =='.' && input[i+4] =='.') {
                std::cout <<"8";
                i = i+4;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='-' && input[i+3] =='-' && input[i+4] =='.') {
                std::cout <<"9";
                i = i+4;
                continue;
            }
        }
        
        if (i+3 < input.length()) {
            if (input[i] == '.' && input[i+1] == '-' && input[i+2] =='-' && input[i+3] =='.') {
                std::cout <<"P";
                i = i+3;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='.' && input[i+3] == '-') {
                std::cout <<"Q";
                i = i+3;
                continue;
            }
            
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='-') {
                std::cout <<"V";
                i = i+3;
                continue;
            }
            
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='-') {
                std::cout <<"X";
                i = i+3;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='-' && input[i+3] == '-') {
                std::cout <<"Y";
                i = i+3;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='.' && input[i+3] =='.') {
                std::cout <<"Z";
                i = i+3;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='.') {
                std::cout <<"B";
                i = i+3;
                continue;
            }
            if (input[i] =='-' && input[i+1] =='.' && input[i+2] =='-' && input[i+3] =='.') {
                std::cout  <<"C";
                i = i+3;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.' && input[i+3] =='.') {
                std::cout <<"H";
                i = i+3;
                continue;
            }
            if (input[i] =='.' && input[i+1] =='-' && input[i+2] =='-' && input[i+3] =='-') {
                std::cout <<"J";
                i = i+3;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '-' && input[i+2] =='.' && input[i+3] =='.') {
                std::cout <<"L";
                i = i+3;
                continue;
            }
            
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='-' && input[i+3] =='.') {
                std::cout <<"F";
                i = i+3;
                continue;
            }
        }
        
        
        if (i+2<input.length()) {
           
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='-') {
                std::cout <<"K";
                i = i+2;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='-') {
                std::cout <<"O";
                i = i+2;
                continue;
            }
            
            if (input[i] == '.' && input[i+1] == '-' && input[i+2] =='.') {
                std::cout <<"R";
                i = i+2;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='.') {
                std::cout <<"S";
                i = i+2;
                continue;
            }
            
            if (input[i] == '.' && input[i+1] == '.' && input[i+2] =='-') {
                std::cout <<"U";
                i = i+2;
                continue;
            }
            if (input[i] == '.' && input[i+1] == '-' && input[i+2] =='-') {
                std::cout <<"W";
                i = i+2;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '.' && input[i+2] =='.') {
                std::cout <<"D";
                i = i+2;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-' && input[i+2] =='.') {
                std::cout <<"G";
                i = i+2;
                continue;
            }

        }
       
        if (i+1<input.length()) {
            if (input[i] == '.' && input[i+1] =='-') {
                std::cout <<"A";
                i++;
                continue;
            }
            
            if (input[i] == '.' && input[i+1] == '.') {
                std::cout <<"I";
                i++;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '-') {
                std::cout <<"M";
                i++;
                continue;
            }
            if (input[i] == '-' && input[i+1] == '.') {
                std::cout <<"N";
                i++;
                continue;
            }
            if (input[i] == ' ' && input[i+1] ==' ') {
                std::cout <<" ";
                continue;
            }
        }
        
        
        
        if (input[i] == '-') {
            std::cout <<"T";
            continue;
        }
        if (input[i] == '.') {
            std::cout <<"E";
            continue;
        }
    }
    std::cout <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser(".- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --.. ----- .---- ..--- ...-- ....- ..... -.... --... ---.. ----.");
    parser("..-.");
    parser(".- ...- ..--- .-- .... .. . -.-. -..-  ....- .....");
    return 0;
}
