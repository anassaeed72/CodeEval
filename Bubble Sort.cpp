//
//  main.cpp
//  Bubble Sort
//
//  Created by Anas Saeed on 27/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/158/

#include <iostream>
#include <vector>
void swapper(std::vector<int>&vec, int one, int two){
    int temp = vec[one];
    vec[one]  = vec[two];
    vec[two] = temp;
}
void bubbleSort(std::vector<int> vec, int limit){
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < vec.size()-1; j++) {
            if (vec[j] > vec[j+1]) {
                swapper(vec, j, j+1);
            }
        }
    }
    
    for ( auto x: vec)
        std::cout << x <<" ";
    
    std::cout <<"\n";
}
void parser(std::string input){
    std::string temp;
    std::vector<int> vec;
    int limit = 0;
    int index = 0;
    for (;index < input.length();index++){
        if (input[index] == '|') {
            break;
        }
        if (input[index] == ' ' && input[index+1] != '|') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        temp+=input[index];
    }
    vec.push_back(atoi(temp.c_str()));
    temp = "";
    for (index++; index<input.length(); index++) {
        temp +=input[index];
    }
    limit = atoi(temp.c_str());
//    std::cout << limit;
    bubbleSort(vec, limit);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("36 47 78 28 20 79 87 16 8 45 72 69 81 66 60 8 3 86 90 90 | 1");
        return 0;
}
