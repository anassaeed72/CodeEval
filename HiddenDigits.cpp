//
//  main.cpp
//  HiddenDigits
//
//  Created by Anas Saeed on 19/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
void formatter(std::string input){
    bool none = true;
    for (auto x: input){
        if (x >=48 && x<= 57) {
            std::cout <<x;
            none = false;
            continue;
        }
        if (x >= 97 && x<= 106) {
            char temp = x-49;
            std::cout << temp;
            none = false;
        }
    }
    if (none) {
        std::cout << "NONE";
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    formatter("abcdefghik");
    formatter("Xa,}A#5N}{xOBwYBHIlH,#W");
    formatter("(ABW>'yy^'M{X-K}q,");
    formatter("6240488");
    return 0;
}
