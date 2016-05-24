//
//  main.cpp
//  PrimeNumbers
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/46/

#include <iostream>
bool isPrime(int input){
    if (input == 2) {
        return true;
    }
    if (input%2 ==0) {
        return false;
    }
    for ( int i = 3; i<input/2;i = i+2){
        if (input%i == 0) {
            return false;
        }
    }
    return true;
}
void printer(std::string input){
    int last = 2;
    bool per = false;
    for ( int i = 2;i < atoi(input.c_str());i++){
        if (isPrime(i)) {
            if (per == false) {
                per = true;
            } else {
                std::cout << last << ",";
            }
            last = i;
            
        }
        
    }
    std::cout <<last<< "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    printer("100");
    return 0;
}
