//
//  main.cpp
//  CompressedSequence
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
void printer(std::vector<std::string> input){
    int count = 1;
    std::string last  =input[0];
    for ( int i = 1;i < input.size();i++){
        if (input[i] == last) {
            count++;
        } else {
            std::cout << count << " " << last<< " ";
            last = input[i];
            count = 1;
        }
    }
    std::cout << count << " " << input[input.size()-1] <<"\n";
}
void parser(std::string input){
    std::string temp;
    std::vector<std::string> vec;

    for ( auto x: input){
        if (x == ' ') {
            vec.push_back(temp);
            temp = "";
            continue;
        }
        temp+=x;
    }
    
    vec.push_back(temp);
    
        printer(vec);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    parser("7 7 7");
    parser("1 1 3 3 3 2 2 2 2 14 14 14 11 11 11 2");
    parser("40 40 40 40 29 29 29 29 29 29 29 29 57 57 92 92 92 92 92 86 86 86 86 86 86 86 86 86 86");
    return 0;
}
