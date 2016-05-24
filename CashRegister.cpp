//
//  main.cpp
//  CashRegister
//
//  Created by Anas Saeed on 30/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/54/

#include <iostream>
#include <vector>
class Curruency{
public:
    std::string name;
    double value;
    Curruency(std::string _name,double _value){
        name = _name;
        value = _value;
    }
};
Curruency temp1("ONE HUNDRED",10000);
Curruency temp2("FIFTY",5000);
Curruency temp3("TWENTY",2000);
Curruency temp4("TEN",1000);
Curruency temp5("FIVE",500);
Curruency temp6("TWO",200);
Curruency temp7("ONE",100);
Curruency temp8("HALF DOLLAR",50);
Curruency temp9("QUARTER",25);
Curruency temp10("DIME",10);
Curruency temp11("NICKEL",5);
Curruency temp12("PENNY",1);
std::vector<Curruency> vec = {temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12};
void finder(double priceDouble, double paidDouble){
    double temp = paidDouble*100;
    int paid = temp;
    temp  = priceDouble*100;
    int price = temp;
    if (price>paid) {
        std::cout <<"ERROR\n";
        return;
    }
    if (price == paid) {
        std::cout <<"ZERO\n";
        return;
    }
    double iPaid = 0;
    int index = 0;
    int iterations = 0;
    std::string oneBack = "";
//    int iterations = 0;
    while (price+iPaid<paid) {

        if (paid-price-iPaid >=vec[index].value) {
            if (oneBack == "") {
                oneBack =  vec[index].name;
            } else{
                std::cout << oneBack <<",";
                oneBack =  vec[index].name;
            }
            iPaid+=vec[index].value;
        } else {
            index++;
            if (index>11) {
                index--;
            }
        }
        
        
    }
    std::cout << oneBack;
    std::cout <<"\n";
}
void parser(std::string input){
    double price, paid;
    std::string temp;
    for ( auto x: input){
        if (x ==';') {
            price = atof(temp.c_str());
            temp = "";
            continue;
        }
        temp+=x;
    }
    paid = atof(temp.c_str());
    finder(price, paid);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    parser("30.15;30.15");
//    parser("368;472.15");
//    parser("349;349");
//    parser("398.50;400.25");
//    parser("209.56;306.56");
    parser("130;202.95");
//    parser("72;20.93");
    parser("227.92;309.17");
//    parser("201.06;219.06");
//    parser("196;196");
//    parser("198;264.47");
//    parser("296.17;297");
//    parser("279.72;173.70");
//    parser("63;89.35");
//    parser("100;100");
//    parser("339.24;479.70");
//    parser("15.94;16.00");
//    parser("63.00;89.00");
//    parser("237.29;237.29");
//    parser("63.00;89.35");
    return 0;
}






/*


 30.15;30.15
 368;472.15
 349;349
 398.50;400.25
 209.56;306.56

 130;202.95
 72;20.93
 227.92;309.17
 201.06;219.06
 196;196
 198;264.47
 296.17;297
 279.72;173.70
 63;89.35
 100;100
 339.24;479.70
 15.94;16.00
 63.00;89.00
 237.29;237.29
 63.00;89.35








*/
