//
//  main.cpp
//  ReverseGroups
//
//  Created by Anas Saeed on 21/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/71/

#include <iostream>
#include <vector>

std::vector<std::string> vectorReverser(std::vector<std::string> input){
    std::vector<std::string> output;
    for( int i = input.size() -1;i>-1;i--)
        output.push_back(input[i]);
    return output;
}

void groupReverser(std::vector<std::string> vec, std::string l){
    int group = atoi(l.c_str());
    for (int i = 0; i < vec.size() -(vec.size()%group); i = i+group) {
        std::vector<std::string> temp;
        for (int j = i; j<(i+group); j++) {
            temp.push_back(vec[j]);
        }
        temp = vectorReverser(temp);
        int count = 0;
        for (int j =i; j<(i+group); j++) {
            vec[j] = temp[count++];
        }
    }
    for (int i = 0;i < vec.size()-1;i++)
        std::cout << vec[i] << ",";
    std::cout << vec[vec.size()-1];
    std::cout <<"\n";
}
void parser(std::string input){
    std::string temp = "";
    std::vector<std::string> vec;
    for ( auto x: input){
        if (x ==',' || x ==';') {
            vec.push_back(temp);
            temp = "";
            continue;
        }
        temp+=x;
    }
    groupReverser(vec, temp);
}

int main(int argc, const char * argv[]) {

    parser("1,2,3,4,5;2");
    parser("1,2,3,4,5;3");
    std::cout << "test";
    return 0;
}
