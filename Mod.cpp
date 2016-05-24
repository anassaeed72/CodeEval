//
//  main.cpp
//  Mod
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
void moddulus(int one, int two){
    
    while (one > two) {
        one  = one -two;
    }
    if ( one == two){
        std::cout << "0\n";
        return;
    }
        
       std::cout << one << "\n";
}
void formatter(std::string line){
    std::string temp;
    int one,two;
    for ( auto x: line){
        if ( x == ','){
            one = atoi(temp.c_str());
            temp = "";
            continue;
        }
        temp+=x;
    }
    two = atoi(temp.c_str());
    moddulus(one, two);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    std::vector<std::string> vec = {
        
        "91,34"
        "16,17",
        "39,33",
        "9,27",
        "57,51",
        "60,39",
        "28,89",
        "56,45",
        "83,95",
        "92,52",
        "7,63",
        "89,16",
        "90,34",
        "33,56",
        "89,59",
        "5,89",
        "71,2",
        "5,48",
        "31,37",
        "77,85",
        "85,31",
        "58,31",
        "33,19",
        "100,78",
        "88,31",
        "9,28",
        "89,8",
        "42,85",
        "51,51",
        "68,61",
        "73,88",
        "68,17",
        "44,58",
        "41,19",
        "64,70",
        "73,88",
        "31,49",
        "40,39",
        "88,42",
        "34,45"}
    ;
//    for (auto x: vec)
//        formatter(x);
    formatter("68,17");
    return 0;
}

