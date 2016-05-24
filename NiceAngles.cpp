//
//  main.cpp
//  NiceAngles
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/160/

#include <iostream>
#include <iomanip>
void formatter(int input){
    std::string temp  = std::to_string(input);
    if (temp.length() == 2)
         std::cout << input;
    else if ( temp.length() == 1 )
        std::cout << "0" << input;
    else
        std::cout << "00";
}
void convertAngles(std::string input){
    double value = std::stod(input);
    std::cout << int(value) <<".";
    value -=int(value);
    value*=60;
    formatter(int(value));
    std::cout << "'";
    value -=int(value);
    value*=60;
    formatter(int(value));
    std::cout <<char(34) << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    convertAngles("0.001");
    return 0;
}
