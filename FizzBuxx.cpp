//
//  main.cpp
//  FizzBuxx
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
std::vector<std::string> convertor(int x, int y,int limit){
    std::vector<std::string> output;
    for ( int i = 1;i <= limit;i++){
        if ( i%x ==0 && i%y == 0 ){
            output.push_back("FB");
        }
        else if ( i%x == 0 ){
            output.push_back("F");
        }
        else if (i%y == 0 ){
            output.push_back("B");
        }else {
            output.push_back(std::to_string(i));
        }
    }
    return output;
}


int main(int argc, char* argv[]){
    std::ifstream infile(argv[1]);
    std::string line = "9 19 22";
//    while (std::getline(infile, line)) {
        int x,y,limit;
        std::string temp;
        int count = 0;
        for ( auto xx: line){
            if ( xx == ' '){
                count++;
                if ( count == 1 )
                    x = atoi(temp.c_str());
                if (count == 2 )
                    y = atoi(temp.c_str());                
                temp = "";
            }
            temp+=xx;
        }
       limit = atoi(temp.c_str());
//        std::cout << line;
    std::cout << x <<" " << y << " " << limit << "\n";
        std::vector<std::string> result = convertor(x, y, limit);
        for ( auto x: result){
            std::cout << x << " ";
        }
        std::cout << "\n";
//    }
}
