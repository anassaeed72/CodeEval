//
//  main.cpp
//  DoubleSquares
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

int isPerfectSquare(int n){
    int x = int(sqrt(n));
    
    if (x*x==n)
        return 1;
    
    return 0;
}

int findWays(int x){
    int result;
    int count = 0;
    
    if (isPerfectSquare(x)){
        count++;
    }
    
    for (int i=1;i<sqrt(x);i++){
        result = i*i;
        if (result<x-result){
            if (isPerfectSquare(x-result)){
                count++;
            }
        }
    }
    
    return count;
}
int doubleSquare(unsigned int m) {
    int p = sqrt((double)m / 2.0);
    int total = 0;
    for (int i = 0; i <= p; i++) {
        double j = sqrt((double)m - i*i);
//        std::cout << i << " " << j << "\n";
        if (j - (int)j == 0.0) {  // might have precision issue,
            total++;  // can be resolved using |j-(int)j| == delta
        }
    }
    return total;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << doubleSquare(2147483647);
//    std::cout << findWays(25);
    return 0;
}
