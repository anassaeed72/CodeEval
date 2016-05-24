//
//  main.cpp
//  StringRotation
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/76/

#include <iostream>

void check(std::string one, std::string two){
    if (one.length()!= two.length()) {
        std::cout <<"False\n";
        return;
    }
    for (int i = 0;i < one.length();i++){
        if (one[i] == two[0]) {
            int temp = i;
            bool condition = true;
            for (int j = 0; j < two.length(); j++) {
//                std::cout << two[j] << " " << one[temp] <<"\n";
                if (two[j] != one[temp]) {
                    condition = false;
                    break;
                }
                temp = ++temp%one.length();
            }
            if (condition) {
                std::cout <<"True\n";
                return;
            }
        }
    }
    std::cout <<"False\n";
}
void parser(std::string line){
    std::string one,two;
    bool which = true;
    for ( auto x: line){
        if (x ==',') {
            which = false;
            continue;
        }
        if (which) {
            one+=x;
        } else {
            two+=x;
        }
    }
    check(one, two);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("Hello,lloHa");
    parser("Basefont,tBasefon");
    return 0;
}
