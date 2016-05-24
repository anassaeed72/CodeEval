//
//  main.cpp
//  SpiralPrinting
//
//  Created by Anas Saeed on 27/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//     https://www.codeeval.com/open_challenges/57/

#include <iostream>
#include <vector>
void spiralprinting(std::vector<std::vector<std::string>> vec, int rows, int coulumns){
       int totalElements = rows*coulumns;
       int done = 0;
       int curRow = 0, curCoulumn = 0;
       
       
       while (done < totalElements) {
              for ( int i = curCoulumn;i < coulumns-curCoulumn;i++){
                     std::cout << vec[curRow][i] << " ";
//                     std::cout << i << "\n";
                     done++;
              }
              if (done >= totalElements) {
                     break;
              }
              for (int i =curRow+1; i< rows-curRow; i++) {
                     int col = coulumns - curCoulumn -1;
                     std::cout << vec[i][col] << " ";
//                     std::cout << i << " ";

                     done++;
              }
              if (done >= totalElements) {
                     break;
              }
              for (int i = coulumns-curCoulumn-2; i>curCoulumn-1; i--) {
                     std::cout << vec[rows- curRow-1][i] << " ";
//                     std::cout << i << " ";

                     done++;
              }
              if (done >= totalElements) {
                     break;
              }
              for (int i = rows-curRow -2; i > curRow; i--) {
                     std::cout << vec[i][curRow] << " ";
//                     std::cout << i << " ";

                     done++;
              }
              curCoulumn++;
              curRow++;
       }
       std::cout <<"\n";
}
void parser(std::string input){
       int rows=0,coulumns=0;
       std::string temp;
       bool first = true;
       int index = 0;
       for ( auto x: input){
              index++;
              if (x == ';') {
                     if (first) {
                            rows = atoi(temp.c_str());
                            temp = "";
                            first = false;
                            continue;
                     } else{
                            coulumns = atoi(temp.c_str());
                            break;
                     }
              }
              temp+=x;
       }
       
       std::vector<std::string> v;
       std::vector<std::vector<std::string>> vec;
       int count = 0;
       for (temp = "";index<input.length();index++){
              if (count == coulumns) {
                     vec.push_back(v);
                     v ={};
                     count = 0;
              }
              if (input[index] == ' ') {
                     count++;
                     v.push_back(temp);
                     temp = "";
                     continue;
              }
              temp+=input[index];
       }
       v.push_back(temp);
       vec.push_back(v);
       for ( auto x: vec){
              for ( auto xx: x){
//                     std::cout << xx << " ";
              }
       }
//       std::cout << vec[0][0];
       spiralprinting(vec,rows,coulumns);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
       parser("3;3;1 2 3 4 5 6 7 8 9");
       parser("4;4;1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16");
       parser("3;2;1 2 3 4 5 6");
       parser("1;5;1 2 3 4 5");
       parser("6;6;a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J");
    return 0;
}
