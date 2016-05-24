//
//  main.cpp
//  AgeDistribution
//
//  Created by Anas Saeed on 16/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/152/

#include <iostream>

void ageDistribution(std::string input){
    int age = atoi(input.c_str());
    if (age <0 || age >100) {
        std::cout << "This program is for humans\n";
        return;
    }
    if(age <=2){
        std::cout << "Still in Mama's arms\n";
        return;
    }
    if (age<=4) {
        std::cout << "'Preschool Maniac\n";
        return;
    }
    if (age<= 11) {
        std::cout << "Elementary school\n";
        return;
    }
    if (age<=14) {
        std::cout << "Middle school\n";
        return;
    }
    if (age<= 18) {
        std::cout << "High school\n";
        return;
    }
    if (age<= 22) {
        std::cout << "College\n";
        return;
    }
    if (age <= 65) {
        std::cout << "Working for the man\n";
        return;
    }
    std::cout << "The Golden Years\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
