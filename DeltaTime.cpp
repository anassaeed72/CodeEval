//
//  main.cpp
//  DeltaTime
//
//  Created by Anas Saeed on 23/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/166/

#include <iostream>
#include <iomanip>
class Time{
public:
    int hour;
    int minute;
    int second;
};
bool greater1(Time one, Time two){
    if (one.hour<two.hour) {
        return false;
    } else if(one.hour >two.hour){
        return true;
    }
    if (one.minute<two.minute) {
        return false;
    } else if(one.minute>two.minute) {
        return true;
    }
    if (one.second <two.second) {
        return false;
    } else if (one.second> two.second) {
        return true;
    }
    return true;
}
bool equal1(Time one, Time two){
    if (one.minute != two.minute) {
        return false;
    }
    if (one.hour !=two.hour) {
        return false;
    }
    if (one.second !=two.second) {
        return false;
    }
    return true;
}
void delta(Time one,Time two){
    int hour=0,minute=0,sec= 0;
    long onet = one.second+one.minute*60+one.hour*3600;
    long two1 = two.second+two.minute*60+two.hour*3600;
    long diff = onet-two1;
    sec = diff%60;
    diff/=60;
    minute = diff%60;
    diff/=60;
    hour = diff;
//    std::cout << diff << " ";
    if (hour<10) {
        std::cout <<"0";
    }
    std::cout << hour <<":";
    if (minute<10) {
        std::cout <<"0";
    }
    std::cout << minute <<":";
    if (sec<10) {
        std::cout <<"0";
    }
    std::cout << sec <<"\n";
    
}
void parser(std::string line){
    bool which = true;
    Time one,two;
    int count = 0;
    std::string temp;
    for ( auto x: line){
        if (x == ' ') {
            which = false;
            count = 0;
            one.second = atoi(temp.c_str());
            temp = "";
            continue;
        }
        if (x == ':') {
            if (which) {
                if (count == 0) {
                    one.hour = atoi(temp.c_str());
                } else if (count == 1){
                    one.minute = atoi(temp.c_str());
                }
            } else{
                if (count == 0) {
                    two.hour = atoi(temp.c_str());
                } else if (count == 1){
                    two.minute = atoi(temp.c_str());
                }
            }
            count++;
            temp = "";
            continue;
        }
        temp +=x;
    }
    two.second = atoi(temp.c_str());
    
    if (greater1(one, two)) {
        delta(one, two);
    } else {
        if (equal1(one,two)) {
            std::cout <<"00:00:00\n";
        } else {
            delta(two, one);
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    parser("14:01:57 14:01:58");
    parser("13:09:42 22:16:15");
    parser("08:08:06 08:38:28");
    parser("23:35:07 02:49:59");
    parser("14:31:45 14:46:56");
    return 0;
}
