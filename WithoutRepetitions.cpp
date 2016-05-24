//
//  main.cpp
//  WithoutRepetitions
//
//  Created by Anas Saeed on 19/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
void formatter(std::string input){
    char temp = 0;
    for (auto x: input){
        if (x == temp) {
            continue;
        } else {
            temp = x;
            std::cout << x;
        }
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    formatter("But as he spake he drew the good sword from its scabbard, and smote a heathen knight, Jusssstin of thee Iron Valley.");
    formatter("No matttter whom you choose, she deccccclared, I will abide by your decision.");
    formatter("Wwwhat is your will?");
    formatter("At his magic speech the ground oppened and he began the path of descent.");
    formatter("I should fly away and you would never see me again.");
        return 0;
}
