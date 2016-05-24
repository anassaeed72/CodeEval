//
//  main.cpp
//  SequenceDetection
//
//  Created by Anas Saeed on 27/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/5/

#include <iostream>
#include <vector>

void findSequence(std::vector<int> vec, int one, int two){
    std::cout << vec[one];
    int twoT = two;
    while (one < two -1 && two < vec.size()-1) {
        one++;
        twoT++;
        if (vec[one] == vec[twoT]) {
            std::cout <<" "<< vec[one];
        } else{
            std::cout << "\n";
            return;
        }
        }
    std::cout <<"\n";
}
int findItem(std::vector<int> vec, int index){
//    index++;
    int item = vec[index];
    for (int i =index +1; i<vec.size(); i++) {
        if (vec[i] == item) {
//            std::cout << item << " " << i ;
            findSequence(vec,index,i);
            return 1;
        }
    }
    return 0;
}
void myoperater(std::vector<int> vec){
    for ( int i = 0;i < vec.size()-1;i++){
        if (findItem(vec, i) == 1) {
            return;
        }
    }
    std::cout <<"NONE\n";
}
void parser(std::string input){
    std::vector<int> vec;
    std::string temp;
    for ( auto x: input){
        if (x == ' ') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        temp  +=x;
    }
    vec.push_back(atoi(temp.c_str()));
    
    myoperater(vec);
}

int main(int argc, const char * argv[]) {
    parser("2 3 4 5 6 7 8 9 6 7 0 9");
    parser("2 0 6 3 1 6 3 1 6 3 1");
    parser("3 4 8 0 11 9 7 2 5 6 10 1 49 49 49 49");
    parser("1 2 3 1 2 3 1 2 3");
    return 0;
}
