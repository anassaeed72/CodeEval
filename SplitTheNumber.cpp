//
//  main.cpp
//  SplitTheNumber
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/131/

#include <iostream>

void parser(std::string input){
    std::string number;
    bool  operation =false;
    std::string string;
    for( auto x: input){
        if (x ==' ') {
            number = string;
            string = "";
            continue;
        }
        if (x ==45) {
            operation = false;
        } else if ( x =='+') {
            operation = true;
        }
        
        string+=x;
    }
    long one =0 ,two = 0;
    char toFind;
    if (operation) {
        toFind = '+';
    } else{
        toFind = '-';
    }
    input = "";
    int ofset = 0;
    for (int i = 0;i < string.length();i++){
        if (string[i] == toFind) {
            one = atoi(input.c_str());
//            std::cout << input;
            input = "";
            ofset =1;
            continue;
        }
        input+=number[i-ofset];
    }
    two = atoi(input.c_str());
//    std::cout <<two;
    if (operation) {
        std::cout << (one+two) <<"\n";
    } else {
        std::cout << (one-two) <<"\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("3413289830 a-bcdefghij");
    parser("776 a+bc");
    parser("90602 a+bcde");
//    std::cout <<"-";
    return 0;
}
