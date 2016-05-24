//
//  main.cpp
//  EmailValidation
//
//  Created by Anas Saeed on 29/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/35/

#include <iostream>
using namespace std;
#include <regex>
const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
void parser1(std::string input){
    if (input.length() == 0) {
        return;
    }
    if (std::regex_match(input, pattern)) {
        std::cout <<"true\n";
    } else {
        std::cout <<"false\n";
    }
}
void parser(std::string input){
    int attherate = 0;
    bool correct = true;
    for ( auto x: input){
        if (x == '@') {
            attherate++;
            if (attherate>1) {
                correct = false;
                break;
            }
        }
        if (x ==34 || x == 60 || x == 62 || x == 42 || x == ' ' ) {
            correct = false;
            break;
        }
    }
    if (attherate== 0 || correct == false) {
        std::cout << "false\n";
        return;
    }
    std::cout <<"true\n";
}
int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";

    std::string email4 = "disposable.style.email.with+156@example.com";
    
    parser1(email4);
    parser(email4);
    return 0;
}


/*

 void parser(std::string input){
 int attherate = 0;
 bool correct = true;
 for ( auto x: input){
 if (x == '@') {
 attherate++;
 if (attherate>1) {
 correct = false;
 break;
 }
 }
 if (x ==34 || x == 60 || x == 62 || x == 42) {
 correct = false;
 break;
 }
 }
 if (attherate== 0 || correct == false) {
 std::cout << "false\n";
 return;
 }
 std::cout <<"true\n";
 }
 
 int main(int argc, const char * argv[]) {
 
 
 parser("Abc.example.com");
 parser("<invalid>@foo.com");
 return 0;
 }
 */
 
 /*
 Abc.example.com
 a"b(c)d,e:f;g<h>i[j\k]l@example.com
 <invalid>@foo.com
 just"not"right@example.com
 A@b@c@example.com
 this\ still\"not\\allowed@example.com
 very.common@example.com
 disposable.style.email.with+156@example.com
 "very.unusual.@.unusual.com"@example.com
 1@d.net
 bob123@alice123.com
 asterisk_domain@foo.*
 disposable.style.email.with+symbol@example.com
 b@domain.net
 a.little.lengthy.but.fine@dept.example.com
 niceandsimple@example.com
 b@d.net
 hfij#kjdfvkl
 this is"not\allowed@example.com
 this is not true
 */

/*

 b@domain.net true
 A@b@c@example.com false
 very.common@example.com true
 hfij#kjdfvkl false
 niceandsimple@example.com true
 <invalid>@foo.com false
 Abc.example.com false
 a"b(c)d,e:f;g<h>i[j\k]l@example.com false
 b@d.net true
 this is not true false
 1@d.net true
 asterisk_domain@foo.* false
 bob123@alice123.com true
 this is"not\allowed@example.com false
 this\ still\"not\\allowed@example.com false
 disposable.style.email.with+symbol@example.com true
 disposable.style.email.with+156@example.com true
 just"not"right@example.com false
 a.little.lengthy.but.fine@dept.example.com true
 "very.unusual.@.unusual.com"@example.com false

*/
