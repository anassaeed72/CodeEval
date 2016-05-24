//
//  main.cpp
//  SumPrimeNumbers
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
bool isPrime(int input){
    for ( int i = 2;i < input/2 +1;i++){
        if (input%i==0) {
            return false;
        }
    }
    return true;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int totalDone = 0;
    int last = 1;
    long sum = 0;
    while (totalDone < 1000) {
        int test = last+1;
        while (isPrime(test) == false) {
            test++;
        }
        std::cout <<"Current is " + std::to_string(test) << "\n";
        sum+=test;
        last = test;
        totalDone++;
    }
    std::cout << sum;
    return 0;
}
