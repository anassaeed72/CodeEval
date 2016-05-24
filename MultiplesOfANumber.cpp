//
//  main.cpp
//  MultiplesOfANumber
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::vector<int> powers = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,272144,524288,1048576};
int isGreater(int one, int two){
    while (one > two) {
        two = two*2;
    }
    return two;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::string line = "1492,8";
    int one,two;
    std::string temp;
    for (auto x: line){
        if (x ==','){
            one = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp+= x;
    }
    two = atoi(temp.c_str());
    std::cout << isGreater(1469, 8) << "\n";
    std::cout << isGreater(2205, 512) << "\n";
    std::cout << isGreater(899, 32) << "\n";
    std::cout << isGreater(384, 4) << "\n";
    std::cout << isGreater(1972, 16) << "\n";
    std::cout << isGreater(1063, 128) << "\n";
    std::cout << isGreater(2091, 1024) << "\n";
    std::cout << isGreater(1054, 256) << "\n";
    std::cout << isGreater(1777, 2) << "\n";
    std::cout << isGreater(1801, 64) << "\n";
    return 0;
}
/*
 1901,8
 619,512
 350,128
 604,64
 744,16
 192,2
 1443,1024
 612,256
 677,4
 1931,32
 */
