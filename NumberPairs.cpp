//
//  main.cpp
//  NumberPairs
//
//  Created by Anas Saeed on 08/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/34/

#include <iostream>
#include <vector>
void checker(std::vector<int> vec, int number){
    std::vector<int> answer;
    int count = 0;
    bool done = false;
    for ( auto x: vec){
        if (done) {
            break;
        }
        for ( auto xx:vec){
            if (x+xx <number) {
                continue;
            }
            if (x +xx > number) {
                break;
            }
            if (answer.size()>0) {
                if (x == answer[answer.size()-1]) {
                    done = true;
                    break;
                }
            }
            answer.push_back(x);
            answer.push_back(xx);
        }
    }
    if (answer.size() == 0) {
        std::cout <<"NULL\n";
        return;
    }
    for ( int i = 0;i < answer.size()-2;i= i+2){
        std::cout << answer[i] << ',' << answer[i+1] <<";";
    }
    std::cout << answer[answer.size()-2] << ',' << answer[answer.size()-1] <<"\n";

}

void parser(std::string input){
    std::vector<int> vec;
    int number;
    std::string temp;
    for ( auto x: input){
        
        if (x ==',') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        if (x ==';') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        temp+=x;
    }
    number = atoi(temp.c_str());
    checker(vec, number);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("1,2,3,4,6;5");
    parser("2,4,5,6,9,11,15;20");
    parser("1,2,3,4;50");
    return 0;
}
