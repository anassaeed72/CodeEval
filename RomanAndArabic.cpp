//
//  main.cpp
//  RomanAndArabic
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/150/

#include <iostream>
int value(char input){
    if (input =='I') {
        return 1;
    }
    if (input == 'V') {
        return 5;
    }
    if (input == 'X') {
        return 10;
    }
    if (input == 'L') {
        return 50;
    }
    if (input == 'C') {
        return 100;
    }
    if (input == 'D') {
        return 500;
    }
    if (input =='M') {
        return 1000;
    }
    return 0;
}
void parser(std::string input){
    int sum = 0;
    int old = 9999999;
    int olds = 0;
    for (int i = 0; i < input.length(); i = i +2) {
        sum+=((int) input[i]-'0')*value(input[i+1]);
        if (value(input[i+1])>old) {
            sum-=2*olds;
        }
        olds =((int) input[i]-'0')*value(input[i+1]);
        old = value(input[i+1]);
    }
    std::cout<< sum <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("3M1D2C");
    parser("2I3I2X9V1X");
    parser("3X2I4X");
    return 0;
}
