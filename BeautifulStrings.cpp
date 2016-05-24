//
//  main.cpp
//  BeautifulStrings
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
int value(std::string input ){
    int array[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for ( auto x: input){
        if (x >= 97 && x<= 122)
            array[x-97]++;
        if ( x >= 65 && x <=90)
            array[x-65]++;
    }
    std::sort(array, array+26);
    int sum = 0;
    int val = 26;
    for ( int i  = 25;i >-1;i--) {
        sum+=array[i]*val;
        val--;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" << value("Good luck in the Facebook Hacker Cup this year!");
    return 0;
}
