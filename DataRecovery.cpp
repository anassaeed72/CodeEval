//
//  main.cpp
//  DataRecovery
//
//  Created by Anas Saeed on 19/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/140/

#include <iostream>
#include <vector>
class KeyValuePairs{
public:
    std::string value;
    int key;
};

bool check(KeyValuePairs a,KeyValuePairs b){
    if (a.key < b.key) {
        return true;
    }
    return false;
}
void parser(std::string input){
    std::string temp;
    std::vector<std::string> strings;
    std::vector<KeyValuePairs> indexes;
    bool which = true;
    int count = 0;
    std::string last;
    for ( auto x: input){
        if (x == ';') {
            strings.push_back(temp);
            temp = "";
//            KeyValuePairs t;
//            t.key = atoi(temp.c_str());
//            t.value = strings[0];
            which = false;
            continue;
        }
        if (x == ' ') {
            if (which) {
                strings.push_back(temp);
            } else{
                KeyValuePairs t;
                t.key = atoi(temp.c_str());
                t.value = strings[count++];
                indexes.push_back(t);
            }
            temp = "";
            continue;
        }
        temp+=x;
    }
    KeyValuePairs t;
    t.key = atoi(temp.c_str());
    t.value  = strings[count];
    indexes.push_back(t);

    std::sort(indexes.begin(), indexes.end(),check);
    bool done;
    for (int i = 0;i < indexes.size()-1;i++){
        if (indexes[i].key != i+1 && done == false) {
            std::cout << strings[strings.size()-1] << " ";
            done = true;
        }
        std::cout <<indexes[i].value <<" ";
    }
    if (done) {
        std::cout << indexes[indexes.size()-1].value <<"\n";
    } else {
        std::cout << indexes[indexes.size()-1].value <<" "<< strings[strings.size()-1] <<"\n";
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    parser("2000 and was not However, implemented 1998 it until;9 8 3 4 1 5 7 2");
    parser("programming first The language;3 2 1");
    parser("programs Manchester The written ran Mark 1952 1 in Autocode from;6 2 1 7 5 3 11 4 8 9");
    return 0;
}
