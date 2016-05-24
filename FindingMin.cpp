//
//  main.cpp
//  FindingMin
//
//  Created by Anas Saeed on 30/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/85/

#include <iostream>
#include <set>
using namespace std;
void finder(int n, int k, int a, int b, int c, int r){
     n--;
  
    int M[200020];
    M[0] = a;
    for(int i = 1; i < k; i++) {
        M[i] = (1ll * b * M[i - 1] + c) % r;
    }
    
    set<int> st;
    for(int i = 0; i <= k; i++) st.insert(i);
    for(int i = 0; i < k; i++) st.erase(M[i]);
    
    multiset<int> dupst;
    for(int i = 0; i < k; i++) dupst.insert(M[i]);
    
    for(int i = k; i <= 2 * k; i++) {
        M[i] = *st.begin();
        st.erase(st.begin());
        
        if(i < 2 * k) {
            dupst.erase(dupst.find(M[i - k]));
            if(M[i - k] <= k && dupst.find(M[i - k]) == dupst.end()) {
                st.insert(M[i - k]);
            }
        }
    }
    if(n <= 2 * k) {
        cout << M[n] << endl;
    } else {
        cout << M[k + (n - 2 * k - 1) % (k + 1)] << endl;
    }

}
void parser(string input){
    string temp;
    int n,k,a,b,c,r;
    int count = 0;
    for ( auto x: input){
        if (x == ',') {
            if (count == 0) {
                n = atoi(temp.c_str());
            } else if (count == 1){
                k = atoi(temp.c_str());
            } else if (count == 2 ){
                a = atoi(temp.c_str());
            } else if (count == 3){
                b = atoi(temp.c_str());
            } else if (count == 4 ){
                c = atoi(temp.c_str());
            }
            count++;
            temp = "";
            continue;
        }
        temp+=x;
    }
    r = atoi(temp.c_str());
//    cout << n << " " << k << " "<< a << " "<< b << " " << c << " " << r;
    finder(n, k, a, b, c, r);
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout << "Hello, World!\n";
    
    parser("143,128,40341,30123,3597,11327");
    parser("224,71,8754,20704,8737,5739");
    parser("186,142,21678,1477,46181,5142");
    parser("148,21,14316,47466,21257,16273");
    parser("142,77,38376,41057,47799,42257");
    parser("221,48,34893,29426,17937,11987");
    parser("172,89,16685,37740,36112,5407");
    parser("47,17,44936,18003,4069,12541");
    parser("107,103,19907,49268,18336,27801");
    parser("131,74,27149,15595,145,16996");
    parser("78,51,3,5,5,51230");
    parser("25,19,141,47365,1597,29390");
    parser("105,68,19854,37755,32009,1510");
    parser("33,15,22789,36646,3078,4265");
    parser("143,38,38603,22182,15825,3648");
    parser("81,80,7336,12299,9008,39172");
    parser("258,49,32452,20416,4653,12262");
    parser("140,16,43355,38960,7244,9326");
    parser("239,90,20387,5183,11482,1585");
    parser("35,14,4499,47002,14831,44024");
    return 0;
}

/*
 143,128,40341,30123,3597,11327
 224,71,8754,20704,8737,5739
 186,142,21678,1477,46181,5142
 148,21,14316,47466,21257,16273
 142,77,38376,41057,47799,42257
 221,48,34893,29426,17937,11987
 
 172,89,16685,37740,36112,5407
 47,17,44936,18003,4069,12541
 107,103,19907,49268,18336,27801
 131,74,27149,15595,145,16996
 78,51,3,5,5,51230
 25,19,141,47365,1597,29390
 105,68,19854,37755,32009,1510
 33,15,22789,36646,3078,4265
 
 143,38,38603,22182,15825,3648
 81,80,7336,12299,9008,39172
 258,49,32452,20416,4653,12262
 140,16,43355,38960,7244,9326
 239,90,20387,5183,11482,1585
 35,14,4499,47002,14831,44024
 */
