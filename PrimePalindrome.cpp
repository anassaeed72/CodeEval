//
//  main.cpp
//  PrimePalindrome
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/3/

#include <iostream>
bool isPalindrome(std::string input){
    int length  = input.length();
    for (int i = 0; i < length/2; i++) {
        if (input[i] !=input[length -i -1])
            return false;
    }
    return true;
}
bool prime(int input){
    for (int i = 2; i<input/2; i++) {
        if (input%i == 0) {
            return false;
        }
    }
    return true;
}
void printPrimePalindrome(){
    int last = 0;
    for (int index = 2; index<1000;index++ ) {
        if (prime(index) == false) {
            continue;
        }
        if (isPalindrome(std::to_string(index)))
            last = index;
    }
    std::cout << last;
}
int main(int argc, const char * argv[]) {
    printPrimePalindrome();
    return 0;
}
