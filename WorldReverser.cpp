//
//  main.cpp
//  WorldReverser
//
//  Created by Anas Saeed on 26/02/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
string singelWordReverser(string input){
    string output;
    for (int index = input.length() -1 ; index>=0; index--) {
        output+=input[index];
    }
    return output;
}
vector<string> allWords(string input){
    vector<string> output;
    string current;
    for (int index = 0; index < input.length(); index++) {
        if ( input[index] == ' ' ) {
            output.push_back(current);
            current = "";
            continue;
        }
        current+=input[index];
    }
    output.push_back(current);

    return output;
}
string reverseWords(string input){
    vector<string> result = allWords(input);
    string output;
    for ( int index = result.size()-1;index>= 1 ;index-- ) {
        output+=result[index]+" ";
    }
    output+=result[0];
    return output;
}
int main(int argc, const char * argv[])
{
    // insert code here...
//    vector<string> result = allWords("1 2 3 4 5");
//    for ( auto x: result){
//        std::cout << x << " \n";
//    }
//    std::cout << singelWordReverser("123456789");
    std::cout << reverseWords("1 2 3 4 5");
    std::cout << "Hello, World!\n";
    return 0;
}

