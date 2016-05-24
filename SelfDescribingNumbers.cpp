//
//  main.cpp
//  SelfDescribingNumbers
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
int timesOfOccurance(std::string input, int which){
    int count = 0;
    for ( auto x: input){
        if (x == (which+48)) {
            count++;
        }
    }
    return count;
}
void check(std::string input){
    int index = 0;
    for ( auto x: input){
//        std::cout << timesOfOccurance(input, index);
        if ((x-48) != timesOfOccurance(input, index)) {
            std::cout << "0\n";
            return;
        }
        index++;
    }
    std::cout << "1\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    check("22");
    return 0;
}
