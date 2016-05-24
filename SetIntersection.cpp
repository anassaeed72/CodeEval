//
//  main.cpp
//  SetIntersection
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/30/

#include <iostream>
#include <vector>
void setintersection(std::vector<int> one, std::vector<int> two){
    int indexOne = 0,indexTwo = 0;
    int lengthOne = one.size(),lengthTwo = two.size();
    std::vector<int> output;
    while (indexOne<lengthOne && indexTwo<lengthTwo) {
        if (one[indexOne] < two[indexTwo])
            indexOne++;
         else if (two[indexTwo]<one[indexOne])
            indexTwo++;
        else{
            output.push_back(one[indexOne]);
            indexOne++;
            indexTwo++;
        }
    }
    if (output.size() >0) {
        for ( indexTwo = 0;indexTwo<output.size() -1;indexTwo++)
            std::cout << output[indexTwo] << ",";
        if (output.size() >= 1) {
            std::cout << output[indexTwo];
        }
    }
    std::cout << "\n";
}
void formatter(std::string line){
    std::vector<int> one;
    std::vector<int> two;
    bool oneTurn = true;
    std::string temp;
    for ( auto x: line){
        if (x == ',') {
            if (oneTurn) {
                one.push_back(atoi(temp.c_str()));
                temp = "";
                continue;
            } else{
                two.push_back(atoi(temp.c_str()));
                temp = "";
                continue;
            }
        }
        if (x == ';') {
            one.push_back(atoi(temp.c_str()));
            temp = "";
            oneTurn = false;
            continue;
        }
        temp+=x;
    }
    two.push_back(atoi(temp.c_str()));
    setintersection(one,two);
}
int main(int argc, const char * argv[]) {

    formatter("20,21,22;45,46,47");
    return 0;
}
