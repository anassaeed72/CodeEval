//
//  main.cpp
//  LowestCommonAncestor
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/11/

#include <iostream>
#include <vector>
class Node{
public:
    int value;
    std::vector<int> vec;
    Node(int _value, std::vector<int> _vec){
        value = _value;
        vec = _vec;
    }
};
void find(int one, int two){
    std::vector<Node> vec;
    Node temp(30,{30});
    vec.push_back(temp);
    Node temp1(8,{8,30});
    vec.push_back(temp1);
    Node temp2(52,{52,30});
    vec.push_back(temp2);
    Node temp3(3,{3,8,30});
    vec.push_back(temp3);
    Node temp4(20,{20,8,30});
    vec.push_back(temp4);
    Node temp5(10,{10,20,8,30});
    vec.push_back(temp5);
    Node temp6(29,{29,20,8,30});
    vec.push_back(temp6);
    
    std::vector<int> onev, twov;
    bool done = false;
    for ( auto x : vec){
        if (x.value == one) {
            onev = x.vec;
            if (done == false) {
                done = true;
            }  else {
                break;
            }
        } else if ( x.value == two){
            twov = x.vec;
            if (done == false) {
                done = true;
            }  else {
                break;
            }
        }
    }
    //

    for ( auto x: onev){
        for ( auto xx: twov){
            if (x == xx) {
                std::cout << x <<"\n";
                return;
            }
        }
    }
}
void parser(std::string input){
    int one,two;
    std::string temp;
    for ( auto x: input){
        if (x == ' ') {
            one = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp+=x;
    }
    two = atoi(temp.c_str());
    find(one, two);
}
int main(int argc, const char * argv[]) {
//    parser("10 30");
    parser("20 29");
    return 0;
}
