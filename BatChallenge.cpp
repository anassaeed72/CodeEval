//
//  main.cpp
//  BatChallenge
//
//  Created by Anas Saeed on 24/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

void parser(std::string input){
    int count = 0;
    std::string temp;
    int length = 0,interBatDistance = 0,numberAlreadyPresent = 0;
    bool done = false;
    for ( auto x : input){
        if (x == ' ') {
            if (count == 0) {
                length = atoi(temp.c_str());
            } else if (count == 1){
                interBatDistance = atoi(temp.c_str());
            } else if (count == 2){
                done = true;
                numberAlreadyPresent = atoi(temp.c_str());
                temp = "";
                count  =0;
                break;
            }
            count++;
            temp = "";
            continue;
        }
        temp+=x;
    }
    if (done == false) {
        numberAlreadyPresent = atoi(temp.c_str());
    }
    count = 0;
    int distanceAvalible = length-12;
    int covered = 0;
    while (covered<distanceAvalible) {
        count++;
        covered+= interBatDistance;
    }

//    std::cout << covered << " " << distanceAvalible << " ";
    if (covered == distanceAvalible && numberAlreadyPresent == 0) {
        count++;
    }
   if (numberAlreadyPresent == 0){
       
        std::cout << count <<"\n";
    } else {
        count-=numberAlreadyPresent;
        if (count<1) {
            std::cout <<"0\n";
            return;
        }
        std::cout << count << "\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("22 2 2 9 11");
    parser("33 5 0");
    parser("16 3 2 6 10");
    parser("835 125 1 113");
    parser("47 5 0");
    parser("12 1 0");
    parser("12 1 1");
//    parser("806 195 1 742");
//    parser("769 12 6 441 554 673 688 729 760");
    return 0;
}
