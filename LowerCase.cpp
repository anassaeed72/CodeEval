//
//  main.cpp
//  LowerCase
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
std::string formatter(std::string input){
    std::string output;
    for ( auto x : input){
        
        if ( x>= 97 && x <= 122 )
            output+=x;
         else if (x>=65 && x<=90)
            output+= (x+32);
         else
            output+=x;
    }
    return output;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
