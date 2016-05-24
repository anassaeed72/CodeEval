//
//  main.cpp
//  Permutations
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
std::string result;
std::vector<std::string> vec;
void swap(char& a, char& b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

/* Function to obtain permutations of string characters */
void permutation(std::string s,int i,int n)
{
    int j;
    
    if (i == n)
        vec.push_back(s);
    else
    {
        for (j = i; j < s.length(); j++)
        {
            swap(s[i],s[j]);
            permutation(s, i + 1, n);
            swap(s[i],s[j]);
        }
    }
}

void runner(std::string input){
    vec = {};
    permutation(input, 0, input.length()-1);
    std::sort(vec.begin(), vec.end());
    for ( int i = 0;i < vec.size()-1;i++)
        std::cout << vec[i] <<",";
    std::cout << vec[vec.size()-1];
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    runner("abc");
    runner("aA1");
    return 0;
}
