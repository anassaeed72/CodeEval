//
//  main.cpp
//  Valid Parantheses
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/68/

#include <iostream>
#include <stack>
void parser(std::string input){
    int one=0,two=0, three =0 ;
    std::stack<char> order;
    for ( auto x: input){
        if (x =='(') {
            one++;
            order.push(x);
        }
        else if (x =='{') {
            two++;
            order.push(x);
        }
        else if (x =='[') {
            three++;
            order.push(x);
        }
        if (order.empty() == true) {
            std::cout<<"false\n";
            return;
        }
        if (x ==')'){
            
            if (order.top()!='(') {
                std::cout <<"False\n";
                return;
            }
            if (one ==0) {
                std::cout <<"False\n";
                return;
            }
            order.pop();
            one--;
        } else if (x =='}'){
            if (order.top()!='{') {
                std::cout <<"False\n";
                return;
            }
            if (two ==0) {
                std::cout <<"False\n";
                return;
            }
            order.pop();
            two--;
        } else if (x ==']'){
            if (order.top()!='[') {
                std::cout <<"False\n";
                return;
            }
            if (three ==0) {
                std::cout <<"False\n";
                return;
            }
            order.pop();
            three--;
        }
    }
    std::cout <<    order.top();
    if (order.empty() == false) {
        std::cout<<"False\n";
        return;
    }
    if (one==0 && two == 0 && three == 0) {
        std::cout <<"True\n";
    } else {
        std::cout <<"False\n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("()");
    parser("([)]");
    parser("[[]]()()");
    parser("(({(})))");
    parser("((){})");
    return 0;
}
