//
//  main.cpp
//  RoadTrip
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
void parser(std::string line){
    std::string temp;
    std::vector<int> vec;
    bool add = false;
    for ( auto x: line){
        if (x == ';') {
            vec.push_back(atoi(temp.c_str()));
            temp = "";
            add = false;
            continue;
        }
        if (add) {
            temp+=x;
        }
        if (x == ',') {
            add = true;
        }
    }
    std::sort(vec.begin(), vec.end());
    int last = 0;
    for ( int i = 0;i< vec.size() -1;i++){
        std::cout << (vec[i]-last) << ",";
        last = vec[i];
    }
    std::cout << (vec[vec.size()-1] -last) <<"\n";
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    parser("Rkbs,5453; Wdqiz,1245; Rwds,3890; Ujma,5589; Tbzmo,1303;");
    return 0;
}
