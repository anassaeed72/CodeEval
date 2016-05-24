//
//  main.cpp
//  LostInTranslation
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/121

#include <iostream>
char transformation(char input){
    if (input == ' ') {
        return ' ';
    }
    if (input == 'a') {
        return 'y';
    }
    if (input == 'b') {
        return 'h';
    }
    if (input == 'c') {
        return 'e';
    }
    if (input =='d') {
        return 's';
    }
    if (input =='e') {
        return  'o';
    }
    if (input =='f') {
        return 'c';
    }
    if (input =='g') {
        return 'v';
    }
    if (input == 'h') {
        return 'x';
    }
    if (input == 'i') {
        return 'd';
    }
  
    if (input =='j') {
        return  'u';
    }
    if (input =='k') {
        return  'i';
    }
    if (input =='l') {
        return  'g';
    }
    if (input =='m') {
        return  'l';
    }
    if (input =='n') {
        return  'b';
    }
    if (input =='o') {
        return  'k';
    }
    if (input =='p') {
        return  'r';
    }
    if (input =='q') {
        return  'z';
    }
    if (input =='r') {
        return  't';
    }
    if (input =='s') {
        return  'n';
    }
    if (input =='t') {
        return  'w';
    }
    if (input =='u') {
        return  'j';
    }
    if (input =='v') {
        return  'p';
    }
    if (input =='w') {
        return  'f';
    }
    if (input =='x') {
        return  'm';
    }
    if (input =='y') {
        return  'a';
    }
    if (input =='z') {
        return  'q';
    }
   
    return input;
}

void parser(std::string input){
    for ( auto x: input){
        std::cout << transformation(x);
    }
    std::cout << std::endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    parser("rbc vjnmkf kd yxyqci na rbc zjkfoscdd ew rbc ujllmcp");
    parser("tc rbkso rbyr ejp mysljylc kd kxveddknmc re jsicpdrysi");
    parser("de kr kd eoya kw aej icfkici re zjkr");
    parser("dyrjpiya ysi krd fypikww njkmiksl rbc");
    parser("gerci rbc fmedc chkdrcsfc fypikww mefym");
    parser("nccs jviyrc pcfckgci djpgkgksl xyoc rbc");
    parser("rbc rbc chyxvmcd pcnjkmr vpeucfrd rbc");
    parser("rbc ks re rbc legcpsxcsr chkdrcsfc");
    return 0;
}
