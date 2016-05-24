//
//  main.cpp
//  PassTriangle
//
//  Created by Anas Saeed on 28/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/89/

#include <iostream>
#include <fstream>
int index1 = 0;
long result =0;
std::string db ="";
void parse(std::string input){
    int one = 0, two=0, three = 0;
    int i = 0;
    int count = 0;
    std::string temp;
    for (; i < input.length(); i++) {
        if (count == index1) {
            //                i++;
            break;
        }
        if (input[i] == ' ') {
            count++;
            if (count != index1) {
                temp = "";
            }
        } else{
            temp+=input[i];
        }
    }
    three = atoi(temp.c_str());
    if (index1 == 0) {
        three = -100;
    }
    temp = "";
    for (; i < input.length(); i++) {
        if (input[i] == ' ') {
            break;
        }
        temp+=input[i];
    }
    one = atoi(temp.c_str());
    temp = "";
    for (i++; i < input.length(); i++) {
        if (input[i] == ' ') {
            break;
        }
        temp+=input[i];
    }
    two = atoi(temp.c_str());
    temp = "";
    int maxValue = std::max(one, two);
    maxValue = std::max(maxValue,three);
    if (one == two || two == three || one == three) {
        std::cout << "equal";
    }
    if (maxValue == one) {
        result +=one;
        index1 = count;
    } else if (maxValue == two){
        result+=two;
        index1 = count+1;
    }
        else if (maxValue == three){
        result+=three;
        index1 = count-1;
    }
    std::cout << result << " "<<maxValue << " "<<one << " " << two << " " << three << "\n";
//    std::cout << one << " " << three;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    parse("5");
//    parse("9 6");
//    parse("4 6 8");
//    parse("9 7 1 5");
//    parse("10 11 12 13");
//    std::cout << result;
    std::ifstream reader;
    reader.open("file.txt");
    std::string temp;
    int count = 0;
    result = 0;
    while (std::getline(reader,temp)) {
        parse(temp);
        count++;
        if (count == 6) {
            break; 
        }
    }
    std::cout << result;
    return 0;
}
