//
//  main.cpp
//  MinimumCoins
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/74/

#include <iostream>
void parser(std::string input){
    int limit = atoi(input.c_str());
    int count = 0;
    while (limit>4) {
        limit-=5;
        count++;
    }
    while (limit>2) {
        limit-=3;
        count++;
    }
    while (limit>0) {
        limit-=1;
        count++;
    }
    std::cout << count << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("1");
    return 0;
}
