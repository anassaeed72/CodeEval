//
//  main.cpp
//  MixedContent
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/115/

#include <iostream>
#include <vector>
void seperation(std::string input){
    std::vector<std::string> numbers;
    std::vector<std::string> strings;
    std::string temp;
    for (auto x: input){
        if (x == ',') {
            if (temp[0] <65) {
                numbers.push_back(temp);
            } else {
                strings.push_back(temp);
            }
            temp = "";
            continue;
        }
        temp+=x;
    }
    if (temp[0] <65) {
        numbers.push_back(temp);
    } else {
        strings.push_back(temp);
    }
    if (strings.size() >0 ) {
        for (int i = 0;i < strings.size()-1;i++)
            std::cout << strings[i] << ",";
        std::cout << strings[strings.size()-1];
    }
    
    if ( numbers.size() >0){
        if (strings.size() >0)
            std::cout << "|";
        for (int i = 0;i<numbers.size()-1;i++)
            std::cout << numbers[i] << ",";
        std::cout << numbers[numbers.size()-1];
    }
    std::cout << "\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    seperation("8,33,21,0,16,50,37,0,melon,7,apricot,peach,pineapple,17,2124,13,14,43,41");
    return 0;
}

/*

 plum,33,48,apricot,31,grapes,47,orange,22,34,apricot,apricot,5,peach,31,grapes,20,cherry,5
 pear,49,4,grapes,39,41,cherry,orange,31,pear,orange,26,peach,25,apricot,30,melon,2,peach,mango
 23,11,plum,29,2,peach,grapes,peach,plum,2,pineapple,37,peach,11,40,pear,27,37,banana
 4,2,26,mango,grapes,banana,30,13,peach,mango,50,pineapple,pear,33,2,melon,pear,15,melon,cherry
 28,43,cherry,orange,mango,cherry,41,41,apricot,18,cherry,22,41,30,9,banana,cherry,cherry,29,37
 apricot,3,31,pineapple,cherry,13,16,11,melon,cherry,mango,apricot,36,48,43,orange,8,grapes,3
 mango,pear,plum,grapes,6,banana,31,mango,34,melon,apricot,6,5,46,5,melon,27
 19,18,banana,5,37,10,23,cherry,1,pear,9,grapes,8,22,apricot,44,peach,grapes
 orange,banana,melon,plum,peach
 46,melon,12,banana,25,pineapple,melon,pineapple,12,9,cherry,pear,banana,27,grapes,cherry,30,peach
 plum,apricot,21,39,33,mango,4,pineapple,grapes,47,19,mango,orange,27,47
 plum,grapes,43,26,31,banana,38,banana,13,17,13,mango,43,apricot,21,pear,cherry
 8,melon,1,grapes,25,melon,32,mango,orange,27,29,34,pear,40,pear,grapes,apricot,36,pineapple,peach
 peach,mango,plum,melon,plum
 15,4,15,9,41
 23,13,49,50,49,34,peach,banana,15,grapes,3,banana,7,31,pear
 26,18,2,43,39,pear,50,grapes,24,3,29,17,1,mango,plum
 orange,plum,plum,orange,grapes,grapes,pineapple,grapes
 7,28,6,16,47,47,26,18,27,48
 grapes,27,plum,banana,pear,13,50,0,pear,pear,9,apricot,14,pear,melon
 26,cherry,0,melon,10,mango,cherry,48,25,banana,pear,apricot,banana,5,cherry
 36,11,grapes,orange,0,9,cherry,19,24,melon,mango,mango,peach,plum,apricot,31,plum,36,46
 pineapple,9,grapes,50,apricot,18,8,mango,pear,grapes,48,peach,mango,2,23
 orange,10,cherry,1,peach,banana,apricot,plum,grapes,44,28,cherry,20,49,50,19
 banana,mango,8,cherry,cherry,orange,22,24,banana,banana,peach,cherry,apricot,25,15,11,34,melon
 pear,grapes,14,orange,44,43,plum,44,15,grapes,0,27,45,peach,peach,plum,plum
 40,40,1,48,18,42,banana,41,peach,30,cherry,48,melon,12,melon,9,pineapple,35,37
 1,melon,24,37,6,37,orange,42,17,orange,31,32,peach,grapes,1
 43,17,34,3,apricot,50,2,cherry,orange,melon,pineapple,banana,2,49,apricot,grapes
 30,7,29,mango,plum,44,pear,35,apricot,mango,pineapple,pear,47,12,banana,45
 33,8,21,18,cherry,9,16,grapes,50,orange,40,29,orange,peach,39,peach,plum,0,23
 24,11,45,6,19,1,42,45,47,16
 31,20,35,42,27,2,17,17,10
 50,19,7,1,mango,49,mango,29,12,3,49,banana,34,40,orange,cherry,peach,16
 25,9,peach,36,orange,banana,mango,38,banana,apricot,banana,48,grapes,33,18,18,36,11,orange,49
 31,36,35,37,27,44,34,pineapple,peach,cherry,grapes,banana,22,5,39,orange,plum,peach
 plum,0,17,cherry,pear,pineapple,12,29,7,34,banana,apricot,orange,cherry,mango
 cherry,40,plum,peach,cherry,plum,mango,mango,grapes,48,21,peach,cherry,cherry,50,apricot,pear,0
 orange,pear,27,apricot,27,pear,23,banana,40,cherry,apricot,36,12,grapes,31,44
 20,mango,49,2,24,pear,banana,orange,4,cherry,50,1,grapes,mango,3,37,24,apricot,42
*/
