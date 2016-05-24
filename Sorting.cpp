//
//  main.cpp
//  Sorting
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
void printVector(std::vector<double> vec){
    for ( auto x : vec)
        std::cout<<std::setprecision(3) <<std::fixed <<x <<" ";
    std::cout << "\n";
}
std::vector<double> convert(std::string line){
    std::string one;
    std::vector<double> vec;
    for ( auto x: line){
        if ( x == ' '){
            vec.push_back(std::stod(one));
            one = "";
            continue;
        }
        one+=x;
    }
    vec.push_back(std::stod(one));
    return vec;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<double> resut = convert("-37 -3.263 40.079 27.999 65.213 -55.552");
    std::sort(resut.begin(), resut.end());
    printVector(resut);
    return 0;
}
