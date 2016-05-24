//
//  main.cpp
//  RollerCoaster
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
// https://www.codeeval.com/open_challenges/156/

#include <iostream>
std::string formatter(std::string input){
    bool capital = true;
    std::string output;
    for (auto x: input){
        if ((x >=65 && x<=90)) {
            if (capital){
                output+=x;
                capital = false;
            } else {
                output+=(x+32);
                capital = true;
            }
        }
        else if ( x>= 97 &&x <=122){
            if (capital) {
                output+=(x-32);
                capital = false;
            } else {
                output+=x;
                capital = true;
            }
        } else {
            output+=x;
        }
        
    }
    return output;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" <<formatter("Whether 'tis nobler in the mind to suffer.");
    return 0;
}
