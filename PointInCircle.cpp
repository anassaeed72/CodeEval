//
//  main.cpp
//  PointInCircle
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/98/

#include <iostream>

void check(double cx,double cy, double r, double x,double y){
   
    if ((x-cx)*(x-cx)+(y-cy)*(y-cy)<r*r) {
        std::cout <<"true\n";
    } else {
        std::cout <<"false\n";
    }
}

void parser(std::string input){
    int count = 0;
    std::string temp;
    double cx = 0,cy = 0,r = 0,x = 0,y = 0;
    for ( int i = 9;i < input.length()-1;i++){
        if (input[i] ==',' && count ==0 ) {
            cx = atof(temp.c_str());
            temp = "";
            continue;
        }
        if (input[i] ==')' && count ==0) {
            cy = atof(temp.c_str());
            i = i+10;
            count++;
            temp = "";
            continue;
        }
        if (input[i] ==';' && count == 1) {
            r = atof(temp.c_str());
            count++;
            i = i+ 9;
            temp = "";
            continue;
        }
        if (input[i] ==',' && count == 2) {
            x = atof(temp.c_str());
            temp = "";
            continue;
        }
        temp+=input[i];
    }
    y = atof(temp.c_str());
    
    check(cx, cy, r, x, y);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("Center: (2.12, -3.48); Radius: 17.22; Point: (16.21, -5)");
    parser("Center: (5.05, -11); Radius: 21.2; Point: (-31, -45)");
    parser("Center: (-9.86, 1.95); Radius: 47.28; Point: (6.03, -6.42)");
    return 0;
}
