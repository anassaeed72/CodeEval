//
//  main.cpp
//  HappyNumbers
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/39/

#include <iostream>
#include <vector>

void parser(std::string input){
    bool ongoing = true;
    std::vector<int> vec;
    while (ongoing) {
        int sum = 0;
        for ( auto x: input){
            sum+=(int) (x-'0')*(int)(x-'0');
        }
        if (sum == 1) {
            ongoing = false;
            std::cout <<"1\n";
            return;
        }
        for ( auto x: vec){
            if (x == sum) {
                ongoing = false;
                std::cout <<"0\n";
                return;
            }
        }
        vec.push_back(sum);
        input = std::to_string(sum);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("22");
    return 0;
}
