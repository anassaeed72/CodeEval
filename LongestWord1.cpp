//
//  main.cpp
//  LongestWord1
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::string calculate(std::string input){
    std::vector<std::string> dictionary;
    std::string temp;
    for ( auto x: input){
        if (x ==' ') {
            dictionary.push_back(temp);
            temp = "";
            continue;
        }
        temp+=x;
    }
    dictionary.push_back(temp);
    int index = 0;
    int maxLength = 0;
    int maxIndex = 0;
    for ( auto x: dictionary){
        if ( x.length() > maxLength){
            maxLength = x.length();
            maxIndex = index;
        }
        index++;
    }
    return dictionary[maxIndex]+"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" << calculate("some line with text");
    return 0;
}
