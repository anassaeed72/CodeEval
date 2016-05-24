//
//  main.cpp
//  MthToLastElement
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/10/

#include <iostream>

void parser(std::string input){
    std::string temp;
    int which = 0;
    int index =0;
    for (int i = input.length()-1; i>=0; i--) {
        if (input[i] == ' ') {
            for (int j = i+1; j<input.length(); j++) {
                temp+=input[j];
            }
            which = atoi(temp.c_str());
            index = i;
            break;
        }
    }
    index--;
    int count = 0;
    for (; index>-1; index--) {
        if (input[index] == ' ') {
            count++;
        }
        if (count == which) {
            for (int j = index+1; j < input.length(); j++) {
                if (input[j] == ' ') {
                    std::cout <<"\n";
                    return;
                }
                std::cout << input[j];
            }
        }
    }
//    std::cout << count;
    if (which>count+1) {
        return;
    }
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            std::cout <<"\n";
            return;
        }
        std::cout << input[i];
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("a b c d 5");
    return 0;
}
