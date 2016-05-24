//
//  main.cpp
//  MaxRangeSum
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/186/

#include <iostream>
#include <vector>

void parser(std::string input){
    int days = 0;
    std::string temp;
    std::vector<int> vec;
    int index = 0;
    for (; index<input.length(); index++) {
        if (input[index] == ';') {
            break;
        }
        temp+=input[index];
    }
    days =atoi(temp.c_str());
    temp = "";
    for (index++; index<input.length(); index++) {
        if (input[index] ==' ') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        temp+=input[index];
    }
    vec.push_back(atoi(temp.c_str()));
    int max = 0;
    for (index = 0;index<vec.size()-days+1;index++) {
//        std::cout << vec[index] << " ";
        int sum = 0;
        for (int i = index; i < days+index; i++) {
            sum+=vec[i];
//            std::cout << vec[i] << " "<<i << "   ";
        }
//        std::cout << std::endl;
        if (sum>max) {
            max = sum;
        }
    }
    std::cout << max <<"\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("5;7 -3 -10 4 2 8 -2 4 -5 -2");
    parser("6;-4 3 -10 5 3 -7 -3 7 -6 3");
    parser("3;-7 0 -45 34 -24 7");
    return 0;
}
