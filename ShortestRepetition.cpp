//
//  main.cpp
//  ShortestRepetition
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/107/

#include <iostream>

bool checkSubstring(std::string one, std::string two){
    for (int i = 0; i < one.length(); i = i+two.length()) {
        for (int j = 0; j < two.length(); j++) {
            if (one[i+j] != two[j]) {
                return false;
            }
        }
    }
    return true;
}
void parser(std::string input){
    int array[26];
    for ( auto &x:array)
        x = 0;
    bool found = false;
    int size = 1;
    std::string guess(1,input[0]);
    int iterations = 0;
    while (found == false && size < input.length()) {
        if (guess[0] == input[guess.length()]) {
            bool result = checkSubstring(input, guess);
            if (result) {
                std::cout << guess.length()  <<"\n";
                found = true;
                return;
            }else{
                guess+=input[size++];
            }
        } else {
            while (input[size++] != guess[0] && size<input.length()) {
                guess+=input[size-1];
            }
        }
    }
    std::cout << input.length() <<"\n";
}

int main(int argc, const char * argv[]) {
//    parser("abcabcabcabc");
//    parser("bcbcbcbcbcbcbcbcbcbcbcbcbcbc");
    parser("ddddA");
//    parser("adcdefg");
//    parser("lmnopqrstulmnopqrstu");
    return 0;
}
