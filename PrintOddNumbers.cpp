//
//  main.cpp
//  PrintOddNumbers
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    for ( int i = 1;i < 100;i++){
        if (i%2 == 1) {
            std::cout << i << "\n";
        }
    }
    return 0;
}
