
//  main.cpp
//  JuggleingWithZeros
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/149/

#include <iostream>
#include <vector>
void convertBinaryToDecimal( std::string input){
   long long dec = 0, rem, num, base = 1;
    if ( input.length() > 5){
        std::vector<std::string> vec;
        std::string temp;
        for  (auto x: input){
            if (temp.length() >= 5) {
                vec.push_back(temp);
                temp = "";
            }
            temp+=x;
        }
        if (temp.length() != 0 ) {
            vec.push_back(temp);
        }
        long total = 0;
        for (int i = vec.size() -1; i >=0; i--) {
            if ( i < vec.size() -1){
                for ( auto x: vec[i +1]){
                    if (x == '1') {
                        break;
                    }
                    base = base*2;
                }
            }
            num = atol(vec[i].c_str());
            dec = 0;
            rem = 0;
            while (num > 0)
            {
                rem = num % 10;
                dec = dec + rem * base;
                base = base * 2;
                num = num / 10;
            }
            total+= dec;
            
        }
        std::cout << total << "\n";
        
    } else {
        num = atol(input.c_str());
        while (num > 0)
        {
            rem = num % 10;
            dec = dec + rem * base;
            base = base * 2;
            num = num / 10;
        }
        std::cout << dec << "\n";
    }
}
void formatter(std::string input){
    bool turn = true;
    bool zero = false;
    std::string result,temp;
    for ( int i = 0;i < input.length();i++){
        if (turn) {
            for ( auto x: temp){
                if (zero) {
                    result+=x;
                } else {
                    result+="1";
                }
            }
            temp = "";
            if (input[i] =='0' && input[i+1] =='0') {
                zero = false;
                i++;
            } else {
                zero = true;
            }
            i++;
            turn = false;
            continue;
        }
        else {
            if (input[i] == ' ') {
                turn = true;
                continue;
            }
            temp+=input[i];
        }
    }
    for ( auto x: temp){
        if (zero) {
            result+=x;
        } else {
            result+="1";
        }
    }
    convertBinaryToDecimal(result);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    formatter("00 0 0 0 00 000 0 0 00 0 0 000 00 0000 0 00 00 000 0 00 00 000 0 00");
//    formatter("00 0 0 00 00 0");
//    formatter("00 0 0 0 00 0 0 0 00 0 0 0 00 0 0 0");
    return 0;
}
