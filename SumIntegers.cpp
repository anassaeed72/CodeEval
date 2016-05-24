//
//  main.cpp
//  SumIntegers
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
int sum(std::vector<std::string> input){
    int totalValue = 0;
    for ( auto x: input){
        totalValue+=atoi(x.c_str());
    }
    return totalValue;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
