//
//  main.cpp
//  CapitalizeWords
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/93/

#include <iostream>

void capitalizeWords(std::string input){
    bool capitalize = true;
    for ( auto x: input){
        if (capitalize){
            if (x >96 && x<123) {
                std::cout << char(x-32);
            } else {
                std::cout << x;
            }
            capitalize = false;
            continue;
        }
        if (x == ' ') {
            capitalize = true;
        }
        std::cout << x;
    }
    std::cout << std::endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    capitalizeWords("Hello world 1");
    return 0;
}
