//
//  main.cpp
//  FirstNonRepeatedCharacter
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/12/

#include <iostream>
#include <vector>
void parser(std::string input){
    std::vector<char> vec;
    int array[26];
    for ( auto &x:array)
        x = 0;

    for ( auto x : input){
        
        if (array[(x-'a')]== 0) {
            vec.push_back(x);
        }
        array[(x-'a')]++;
    }
    
    for ( auto x: vec){
        if (array[(x-'a')] == 1) {
            std::cout <<x <<"\n";
            return;
        }
    }
    std::cout <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("yellow");
    parser("yy");
    return 0;
}
