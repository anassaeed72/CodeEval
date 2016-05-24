//
//  main.cpp
//  TrailingStrings
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/32/


#include <iostream>
void checker(std::string master, std::string slave){
    int index = 0;
    if (master.length()<slave.length()) {
        std::cout <<"0\n";
        return;
    }
//    std::cout << master.length() <<" | " << slave.length()<<"\n";
    for (int i = master.length()-slave.length(); i < master.length(); i++) {
        if (master[i] != slave[index]) {
            std::cout <<"0\n";
            return;
        }
        index++;
    }
    std::cout <<"1\n";
}
void parser(std::string line){
    if (line == "") {
        return;
    }
    std::string master,slave;
    bool which = true;
    for ( auto x: line){
        if (x ==',') {
            which = false;
            continue;
        }
        if (which) {
            master+=x;
        } else {
            slave+=x;
        }
    }
    checker(master, slave);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    checker("Hello World","Wolld");
//    parser("Hello World,World");
    parser("Hello CodeEval,Hello      CodeEval");
//    parser("San Francisco,San Jose");
    return 0;
}
