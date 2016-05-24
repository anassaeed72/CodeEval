//
//  main.cpp
//  LowestUniqueNumber
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/103/

#include <iostream>
#include <vector>
#include <algorithm>
class Number{
public:
    int value;
    int index;
};
bool sortCond(Number one, Number two){
    if (one.value>two.value) {
        return false;
    }
    return true;
}
void parser(std::string input){
    int index = 1;
    std::string temp;
    std::vector<Number> vec;
    std::vector<int> numbers;
    for ( auto x: input){
        if (x == ' ') {
            Number num;
            num.index = index++;
            num.value = atoi(temp.c_str());
            vec.push_back(num);
            temp = "";
            continue;
        }
        temp+=x;
    }
    Number num;
    num.index = index++;
    num.value = atoi(temp.c_str());
    vec.push_back(num);
    std::sort(vec.begin(),vec.end(), sortCond);
    for ( int i = 0;i < vec.size()-1;i++){
        if (vec[i].value == vec[i+1].value) {
            for (int j =i; i < vec.size(); j++) {
                if (vec[j].value!=vec[j+1].value) {
                    break;
                }
                i++;
            }
        } else {
            std::cout << vec[i].index <<"\n";
            return;
        }
    }
    if (vec[vec.size()-1].value != vec[vec.size()-2].value) {
        std::cout << vec[vec.size()-1].index <<"\n";
    } else {
        std::cout << "0\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("3 3 9 1 6 5 8 1 5 3");
    parser("9 2 9 9 1 8 8 8 2 1 1");
    return 0;
}
