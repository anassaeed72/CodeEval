//
//  main.cpp
//  TextDollar
//
//  Created by Anas Saeed on 02/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/52/

#include <iostream>

std::string replacement (int input){
    if (input == 1) {
        return"One";
    }
    else if (input == 2){
        return "Two";
    }
    else if (input == 3){
        return "Three";
    }
    else if (input == 4){
        return "Four";
    }
    else if (input == 5){
        return "Five";
    }
    else if (input == 6){
        return "Six";
    }
    else if (input == 7){
        return "Seven";
    }
    else if (input == 8){
        return "Eight";
    }
    else if (input == 9){
        return "Nine";
    }
    else if (input == 10 ){
        return "Ten";
    }
    else if (input == 11 ){
        return "Eleven";
    }
    else if (input == 12 ){
        return "Twelve";
    }
    else if (input == 13 ){
        return "Thirteen";
    }
    else if (input == 14 ){
        return "Fourteen";
    }
    else if (input == 15 ){
        return "Fifteen";
    }
    else if (input == 16 ){
        return "Sixteen";
    }
    else if (input == 17 ){
        return "Seventeen";
    }
    else if (input ==  18 ){
        return "Eighteen";
    }
    else if (input == 19 ){
        return "Nineteen";
    }
    
    else if (input == 20 ){
        return "Twenty";
    }
    else if (input == 30 ){
        return "Thirty";
    }
    else if (input == 40 ){
        return "Forty";
    }else if (input == 50 ){
        return "Fifty";
    }else if (input == 60 ){
        return "Sixty";
    }else if (input == 70 ){
        return "Seventy";
    }else if (input == 80 ){
        return "Eighty";
    }
    else if (input == 90 ){
        return "Ninety";
    }
    return "";
}
void R(int input){
    if (input>=20) {
        int temp = input/10;
        temp*=10;
        int temp1 = input- temp;
        std::cout << replacement(temp) << replacement(temp1);
    } else{
        std::cout << replacement(input);
    }
}
void hundredR(int input){
    int hundred = 100;
    int temp = input/hundred;
      std::cout << replacement(temp) <<"Hundred";
}
void thousandR(int input){
    int thousand = 1000;
    int temp = input/thousand;
    if (temp < 100){
        R(temp);
    } else {
        hundredR(temp);
        R(temp%100);
    }
    std::cout << "Thousand";
}
void millionR(int input){
    int million = 1000000;
    int temp = input/million;
    if (temp <100) {
        R(temp);
    } else if (temp < 1000 ){
        hundredR(temp);
        R(temp%100);
    } else {
        thousandR(temp);
        
    }
    std::cout <<"Million";
    }
void parser(std::string inputString){
    if (inputString == "1") {
        std::cout <<"OneDollar\n";
        return;
    }
    int input = atoi(inputString.c_str());
    int million = 1000000;
    int thousand = 1000;
    int hundered = 100;
    if (input>million) {
        millionR(input);
        input%=million;
    }
    if (input>= thousand) {
        thousandR(input);
        input%=thousand;
    }
    if (input>= hundered) {
        hundredR(input);
        input%=hundered;
    }
    R(input);
    std::cout << "Dollars" << "\n";
}

int main(int argc, const char * argv[]) {
    parser("121964001");
    parser("232146029");
    parser("64543");
    parser("466");
    parser("1234");
    parser("100000000");
        return 0;
}

/*


 121964001
 232146029
 675
 612528446
 93023
 123456789
 804
 865
 361034813
 630
 38912465
 559503768
 340
 46068815
 4919
 161049654
 474
 740
 25439
 892
 710715212
 35425914
 348803321
 64543
 600
 640
 716039774
 733
 176
 215
 1
 187565016
 932
 6803
 806
 705
 100000000
 356
 468
 80766

*/
