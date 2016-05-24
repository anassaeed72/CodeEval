//
//  main.cpp
//  OverlappingRectangles
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/70/

#include <iostream>
class Point{
public:
    int x;
    int y;
};
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    // If one rectangle is on left side of other
    if (l1.x > r2.x || l2.x > r1.x)
        return false;
    
    // If one rectangle is above other
    if (l1.y < r2.y || l2.y < r1.y)
        return false;
    
    return true;
}

void parser(std::string input){
    Point one,two;
    Point three,four;
    int count = 0;
    std::string temp;
    for ( auto x: input){
        if (x ==',') {
            if (count ==0) {
                one.x = atoi(temp.c_str());
            } else if (count == 1){
                one.y = atoi(temp.c_str());
            } else if ( count == 2){
                two.x = atoi(temp.c_str());
            } else if (count == 3){
                two.y = atoi(temp.c_str());
            } else if (count == 4){
                three.x = atoi(temp.c_str());
            } else if (count == 5){
                three.y =atoi(temp.c_str());
            }else if ( count == 6){
                four.x = atoi(temp.c_str());
            }
//            std::cout << temp << " ";
            count++;
            temp = "";
            continue;
        }
        temp+=x;
    }
    four.y = atoi(temp.c_str());
//    std::cout << one.x<<" " << one.y <<" " << two.x <<" " << two.y << " " << three.x << " " << three.y << " " << four.x << " " << four.y <<" ";
//    if (( two.y < three.y || one.y > four.y || two.x < three.x || one.x > four.x )){
//        std::cout <<"True\n";
//    } else {
//        std::cout <<"False\n";
//    }
//    std::cout << doOverlap(one,two, three,four) << true;
    if (doOverlap(one,two, three,four) ) {
        std::cout <<"True\n";
    } else {
        std::cout <<"False\n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("-3,3,-1,1,1,-1,3,-3");
    parser("-3,3,-1,1,-2,4,2,2");
    return 0;
}
