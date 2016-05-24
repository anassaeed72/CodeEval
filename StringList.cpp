//
//  main.cpp
//  StringList
//
//  Created by Anas Saeed on 30/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/38/

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
std::vector<std::string> oneTimer(std::vector<std::string> input, std::vector<char> chars){
    std::vector<std::string > output;
    if (input.size() == 0) {
        for ( auto x: chars){
            std::stringstream ss;
            ss << x;
            std::string s;
            ss >>s;
            output.push_back(s);
        }
        return output;
    }
    for ( auto x: chars){
        for  ( auto xx: input){
            output.push_back(x+ xx);
        }
    }
    return output;
}
void finder(std::vector<char> chars, int length){
    std::vector<std::string> result = {};
    for (int i = 0; i < length; i++) {
        result = oneTimer(result, chars);
    }
    std::sort(result.begin(), result.end());
    result.erase( unique( result.begin(), result.end() ), result.end() );
    if (result.size()>1) {
        std::cout << result[0] <<",";
        for (int i = 1;i < result.size()-1; i++) {
                std::cout << result[i] <<",";
        }
        std::cout << result[result.size()-1] <<"\n";
    } else {
        std::cout << result[0] <<"\n";
    }
    
}
void parser(std::string input){
    int length = 0;
    std::string temp;
    for ( auto x: input){
        if (x == ',') {
            length = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp  +=x;
    }
    
    std::vector<char> chars;
    for ( auto x: temp){
        chars.push_back(x);
//        std::cout << x << " ";
    }

    finder(chars, length);
//    std::cout << length;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("3,pop");
    return 0;
}
