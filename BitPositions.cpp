//
//  main.cpp
//  BitPositions
//
//  Created by Anas Saeed on 03/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <cmath>
int bit_val(int num, int pos){
    int power = pow(2, pos);
    int result = num%power;
    power = pow(2, pos -1);
    result/= power;
    return result;
}
void checker(int one, int index1, int index2){
    if (bit_val(one, index1) == bit_val(one, index2)) {
        std::cout <<"true\n";
    } else {
        std::cout <<"false\n";
    }
}
void parser(std::string input){
    bool which = true;
    int one, index1,index2;
    std::string temp;
    for ( auto x: input){
        if (x ==',') {
            if (which) {
                which = false;
                one =atoi(temp.c_str());
            } else {
                index1 = atoi(temp.c_str());
            }
            temp = "";
            continue;
        }
        temp+=x;
    }
    index2 =atoi(temp.c_str());
    checker(one, index1, index2);
}
int main(int argc, const char * argv[]) {
    parser("86,2,3");
    parser("125,1,2");
    return 0;
}
