//
//  main.cpp
//  Endianness
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>

void checkEndianness(){
    int num = 1;
    if(*(char *)&num == 1)
    {
        std::cout <<"LittleEndian\n";
    }
    else
    {
        std::cout << "BigEndian\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    checkEndianness();
    return 0;
}
