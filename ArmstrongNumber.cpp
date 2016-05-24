//
//  main.cpp
//  ArmstrongNumber
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <math.h>
std::string isArmstrong(std::string number){
    int length = number.length();
    int sum = 0;
    for ( auto x: number){
        sum+= pow(x-48, length);
    }
    if ( std::to_string(sum) == number)
        return "True\n";
    return "False\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    isArmstrong(153);
    return 0;
}
