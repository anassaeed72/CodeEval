//
//  main.cpp
//  TelephoneWords
//
//  Created by Anas Saeed on 03/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/59/

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
std::string replacement(char input){
    if (input == '0') {
        return "0";
    }
    if (input =='1') {
        return "1";
    }
    if (input =='2') {
        return "abc";
    }
    if (input =='3') {
        return "def";
    } if (input =='4') {
        return "ghi";
    }
    if (input =='5') {
        return "jkl";
    }
    if (input =='6') {
        return "mno";
    }
    if (input =='7') {
        return "pqrs";
    }
    if (input =='8') {
        return "tuv";
    }
    if (input =='9') {
        return "wxyz";
    }
    return "";
}
void parser(std::string input){
    std::vector<std::string> vec;
    std::string one = replacement(input[0]);
    std::string two= replacement(input[01]);
    std::string three= replacement(input[02]);
    std::string four= replacement(input[03]);
    std::string five = replacement(input[04]);
    std::string six = replacement(input[05]);
    std::string seven = replacement(input[06]);
    
    for ( auto x: one){
        for ( auto xx: two){
            for ( auto  xxx: three){
                for ( auto xxxx: four){
                    for ( auto xxxxx: five){
                        for ( auto xxxxxx: six ){
                            for ( auto xxxxxxx: seven){
                                std::stringstream ss;
                                ss<< x <<xx << xxx << xxxx << xxxxx << xxxxxx << xxxxxxx;
                                std::string s;
                                ss >>s;
                                vec.push_back(s);
                            }
                        }
                    }
                }
            }
        }
    }
    std::sort(vec.begin(),vec.end());
    for ( int i = 0; i < vec.size()-1;i++){
        std::cout << vec[i] << ",";
    }
    std::cout << vec[vec.size()-1] <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    parser("4155230");
    std::stringstream ss;
    ss <<'a' <<'a';
    std::string s;
    ss >> s;
//    std::cout << s;
    return 0;
}
