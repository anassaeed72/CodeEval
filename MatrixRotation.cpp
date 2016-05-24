//
//  main.cpp
//  MatrixRotation
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/178/

#include <iostream>
#include <math.h>
#include <vector>
void parser(std::string input){
    int total = 0;
    std::vector<std::string> vec;
    std::string temp;
    for ( auto x: input){
        if (x == ' ') {
            total++;
            vec.push_back(temp);
            temp = "";
        } else {
            temp+=x;
        }
    }
    total++;
    vec.push_back(temp);
    int rows = sqrt(total);
    int coulumns = rows;
    for (int i = 0; i<rows; i++) {
        int iterations = 0;
        for (int j = rows*coulumns-rows+i; iterations<rows; j = j-rows) {
            iterations++;
            std::cout <<vec[j]<<" ";
        }
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("a b c d");
    parser("a b c d e f g h i j k l m n o p");
    return 0;
}
