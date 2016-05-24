//
//  main.cpp
//  TheMajorElement
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/132/

#include <iostream>
void parser(std::string input){
    int length = 0;
    int array[101];
    std::string temp;
    for ( int i = 0;i < 101;i++) {
        array[i] = 0;
    }
    for ( auto x: input){
        if (x ==',') {
            length++;
            array[atoi(temp.c_str())]++;
//            std::cout << temp << " ";
            temp = "";
            continue;
        }
        temp+=x;
    }
    length++;
    array[atoi(temp.c_str())]++;
    length = length/2;
    for ( int i = 0;i < 101;i++){
        if (array[i] >length) {
            std::cout << i <<"\n";
            return;
        }
//        std::cout << i << " " << array[i] << "\n";
    }
    std::cout <<"None\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("92,19,19,76,19,21,19,85,19,19,19,94,19,19,22,67,83,19,19,54,59,1,19,19");
    parser("92,11,30,92,1,11,92,38,92,92,43,92,92,51,92,36,97,92,92,92,43,22,84,92,92");
    return 0;
}
