//
//  main.cpp
//  LowestCommonSubsequence
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/6/

#include <iostream>
void func(std::string one, std::string two)
{
        int rows = 0;
    for(auto x:one){
        x = 0;
        rows++;
    }
    int columns = 0;
    for (auto x: two){
        x = 0;
        columns++;
    }
    int array[rows+1][columns+1];
    for (int i=0; i<=rows; i++)
    {
        for (int j=0; j<=columns; j++)
        {
            if (i == 0 || j == 0){
                array[i][j] = 0;
            }
            else if (one[i-1] == two[j-1]){
                array[i][j] = array[i-1][j-1] + 1;
            }
            else{
                if (array[i-1][j] > array[i][j-1]) {
                    array[i][j] = array[i-1][j];
                }else{
                    array[i][j] = array[i][j-1];
                }
            }
        }
    }
    // for backtracking
    int i = rows;
    int j = columns;
    std::string out1 = "";
    
    while (true) {
        if (i == 0 || j == 0){
            break;
        }
        else if (one[i-1] == two[j-1]){
            out1 = out1 + one[i-1];
            i = i-1;
            j = j-1;
        }
        else{
            if (array[i-1][j] > array[i][j-1]) {
                i = i-1;
            }else{
                j = j-1;
            }
            
        }
    }
    std::string real = "";
    for (int index = out1.length()-1; index !=-1; index--) {
        real = real + out1[index];
    }
    std::cout << real<<"\n";
    return ;
}
void parser(std::string input){
    std::string one;
    std::string two;
    bool first = true;
    for ( auto x: input){
        if (x == ';') {
            first = false;
            continue;
        }
        if (first) {
            one+=x;
        } else {
            two+=x;
        }
    }
    func(one, two);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    func("XMJYAUZ","MZJAWXU");
    return 0;
}
