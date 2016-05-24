//
//  main.cpp
//  RemoveCharacters
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/13/

#include <iostream>
#include <vector>
void parser(std::string input){
    std::string line,temp;
    std::vector<char> vec;
    bool permission = true;
    for ( auto x: input){
        if (x ==' ' && permission == false) {
            continue;
        }
        if (x ==',') {
            permission = false;
            continue;
        }
        if (permission) {
            line+=x;
        } else {
            vec.push_back(x);
        }
    }
//    std::cout << line
    permission = true;
    for ( auto x: line){
        permission = true;
        for ( auto xx:vec){
            if (x == xx) {
                permission = false;
                break;
            }
        }
        if (permission) {
            std::cout << x;
        }
    }
    std::cout <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("how are you, abc");
    return 0;
}
