//
//  main.cpp
//  MultiplyLists
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/113/

#include <iostream>
#include <vector>
void formatter(std::string input){
    bool first = true;
    std::vector<int> one,two;
    std::string temp;
    for (auto x: input){
        if (x == ' ') {
            if (first) {
                one.push_back(atoi(temp.c_str()));
            } else {
                two.push_back(atoi(temp.c_str()));
            }
            temp = "";
            continue;
        }
        if (x == '|') {
            first =false;
            continue;
        }
        temp+=x;
    }
    two.push_back(atoi(temp.c_str()));
    int index = 1;
    for ( auto x: one)
        std::cout << x* two[index++] << " ";
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    formatter("9 0 6 | 15 14 9");
    return 0;
}
