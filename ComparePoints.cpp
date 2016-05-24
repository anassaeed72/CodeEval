//
//  main.cpp
//  ComparePoints
//
//  Created by Anas Saeed on 23/05/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//https://www.codeeval.com/open_challenges/192/

#include <iostream>

void check (int one, int two, int three, int four){
    if (one == three && two < four) {
        std::cout <<"N";
    } else if (one < three && two < four){
        std::cout <<"NE";
    } else if (one < three && two == four){
        std::cout <<"E";
    } else if (one < three && two  > four){
        std::cout <<"SE";
    } else if (one == three && two > four){
        std::cout <<"S";
    } else if (one > three && two > four){
        std::cout << "SW";
    } else if (one > three && two == four) {
        std::cout << "W";
    } else if (one > three && two < four){
        std::cout <<"NW";
    } else if (one == three && two == four){
        std::cout <<"here";
    }
    std::cout <<"\n";
}
void parser(std::string input){
    int one,two,three,four;
    std::string temp;
    int count = 0;
    for ( auto x: input){
//        std::cout << temp << " ";
        if (x == ' ') {
            if (count == 0) {
                one = atoi(temp.c_str());
            } else if (count == 1){
                two = atoi(temp.c_str());
            } else if (count == 2 ){
                three = atoi(temp.c_str());
            }
            count++;
            temp = "";
            continue;
        }
        temp+=x;
    }
    four = atoi(temp.c_str());
    check(one, two, three, four);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("12 13 12 13");
    parser("0 0 1 5");
    parser("0 1 0 5");
    return 0;
}
