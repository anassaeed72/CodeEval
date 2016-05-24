//
//  main.cpp
//  UglyNumbers
//
//  Created by Anas Saeed on 28/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/public_sc/42/

#include <iostream>
#include <vector>
int value(std::string input){
    int result = 0;
    std::vector<char> operands;
    std::vector<int> values;
    std::string temp;
    for ( int i = 0; i < input.length();i++){
        if (input[i] == '+') {
            operands.push_back('+');
            values.push_back(atoi(temp.c_str()));
            temp = "";
        } else if (input[i] == '-'){
            operands.push_back('-');
            values.push_back(atoi(temp.c_str()));
            temp = "";
        } else {
            temp+=input[i];
        }
    }
    values.push_back(atoi(temp.c_str()));
    if (operands.size()>0) {
        if (operands[0] == '+') {
            result = values[0] + values[1];
        } else {
            result = values[0] - values[1];
        }
        for (int i = 1; i < operands.size(); i++) {
            if (operands[i] == '+') {
                result+=values[i+1];
            } else if (operands[i] =='-'){
                result-=values[i+1];
            }
        }
    } else {
        return  values[0];
    }
    return result;
}

std::string rest(std::string input){
    std::string output;
    for (int i = 1; i < input.length(); i++) {
        output+=input[i];
    }
    return output;
}
std::vector<int> numberProducer(std::string input){
    if (input.length() == 1) {
        std::vector<int> v = {atoi(input.c_str())};
        return v;
    }
    int one = (int)(input[0] -'0');
    
    std::vector<int> v;
    std::vector<int> temp = numberProducer(rest(input));
    if (one == 2) {
        for ( auto x: temp)
            std::cout << x << " ";
        std::cout << std::endl << std::endl << std::endl;
    }
    for ( auto x: temp){
        v.push_back(one+x);
        v.push_back(one-x);
        if (x< 0) {
            x*=-1;
            v.push_back(-atoi((std::to_string(one)+std::to_string(x)).c_str()));
        } else {
            v.push_back(atoi((std::to_string(one)+std::to_string(x)).c_str()));
        }
    }
    if (one == 2) {
        for ( auto x: v){
            std::cout << x << " ";
        }
    }
    return v;
}
std::vector<std::string> numberProducerString(std::string input){
    if (input.length() == 1) {
        std::vector<std::string> v = {input};
        return v;
    }
    std::vector<std::string> v;
    std::vector<std::string> temp = numberProducerString(rest(input));
    std::string str = std::to_string(input[0]-'0');
    for ( auto x: temp){
        v.push_back(str+x);
        v.push_back(str+"+"+x);
        v.push_back(str+"-"+x);
    }
    return v;
}
void counter(std::string input){
    std::vector<std::string> numbersGenerated = numberProducerString(input);
    std::vector<int> numbersInt;
    for ( auto x: numbersGenerated){
        numbersInt.push_back(value(x));
    }
    int count = 0;
       for ( auto x: numbersInt){
        if (x%2 == 0 || x%3 ==0 || x%5 == 0 || x%7 == 0 || x ==0 ) {
            count++;
        }
//        std::cout << x << " ";
    }
    std::cout << count <<"\n";
}
int main(int argc, const char * argv[]) {
    counter("1");
    counter("9");
    counter("011");
    counter("12345");
       return 0;
}
