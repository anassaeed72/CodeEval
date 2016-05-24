//
//  main.cpp
//  MultiplicationTables
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::string formatter(int input){
    std::string number = std::to_string(input);
    if (number.length() == 1){
        number = "   "+number;
    } else if (number.length() == 2){
        number = "  "+number;
    } else if (number.length() == 3){
        number = ' ' + number;
    }
    return number;
}
std::vector<std::string> row(int input){
    std::vector<std::string> output;
    for ( int i = 1; i < 13;i++){
        std::string result = std::to_string(input*i);
        if ( i == 1){
            output.push_back(result);
        } else {
            output.push_back(formatter(input*i));
        }
        
    }
    return output;
}
void printVector(std::vector<std::string> input){
    for ( auto x: input){
        std::cout << x;
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << formatter(1121);
    for (int i = 1;i<13;i++){
        std::vector<std::string> result = row(i);
        printVector(result);
    }
    return 0;
}
