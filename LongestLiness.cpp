//
//  main.cpp
//  LongestLiness
//
//  Created by Anas Saeed on 21/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
int limit = 0;
int insertions = 0;
std::vector<std::string> vec;
bool lengthSort(std::string one,std::string two){
    if (one.length()> two.length()) {
        return true;
    }
    return false;
}
void pushBack(std::string input){
    if (insertions<limit) {
        vec.push_back(input);
        insertions++;
        return;
    }
    if (input.length()< vec[limit-1].length()) {
        return;
    }
    vec.push_back(input);
    std::sort(vec.begin(), vec.end(), lengthSort);
    
}
void print(){
    for ( int i = 0;i < limit;i++)
        std::cout << vec[i] <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    limit = 2;
    pushBack("Hello World");
    pushBack("CodeEval");
    pushBack("Quick Fox");
    pushBack("A");
    pushBack("San Francisco");
    print();
    return 0;
}
