//
//  main.cpp
//  Fibonacci
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
int nthFibonacci ( int limit){
    if ( limit == 0)
        return 0;
    if ( limit == 1)
        return 1;
    if ( limit == 2 )
        return 1;
    std::vector<int> fibonnaciSequence = {0,1};
    for (int i =1; i < limit ; i++) {
        fibonnaciSequence.push_back(fibonnaciSequence[i] + fibonnaciSequence[i-1]);
    }
    return fibonnaciSequence[fibonnaciSequence.size()-1];
}
int main(int argc, const char * argv[]) {
    // insert code here...
    for ( int i = 0; i < 46; i++){
        std::cout <<"index: " <<std::to_string(i) <<" "<< nthFibonacci(i) << "\n";
    }
    return 0;
}

/*
 0
 14
 13
 19
 11
 3
 8
 12
 17
 15
 2
 1
 4
 10
 6
 7
 16
 5
 9
 18*/
