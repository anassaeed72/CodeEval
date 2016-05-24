//
//  main.cpp
//  RightMostOccurance
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/31/

#include <iostream>

void printOccurance(std::string input,char which){
    for (int i = input.length(); i >=0; i--) {
        if (input[i] == which) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << "-1\n";
}
void formatter(std::string line){
    std::string string;
    for (int i = 0; i < line.length()-2; i++) {
        string+=line[i];
    }
    char which = line[line.length()-1];
    printOccurance(string, which);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    formatter("Hello World,r");
    return 0;
}
