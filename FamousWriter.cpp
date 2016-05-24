//
//  main.cpp
//  FamousWriter
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
// https://www.codeeval.com/open_challenges/97/

#include <iostream>
#include <vector>
void formatter(std::string input){
    std::string string;
    bool which = true;
    std::vector<int> vec;
    std::string temp;
    for ( int i = 0;i < input.length();i++){
        if ( input[i] == '|'){
            which = false;
            i++;
            continue;
        }
        if ( which )
            string+=input[i];
        if ( !which ) {
            if (input[i] == ' ') {
                vec.push_back(atoi(temp.c_str()));
                temp = "";
                continue;
            }
            temp += input[i];
        }
    }
   
    vec.push_back(atoi(temp.c_str()));
    temp = "";
    for ( auto x: vec){
        temp+=string[x -1];
    }
    std::cout << temp <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    formatter("osSE5Gu0Vi8WRq93UvkYZCjaOKeNJfTyH6tzDQbxFm4M1ndXIPh27wBA rLclpg| 3 35 27 62 51 27 46 57 26 10 46 63 57 45 15 43 53");
    return 0;
}
