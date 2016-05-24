//
//  main.cpp
//  TheMinistryOfTruth
//
//  Created by Anas Saeed on 25/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
void convertor(std::string input, std::string one){
    std::string result = "";
    int index = 0;
    for ( int i = 0;i < input.length();i++){
        if (index == one.length()) {
            if (input[i] ==  ' ') {
                result+=" ";
            } else {
                result+="_";
            }
            continue;
        }
        if (input[i] == one[index]) {
            index++;
            result+=input[i];
        } else {
            result+="_";
        }
    }
    if (index != one.length()) {
        std::cout <<"I cannot fix history\n";
    } else {
        std::cout << result <<"\n";
    }
}
void parser(std::string input){
    std::string one,temp;
    for ( auto x: input){
        if (x ==';') {
            one = temp;
            temp = "";
            continue;
        }
        temp+=x;
    }
    convertor(one,temp);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    parser("Higher meaning;Hi mean");
    parser("this is impossible;im possible");
    parser("twenty   two minutes;two minutes");
    parser("Higher meaning;e");
    return 0;
}
