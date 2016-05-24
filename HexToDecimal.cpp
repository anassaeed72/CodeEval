//
//  main.cpp
//  HexToDecimal
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
std::vector<char> chars = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
std::vector<int> values = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int convertOne(char input){
    int index = 0;
    for ( auto x: chars){
        if ( x == input)
            break;
        index++;
    }
    return values[index];
}
int hexToDecimal(std::string input){
    int output = 0;
    int power = 0;
    for ( int i = input.length() -1;i > -1;i--){
        output += convertOne(input[i])*pow(16, power);
        power++;
    }
    return output;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout <<hexToDecimal("9f");
    return 0;
}
