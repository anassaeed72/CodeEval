//
//  main.cpp
//  CountingPrimes
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/63/

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
void countAndPrint(int lower,int upper){
    int count = 0;
    for (int i = lower;i <= upper;i++ ){
        if (isPrime(i)) {
            count++;
        }
    }
    std::cout << count <<"\n";
}
void parser(std::string line){
    int lower,upper;
    bool which = true;
    std::string temp;
    for ( auto x: line){
        if (x ==',') {
            which = false;
            lower = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp+=x;
    }
    upper = atoi(temp.c_str());
    countAndPrint(lower, upper);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("2,10");
    return 0;
}
