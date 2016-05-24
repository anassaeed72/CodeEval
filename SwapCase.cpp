//
//  main.cpp
//  SwapCase
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

void formatter(std::string input){
    for ( auto x: input){
        if (x>64 &&x < 91) {
            std::cout << char(x+32);
        } else if ( x> 96 && x<123){
            std::cout << char(x-32);
        } else {
            std::cout << x;
        }
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    formatter("Hello world!");
    return 0;
}
