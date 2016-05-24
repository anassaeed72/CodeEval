//
//  main.cpp
//  ReverseAndAdd
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/45/

#include <iostream>

bool isPalindrome(std::string input){
    for (int i = 0; i < input.length()/2; i++) {
        if (input[i] != input[input.length()-i-1]) {
            return false;
        }
    }
    return true;
}
std::string reverser(std::string input){
    std::string output;
    for (int i = input.length()-1; i>-1; i--) {
        output+=input[i];
    }
    return output;
}
void parser(std::string input){
    int count = 0;
    while (true) {
        int value = atoi(input.c_str()) + atoi(reverser(input).c_str());
        input = std::to_string(value);
        count++;
        if (isPalindrome(input)) {
            break;
        }
    }
    std::cout << count << " " << input <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("9339");
    return 0;
}
