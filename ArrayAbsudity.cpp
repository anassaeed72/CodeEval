//
//  main.cpp
//  ArrayAbsudity
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/41/

#include <iostream>
#include <map>

void parser(std::string input){
    int number = 0;
    std::map<std::string, int> mymap;
    std::string temp;
    bool permission  = false;
    for ( auto x: input){
        if (x ==',') {
            if (mymap.find(temp) == mymap.end()) {
                mymap[temp] = 1;
            } else {
                std::cout << temp <<"\n";
                return;
            }
            temp = "";
            continue;
        }
        if (x ==';') {
            permission = true;
            continue;
        }
        
        if (permission) {
            temp+=x;
        }
    }
    if (mymap.find(temp) == mymap.end()) {
        mymap[temp] = 1;
    } else {
        std::cout << temp <<"\n";
    }
}
void parser1(std::string input){
    int total = 0;
    std::string temp;
    for ( auto x: input){
        if (x ==';') {
            total = atoi(temp.c_str());
            temp = "";
            break;
        }
        temp+=x;
    }
    int array[total];
    for ( auto &x:array)
        x = 0;
    bool permission = false;
    for ( auto x: input){
        if (x ==',') {
            int t = atoi(temp.c_str());
            if (array[t] == 0) {
                array[t] = 1;
            } else {
                std::cout << temp << "\n";
                return;
            }
            temp ="";
            continue;
        }
        if (x ==';') {
            permission = true;
            continue;
        }
        if (permission) {
            temp+=x;
        }
//        temp+=x;
    }
    int t = atoi(temp.c_str());
    if (array[t] == 0) {
        array[t] = 1;
    } else {
        std::cout << temp << "\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser1("5;0,1,2,3,0");
    parser1("20;0,1,10,3,2,4,5,7,6,8,11,9,15,12,13,4,16,18,17,14");
    return 0;
}
