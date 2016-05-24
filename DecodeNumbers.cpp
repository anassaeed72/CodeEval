//
//  main.cpp
//  DecodeNumbers
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/73/

#include <iostream>
int decoder(std::string input){
    if (input == "0") {
        return 0;
    }
    int count = 1;
    for ( int i = 0;i < input.length()-1;i++){
        int one =   (int) (input[i]-'0');
        if ( one >2){
            continue;
        }
        one*=10;
        one+=(int)(input[i+1] -'0');
        if (one < 27) {
            std::string temp = "";
            for (int j = i+1; j < input.length(); j++) {
                temp+=input[j];
            }
            if (temp.length() == 1) {
                
                count++;
            } else {
                int result = decoder(temp);
                if (result < 2) {
                    count++;
                } else {
                    count+=result-1;
                }
                int two = (int) (input[i+1] -'0');
                if (two>2) {
//                    continue;
                }
                two*=10;
                two+=(int) (input[i+2]-'0');
                if (two>27) {
                    count++;
                }
//                std::cout << two <<" ";
//                std::cout <<"string is "<< temp << " decoded is  " << decoder(temp) <<"\n";
            }
        }
    }
    return count;
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    std::cout <<decoder("1111") <<"\n";
//    std::cout << decoder("319") << "\n";
    std::cout << decoder("367") << "\n";
    return 0;
}
