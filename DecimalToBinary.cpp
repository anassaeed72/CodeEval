//
//  main.cpp
//  DecimalToBinary
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/27/

#include <iostream>
#include <iomanip>
void convertor(std::string input){
    std::string result = "";
    int number = atoi(input.c_str());
    if (input =="0") {
        std::cout <<"0\n";
        return;
    }
    while (number>0) {
        result+=std::to_string(number%2);
        number/=2;
    }
    for ( int i = result.length()-1;i>-1;i--){
        std::cout << result[i];
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    convertor("67");
    convertor("100");
//    int temp = 10;
//    std::cout << std::setbase(2) << temp;
//    std::cout << temp;
    return 0;
}
