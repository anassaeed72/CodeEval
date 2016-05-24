//
//  main.cpp
//  JollyJumper
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/43/

#include <iostream>
#include <algorithm>
int abs(int a, int b ) {
    int result = a-b;
    if (result<0) {
        result = (-1*result);
    }
    return  result;
}

void parser(std::string line){
    std::string temp;
    int index = 0;
    int last = 0;
    for ( auto x: line){
        if (x ==' ') {
            break;
        }
        temp +=x;
    }
    int limit = atoi(temp.c_str()) -1;
    int array[atoi(temp.c_str())-1];
    for ( auto &x:array)
        x =0;
    for ( auto x: line){
        if (x == ' ') {
            if (index == 1) {
                last = atoi(temp.c_str());
                temp ="";
                index++;
                continue;
            }
            if (index == 2) {
                array[abs(last,atoi(temp.c_str()))-1]++;
//                std::cout << abs(last,atoi(temp.c_str()))-1 << " " << atoi(temp.c_str());
                last = atoi(temp.c_str());
            }
            if (index >1) {
                int resylt = abs(atoi(temp.c_str()),last);
                array[abs(atoi(temp.c_str()),last)-1]++;
                last = atoi(temp.c_str());
            }
            index++;
            temp = "";
            continue;
        }
        temp+=x;
    }
    array[abs(last,atoi(temp.c_str()))-1]++;
    std::sort(array, array+limit);
    if (array[0] == 0) {
        std::cout <<"Not jolly\n";
    } else {
        std::cout <<"Jolly\n";
    }
    
}
int main(int argc, const char * argv[]) {
    // insert code here...

    parser("4 1 2 3 4");
    parser("3 7 7 8");
    parser("9 8 9 7 10 6 12 17 24 38");
    return 0;
}
