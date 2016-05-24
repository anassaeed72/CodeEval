//
//  main.cpp
//  Unique
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
void uniqueMaker(std::vector<std::string> vec){
   
      vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    for ( int i = 0;i < vec.size() -1;i++){
        std::cout << vec[i] << ",";
    }
    std::cout << vec[vec.size()-1];
}
void formatter(std::string line){
    std::string temp;
    std::vector<std::string> input;
    for ( auto x: line){
        if (x == ',') {
            input.push_back(temp);
            temp = "";
            continue;
        }
        temp+=x;
    }
    input.push_back(temp);
    uniqueMaker(input);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    formatter("1,1,1,2,2,3,3,4,4");
    return 0;
}
