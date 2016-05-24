//
//  main.cpp
//  EvenOdd
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
bool check (int input){
    if ( input%2 == 0)
        return true;
    return false;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << check(701) <<"\n";
    return 0;
}
