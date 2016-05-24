//
//  main.cpp
//  StringSearching
//
//  Created by Anas Saeed on 30/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/28/

#include <iostream>
std::string rest(std::string input, int index){
    std::string output;
    for (index++; index<input.length(); index++) {
        output+=input[index];
    }
    return output;
}

bool checker(std::string one, std::string two){
    if (two.length() == 0) {
        return true;
    }
    if (one.length()< two.length()) {
        return false;
    }
    if (two[0] == '*') {
        return checker(one, rest(two,0));
    }
    if (two[0] == 92 && two[1] =='*') {
        for ( int i = 0;i < one.length();i++){
            if (one[i] =='*') {
                return checker(rest(one, i), rest(two, 1));
            }
        }
    }
    for (int i = 0;i < one.length();i++){
        if (one[i] == two[0]) {
            bool check = true;
            for (int j = 0; j < two.length(); j++) {
                if (two[j] == 92 && two[i+1] == '*') {
                    if (one[i+j] == '*') {
                        j++;
                    } else{
                        return false;
                    }
                }
                if (two[j] == '*') {
                    return  checker(one, rest(two, j));
                }
                if (one[i+j] != two[j]) {
                    check = false;
                    break;
                }
            }
            if (check == true) {
                return true;
            }
        }
    }
    return false;
}


void parser(std::string input){
    std::string one,temp;
    for ( auto x: input){
        if (x ==',') {
            one = temp;
            temp = "";
            continue;
        }
        temp+=x;
    }
    if (checker(one, temp)) {
        std::cout <<"true\n";
    } else {
        std::cout <<"false\n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    parser("H*ello,H*\*ell");
    parser("This is good, is");
    parser("Old,Young");
    parser("*abc,a\*a");
    return 0;
}
