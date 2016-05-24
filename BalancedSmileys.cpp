//
//  main.cpp
//  BalancedSmileys
//
//  Created by Anas Saeed on 30/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/84/

#include <iostream>

void parser(std::string input){
    int minOpen = 0;
    int maxOpen = 0;
    if (input.length() == 0) {
        std::cout <<"YES\n";
        return;
    }
    for (int i = 0;i < input.length();i++){
        if (input[i] == '(') {
            maxOpen++;
            if (i == 0 || input[i-1] !=':') {
                minOpen++;
            }
        } else if (input[i] == ')'){
            minOpen = std::max(0, minOpen-1);
            if (i == 0 || input[i-1] !=':') {
                maxOpen--;
                if (maxOpen<0) {
                    break;
                }
            }
        }
    }
    if (maxOpen>=0 && minOpen==0) {
        std::cout <<"YES\n";
    } else{
        std::cout <<"NO\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    parser("D");
//    parser("()( ())");
    parser(":((");
    parser("i amdfasdfa  (:()");
    parser("(:)");
    parser(":):)");
    parser(")(");
    return 0;
}
