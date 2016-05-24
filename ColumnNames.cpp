//
//  main.cpp
//  ColumnNames
//
//  Created by Anas Saeed on 23/05/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

std::string calculate(std:: string input){

    int number = atoi(input.c_str());
    std::string result;
    char t;
    while (number >26) {
        int temp = number%26;
        number /= 26;
        t = 'A' +temp-1;

        if (temp == 0) {
            t = 'Z';
            number--;
        }
        result+= t;
    }
    if (number>0) {
        t = 'A' +number-1;
        result+= t;
    }
    for (int i = 0; i < result.length()/2; i++) {
        t = result[i];
        result[i] = result[result.length() -i-1];
        result[result.length() -i -1] = t;
    }
    return result;
}

void tester(){
    int count = 1;
    char one, two, three;
    std::string result = "";
    for (int iii = 0; iii < 26; iii++) {
        three = 'A' + iii;
        result+=three;
        if (result != calculate(std::to_string(count++))) {
            std::cout << count << " " << result  << " " << calculate(std::to_string(count))<<"\n";
            return;
        }
        result = "";
    }
    for (int ii = 0; ii < 26 ; ii++) {
        for (int iii = 0; iii < 26; iii++) {
            two = 'A' +ii;
            three = 'A' + iii;
            result+=two;
            result+=three;
            if (result != calculate(std::to_string(count))) {
//                std::cout <<"\n" << result << "  "  << ii << " " << iii << " ";
                std::cout << count << " " << result  << " " << calculate(std::to_string(count))<<"\n";
                return;
            }
            count++;
             result = "";
        }
    }

    for ( int i = 0; i < 26;i++){
        for (int ii = 0; ii < 26 ; ii++) {
            for (int iii = 0; iii < 26; iii++) {
                one = 'A' + i;
                two = 'A' +ii;
                three = 'A' + iii;
                result +=one;
                result+=two;
                result+=three;
                if (result != calculate(std::to_string(count++))) {
                    std::cout << count << " " << result  << " " << calculate(std::to_string(count))<<"\n";
                    return;
                }
                 result = "";
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    std::cout << calculate("52") <<"\n";
//    std::cout << calculate("2") <<"\n";
    std::cout << calculate("53") <<"\n";
    tester();
    return 0;
}
