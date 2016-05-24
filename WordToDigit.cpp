//
//  main.cpp
//  WordToDigit
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/104/

#include <iostream>
#include <vector>
void formatter(std::string input){
    std::vector<std::string> dic = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    std::string temp;
    for ( auto x: input){
        if (x == ';') {
            for (int i = 0; i < 10; i++) {
                if (temp == dic[i]) {
                    std::cout << i;
                }
            }
            temp = "";
            continue;
        }
        temp+=x;
    }
    for (int i = 0; i < 10; i++) {
        if (temp == dic[i]) {
            std::cout << i;
            break;
        }
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    formatter("zero;two;five;seven;eight;four");
    return 0;
}
