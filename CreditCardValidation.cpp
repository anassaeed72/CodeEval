//
//  main.cpp
//  CreditCardValidation
//
//  Created by Anas Saeed on 21/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

void checker(std::string input){
    bool doubles = false;
    int sum = 0;
    for (int i = input.length()-1; i>-1; i--) {
        if (input[i] ==' ') {
            continue;
        }
        if (doubles) {
            doubles= false;
            char charTemp = input[i];
            int temp = (int) charTemp-'0';
            temp *=2;
            if (temp<10) {
                sum+=temp;
            } else {
                std::string stringtemp = std::to_string(temp);
                for ( auto x:stringtemp){
                    sum+=(int)x-'0';
                }
            }
        } else {
            doubles = true;
            char charTemp = input[i];
            int temp = (int) charTemp-'0';
            sum+=temp;
        }
    }
    if (sum%10 == 0) {
        std::cout <<"1\n";
    } else
        std::cout <<"0\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    checker("1556 9144 6285 339");
    checker("6011 5940 0319 9511");
    checker("5537 0213 6797 6815");
    checker("5574 8363 8022 9735");
    checker("3044 8507 9391 30");
    checker("6370 1675 9034 6211 774");
    return 0;
}
