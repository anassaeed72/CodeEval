//
//  main.cpp
//  PredictTheNumber
//
//  Created by Anas Saeed on 21/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/125/

#include <iostream>
std::string transformer(std::string input){
    std::string output;
    for ( auto x: input){
        if (x =='0') {
            output+='1';
        } else if (x =='1'){
            output+='2';
        } else {
            output+='0';
        }
    }
    return output;
}
void atposition(std::string input){
    int index = atoi(input.c_str());
    if (index == 0) {
        std::cout <<"0\n";
        return;
    }
    std::string data = "0";
    while (data.length()<index+1) {
        data  = transformer(data);
        index-=transformer(data).length();
    }
    std::cout << data[index] <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    atposition("25684");
    return 0;
}
