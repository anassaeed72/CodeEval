//
//  main.cpp
//  NumberOfOnes
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/16/

#include <iostream>

void bitCounter(std::string input){
    if (input =="0") {
        std::cout <<0<<"\n";
        return;
    }
    int number = atoi(input.c_str());
    int count = 0;
    while (number>0) {
        if (number%2 ==1) {
            count++;
        }
        number/=2;
    }
    std::cout << count <<"\n";
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    bitCounter("56");
    return 0;
}
