//
//  main.cpp
//  PascalsTriangle
//
//  Created by Anas Saeed on 21/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/66/

#include <iostream>
#include <vector>
void generateTriangle(std::string input){
    int limit = atoi(input.c_str());
    if (limit == 1) {
        std::cout <<"1\n";
        return;
    } else if (limit == 2) {
        std::cout <<"1 1 1\n";
        return;
    }
    
    std::vector<std::vector<int>> vec;
    std::vector<int> temp = {1};
    vec.push_back(temp);
    temp = {1,1};
    vec.push_back(temp);
    int length = 3;
    for (int i = 2; i < limit; i++) {
        temp = {1};
        for (int j = 1; j<length -1; j++) {
            temp.push_back((vec[i-1][j-1]+vec[i-1][j]));
        }
        temp.push_back(1);
        length++;
        vec.push_back(temp);
    }
    
    for (int i = 0;i<vec.size() -1;i++){
        for ( int j = 0;j<vec[i].size();j++){
            std::cout << vec[i][j] << " ";
        }
    }
    for (int i = 0; i < vec[vec.size()-1].size(); i++) {
        std::cout << vec[vec.size()-1][i]<<" ";
    }
//    std::vector<int> vec1 = vec[vec.size()-1];
    std::cout <<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    generateTriangle("7");
    return 0;
}

/*  6 19 2 3 14 9 10 5 12 16 17 15 8 4 20 7 18 13 1 11 */
