//
//  main.cpp
//  Panagrams
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/37/

#include <iostream>
void checker(std::string input){
    int array[26];
    for ( auto &x: array){
            x = 0;
    }
    for ( auto x: input){
        if (x ==' ') {
            continue;
        }
        if (x <91) {
            x = x+32;
        }
        array[(x-'a')]++;
    }
    bool nullCheck = true;
    for ( int i = 0;i<26;i++){
        if (array[i] == 0) {
            nullCheck = false;
            std::cout << char(i+'a');
        }
        
    }
    if (nullCheck) {
        std::cout << "NULL";
    }
    std::cout <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    checker("A quick brown fox jumps over the lazy dog");
//    checker("A slow yellow fox crawls under the proactive dog");
    checker("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    checker("abcdefghijklmnopqrstuvwxyz");
    return 0;
}
