//
//  main.cpp
//  LetterCasePercentageRatio
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/147/

#include <iostream>
#include <iomanip>
void calculateRatio(std::string input){
    float upper = 0,lower = 0;
    for( auto x: input){
        if ( x > 96) {
            lower = lower+1;
        } else {
            upper = upper+1;
        }
    }
    lower = 100*(lower/input.length());
    upper = 100*(upper/input.length());
    std::cout <<"lowercase: " <<std::fixed << std::setprecision(2) << lower <<" uppercase: " << upper <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    calculateRatio("AAbbCCDDEE");
    return 0;
}
