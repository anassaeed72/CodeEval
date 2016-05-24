//
//  main.cpp
//  Locks
//
//  Created by Anas Saeed on 27/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/153/

#include <iostream>
void finder(std::string input){
    int limit = 0;
    int iterations = 0;
    std::string temp;
    for ( auto x: input){
        if (x == ' ') {
            limit = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp+=x;
    }
    iterations = atoi(temp.c_str());
    bool array[limit];
    
    int unlocked = limit;
    for (auto &x: array)
        x=  false;
    iterations--;
    for (int i = 0; i < iterations; i++) {
        for ( int j = 1;j < limit;j+=2){
            if (array[j] == false) {
                unlocked--;
                array[j] = true;
            }
        }
        for (int j = 2; j < limit; j+=3) {
            if (array[j]) {
                unlocked++;
                array[j] = false;
            } else {
                unlocked --;
                array[j] = true;
            }
        }
    }
    if (array[limit-1] == false) {
        unlocked--;
    } else{
        unlocked++;
    }
    std::cout << unlocked <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    finder("3 1");
    finder("100 100");
    return 0;
}
