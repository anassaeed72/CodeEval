//
//  main.cpp
//  FlaviusJosephus
//
//  Created by Anas Saeed on 22/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/75/

#include <iostream>
#include <vector>
class Person{
public:
    int value;
    int alive;
};
std::vector<Person> vecRem(std::vector<Person> input, Person del){
    std::vector<Person> vec;
    for ( auto x: input){
        if (x.value == del.value) {
            continue;
        }
        vec.push_back(x);
    }
    return vec;
}
void generateSequenc(int limit, int jump){
    std::vector<Person> vec;
    for(int i = 0;i< limit; i++){
        Person temp;
        temp.value = i;
        temp.alive = true;
        vec.push_back(temp);
    }
    
    int killed = 0;
    int iterrations = 0;
    std::vector<int> print;
    for (int index = jump-1; killed < limit; ) {
        iterrations++;
        if (iterrations>=10) {
            break;
        }
        if (vec[index].alive) {
            vec[index].alive = false;
//            std::cout << vec[index].value << " ";
            print.push_back(vec[index].value);
            killed++;
            vec = vecRem(vec, vec[index]);
            if (killed == limit) {
                break;
            }
            index= (index+jump-1)%vec.size();
        }
    }
    for ( int i = 0;i < print.size()-1;i++)
        std::cout << print[i] << " ";
    std::cout << print[print.size()-1];
    std::cout << std::endl;
}
void parser(std::string line){
    std::string one;
    std::string two;
    for ( auto x: line){
        if (x ==',') {
            two = one;
            one = "";
            continue;
        }
        one+=x;
    }
    generateSequenc(atoi(two.c_str()), atoi(one.c_str()));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    generateSequenc(5, 2);
//    generateSequenc(10, 3);
    parser("7,4");
    
    return 0;
}
