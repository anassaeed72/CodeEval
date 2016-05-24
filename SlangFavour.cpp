//
//  main.cpp
//  SlangFavour
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/174/

#include <iostream>
#include <vector>
std::vector<std::string> vec =  {", yeah!",", this is crazy, I tell ya.",", can U believe this?",", eh?",", aw yea.",", yo.","? No way!",". Awesome!"};
int index1 = 0;
bool oddEven = false;
void formatter(std::string input){
    for ( auto x: input){
        if (x == '.' || x == '!' || x == '?') {
            if (oddEven) {
                std::cout << vec[index1++%8];
                oddEven = false;
                continue;
            } else{
                oddEven = true;
            }
        }
        std::cout << x;
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    formatter("Lorem ipsum dolor sit amet. Mea et habeo doming praesent. Te inani utroque recteque has, sea ne fugit verterem!");
    formatter("Usu ei scripta phaedrum, an sed salutatus definiebas? Qui ut recteque gloriatur reformidans. Qui solum aeque sapientem cu.");
    formatter("Eu nam nusquam quaestio principes.");
    return 0;
}
