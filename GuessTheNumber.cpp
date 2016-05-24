//
//  main.cpp
//  GuessTheNumber
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/170/

#include <iostream>
#include <vector>
#include <cmath>
int midpoint(int upperBound, int lowerBound){
    double temp = upperBound-lowerBound;
    temp = ceil(temp/2);
    return temp+lowerBound;
}
void numberFinder(int limit,std::vector<bool> vec){
    int lowerBound = 0;
    int upperBound = limit;
    int result = midpoint(upperBound, lowerBound);
    
    for ( auto x: vec){
        if (x == false) {
            upperBound = result-1;
            result = midpoint(upperBound, lowerBound);
        } else {
            lowerBound = result+1;
            result = midpoint(upperBound,lowerBound);
//            upperBound =result;
        }

    }
    std::cout << result <<"\n";
}

void parser(std::string input){
    std::vector<bool> vec;
    int limit = 0;
    int index =0;
    std::string temp;
    for (;index< input.length();index++){
        if (input[index] == ' ') {
            limit = atoi(temp.c_str());
            temp = "";
            break;
        }
        temp+=input[index];
    }
    for (index++; index<input.length();) {
        if (input[index] == 'L') {
            index = index+6;
            vec.push_back(false);
            continue;
        }
        if (input[index] == 'H') {
            index+=7;
            vec.push_back(true);
            continue;
        }
        break;
    }
    numberFinder(limit, vec);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("100 Lower Lower Higher Lower Lower Lower Yay!");
    parser("948 Higher Lower Yay!");
    parser("9 Higher Lower Yay!");
//    std::cout << midpoint(9,6);
    return 0;
}
