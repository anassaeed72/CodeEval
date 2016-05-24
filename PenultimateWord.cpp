//
//  main.cpp
//  PenultimateWord
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/92/

#include <iostream>

void parser(std::string input){
    bool check = true;
    for ( int i = input.length()-1;i>-1;i--){
        if (input[i] == ' ' && check == true) {
            check = false;
            continue;
        }
        if (input[i] ==' '&&check == false) {
            for (int j = i+1; j < input.length(); j++) {
                if (input[j] == ' ') {
                    std::cout <<"\n";
                    return;
                }
                std::cout << input[j];
            }
            break;
        }
    }
    for ( auto x: input){
        if (x == ' ') {
            std::cout <<"\n";
            return;
        }
        std::cout << x;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("some line with text");
    parser("another line");
    return 0;
}
