//
//  main.cpp
//  CalculateDistance
//
//  Created by Anas Saeed on 15/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
// https://www.codeeval.com/open_challenges/99/

#include <iostream>
#include <cmath>
double calculate(double one,double two, double three, double four){
    double distance = 0;
    distance = (one -three)*(one-three);
    std::cout << distance << " ";
    distance+=((two-four)*(two-four));
    std::cout << distance << " ";
    return int(sqrt(distance));
}
double formatter(std::string input){
    double one,two,three,four;
    std::string temp;
    bool first = true;
    for (double i = 1;i< input.length();i++){
        if ( input[i] == ' '){
            first = false;
            i++;
//            i++;
            continue;
        }
        if (input[i] == ','){
            i++;
            if ( first ){
                one = atoi(temp.c_str());
                temp = "";
                continue;
            } else {
                three = atoi(temp.c_str());
                temp = "";
                continue;
            }
        }
        if ( input[i] == ')'){
            if ( first ) {
                two = atoi(temp.c_str());
                temp = "";
                first = false;
                continue;
            } else {
                four = atoi(temp.c_str());
                temp = "";
                break;
            }
        }
        temp+=input[i];
//        std::cout << temp << " ";
    }
    std::cout << one << " " <<two << " " << three << " " << four << "\n";
    return calculate(one, two,three, four);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << formatter("(-79, 54) (-40, -26)") << " \n";
    
//    std::cout << "Hello, World!\n" <<calculate(25, 4,1, -6);
    return 0;
}
/*
 
 (49, -64) (-8, 12)
 (-79, 54) (-40, -26)
 (-57, -13) (-43, 35)
 (34, -88) (10, -56)
 (-22, -68) (-27, -56)
 (-41, -80) (-9, -56)
 (25, 4) (1, -6)
 (-47, -32) (16, -16)
 (47, 43) (-25, -11)
 (-57, 64) (-21, 37)
 
 */
