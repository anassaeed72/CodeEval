//
//  main.cpp
//  MinimumDistance
//
//  Created by Anas Saeed on 03/04/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
void meanCalc(std::vector<int> vec){
    int sum = 0;
    for ( auto x: vec){
        sum+=x;
    }
    int mean = sum/vec.size();
    std::cout <<"\n" << mean << " ";
    sum = 0;
    for ( auto x:vec){
        sum+=abs(mean-x);
    }
    std::cout << sum << "\n";
}
void parser(std::string input){
    std::string temp;
    std::vector<int> vec;
    int index = 0;
    for (; index < input.length(); index++) {
        if (input[index] == ' ') {
            break;
        }
    }
    for (index++; index < input.length(); index++) {
        if (input[index] == ' ') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            continue;
        }
        temp+=input[index];
    }
    vec.push_back(atoi(temp.c_str()));
    for ( auto x: vec)
        std::cout << x << " ";
    meanCalc(vec);
}
int main(int argc, const char * argv[]) {
//    parser("4 3 3 5 7");
//    parser("3 30 30 100");
//    parser("35 5474 6551 728 7638 5911 6527 374 5533 8912 1426 2933 7995 3458 8214 369 678 865 1309 1220 3711 3471 9943 9490 7527 1900 1384 3278 8819 8099 3593 4144 3811 2159 340");
    parser("40 4639 5735 8761 7754 1952 203 6589 6639 9992 4734 5098 5522 4524 4401 1552 6937 5516 7057 7361 1592 1967 7809 3988 5140 462 3000 561 5431 1330 2272 2771 1447 6668 6848 1639 7097 2515 6271 6757 9884 78 8220 2170 4336 7516 7316 6564 1275 208 1528 9112 3329 913 6437 9808 5228 5878 2141 5839 6996 2216 2532 8692 5940 4675 2357 4977 803 6263 9376 8722 400 9012 1423 3494 7545 368 4426 4945 3505 9188 3153 5490 6339 9146 9282 5805 1630 4776 6878 3170 3188 8585 5795 3369 3885 2834 975 5479 3129 4161 1131 878 1563 5020 2222 865 6328 7317 3714 7465 1059 3309 5420 3501 2898 4531 645 9110");
    return 0;
}
