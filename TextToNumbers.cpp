//
//  main.cpp
//  TextToNumbers
//
//  Created by Anas Saeed on 03/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/110/

#include <iostream>
#include <vector>
int replacement(std::string input){
    if (input =="zero") {
        return 0;
    }
    if (input== "one") {
        return 1;
    }
    if (input== "two") {
        return 2;
    }
    if (input== "three") {
        return 3;
    }
    if (input== "four") {
        return 4;
    }
    if (input== "five") {
        return 5;
    }
    if (input== "six") {
        return 6;
    }
    if (input== "seven") {
        return 7;
    }
    if (input== "eight") {
        return 8;
    }
    if (input== "nine") {
        return 9;
    }
    if (input== "ten") {
        return 10;
    }
    if (input== "eleven") {
        return 11;
    }
    if (input== "twelve") {
        return 12;
    }
    if (input== "thirteen") {
        return 13;
    }
    if (input== "fourteen") {
        return 14;
    }
    if (input== "fifteen") {
        return 15;
    }
    if (input== "sixteen") {
        return 16;
    }
    if (input== "seventeen") {
        return 17;
    }
    if (input== "eighteen") {
        return 18;
    }
    if (input== "nineteen") {
        return 19;
    }
    if (input== "twenty") {
        return 20;
    }
    if (input== "thirty") {
        return 30;
    }
    if (input== "forty") {
        return 40;
    }
    if (input== "fifty") {
        return 50;
    }
    if (input== "sixty") {
        return 60;
    }
    if (input== "seventy") {
        return 70;
    }
    if (input== "eighty") {
        return 80;
    }
    if (input== "ninety") {
        return 90;
    }
    return 0;
}

void parser(std::string input){
    int result = 0;
    bool negative = false;
    if (input[0] =='n' && input[1] =='e' && input[2] =='g' && input[3] =='a' && input[4] =='t' && input[5] =='i') {
        negative = true;
    }
    std::string temp;
    std::vector<int> vec;
    bool hundredPresent = false;
    for ( auto x: input){
        if (x ==' ') {
            if (temp == "hundred") {
                result = result*100;
                vec.push_back(result);
                result = 0;
                hundredPresent = true;
                temp ="";
                continue;
            }
            if (temp =="thousand") {
                if (hundredPresent == true) {
                    hundredPresent = false;
                    result+=vec[vec.size()-1];
                    vec[vec.size()-1] = 0;
                }
                result = result*1000;
                vec.push_back(result);
                result = 0;
                temp ="";
                continue;
            }
            if (temp == "million") {
                if (hundredPresent == true) {
                    hundredPresent = false;
                    result+=vec[vec.size()-1];
                    vec[vec.size()-1] = 0;
                }
                result = result*1000000;
                vec.push_back(result);
                result = 0;
                temp = "";
                continue;
            }
            result+=replacement(temp);
            temp = "";
            continue;
        }
        temp+=x;
    }
    if (temp == "hundred") {
        result = result*100;
        temp ="";
    }
    else if (temp =="thousand") {
        if (hundredPresent == true) {
            hundredPresent = false;
            result+=vec[vec.size()-1];
            vec[vec.size()-1] = 0;
        }
        result = result*1000;
        temp ="";
    }
    else if (temp == "million") {
        if (hundredPresent == true) {
            hundredPresent = false;
            result+=vec[vec.size()-1];
            vec[vec.size()-1] = 0;
        }
        result = result*1000000;
        temp = "";
    } else {
        result +=replacement(temp);
    }
    for ( auto x : vec)
        result+=x;
    if (negative) {
        std::cout <<"-" << result <<"\n";
    } else {
        std::cout << result <<"\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("four hundred eighty thousand nine hundred");
    parser("negative six hundred thirty eight");
    parser("twenty two hundred two");
    parser("negative two million one hundred seven");
    parser("forty million five hundred sixty nine thousand nine hundred");
    return 0;
}


/*
 our hundred eighty thousand nine hundred
forty million five hundred sixty nine thousand nine hundred
negative one hundred fifty thousand five hundred sixteen
negative seven hundred twenty nine
ten million forty five
one million one hundred one
three hundred thirty six thousand eighty two
zero
negative fifty eight million one thousand ninety six
seven hundred eighteen
twenty nine
negative thirty thousand four hundred fifty
six hundred eleven million
negative fifteen million five hundred twenty four
negative eighteen
negative nine hundred eleven million nine hundred thirty thousand one hundred forty
negative three hundred twenty million eight hundred sixty three thousand eight hundred eighteen
zero
thirty million
negative ten
negative one hundred ninety one million
six hundred seventy million one hundred sixty thousand eight hundred fifty
one million nine hundred fourteen thousand two hundred
six hundred eleven million two hundred ninety seven thousand eight hundred seventy five
negative fifteen million
twenty five million twenty five thousand thirty three
one million twenty two
twenty
six
eighteen million five hundred thirty
sixteen thousand
negative seven hundred eleven thousand one hundred seventeen
two hundred fourteen thousand four hundred thirteen
nine hundred seventeen
fifty thousand five hundred
negative one thousand one hundred ninety
one hundred million five hundred seventy five thousand seventy
zero
three hundred thirty three
two hundred fifty nine

*/
