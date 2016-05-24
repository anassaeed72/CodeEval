//
//  main.cpp
//  StackImplementation
//
//  Created by Anas Saeed on 20/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//  https://www.codeeval.com/open_challenges/9/

#include <iostream>
#include <vector>
std::vector<int> myvec;
int numberOfElements = 0;
void push(int element){
    myvec.push_back(element);
    numberOfElements++;
}
int pop(){
    numberOfElements--;
    int temp = myvec[numberOfElements];
    numberOfElements--;
    return temp;
}
void parser(std::string input){
    myvec = {};
    bool printPermission = false;
    std::string temp;
    std::vector<std::string> vec;
    for (auto x: input){
        if (x ==' ') {
                push(atoi(temp.c_str()));
                temp = "";
                continue;
        }
        temp+=x;
    }
        push(atoi(temp.c_str()));

    while (numberOfElements>2) {
        std::cout << pop() <<" ";
    }

    std::cout << pop() << "\n";
}
int main(int argc, const char * argv[]) {

//    parser("-39 -31 100 94 -86 -59 79 -29 -36 -18 64 66 60 -72 -87 69 15 63 -3 -91 88 20 -40 62 -92 84 -100 -91 -44 49 89 76 23 30 -58 74 46");
    parser("10 -1 -3 -5");
//    parser("1");
//    parser("1 2");
//    parser("10 -2 3 4 5 786876876876876876986876");
    return 0;
}

/*
 -10 34 66 -59 67 13 -55 42 -92 83 34 46 90 -57 99 -77 79 16 96 -68 90 21 -61 73 84 58 -65 -60 85 66 -58 69 -27 34 -17 87 40 66 59 8 59 -75 -14 -89 -55 20 -34 -9 92 82 -66 68 -66 -29
 
 
 27 -60 -90 77 -71 -81 -87 26 82 -88 67 86 -54 -89 85 52 25 -90 -84 -15 26 -58 -96 -81 -33 51 20 45 -46 -60 44 80 -77 -63 37 -73 51 56 -22 56 -31 54 93
 
 
 -96 27 84 82 -11 17 37 -16 -13 -77 77 91 -77 -67 30 93 53 -85 -25 20 -32 -19 83 -48 0 84 1 -84 -7 79
 
 
 -34 -26 -56 2 -55 -2 15 -67 47 35 -92 -56 -1 3 -41 61 83 63 -67 -67 9 42 79 -94 69 -48 25 -90 -3 -70 13 90 -3 -25 54 13 -77 -19 -63 -70 -61 -74 -77 4 29 -38 23 -78 32 85 -56 -19
 
 
 -10 -48 -56 74 75 18 -90 -81 26 79 73 55 26 52 79 76
 
 
 11 58 -72 75 -61 -82 57 -95 -97 -57 -6 10 -99 -33 68 9 -4 -37 -70 35 -22 -40 38 87 92 41 -61 79 -43 -46 -99 4 -85 -68 80 42 40 76 -89 -62 -94 30 100 6 -31 96 -59 61 73 -83 8 14 -41 -58 58 63 -6 88 96 52 -98 -12 -46 69 -81 -34
 
 
 35 9 49 -31 -77 95 -73 -7 -69 80 46 -93 4 24 -37 -50 72 -39 -30 7 -75 52 -38 18 32 -85 28 98 -63 -88 -7 -36 69 57 3 75 -80 94 36 74 -54 -37 -28 51 -38 78 15 14 63 -26 0 -66 50 -39 -6 -24 -4 -95 31 23 -49 -66 37 -100 4 23 -66 62 47 -68 -49 58 44 3
 
 
 95 -41 -17 67 1 -50 32 42 -26 91 20 -70 2 42 -98 36 84
 
 
 -34 89 88 19 12 52 -89 16 47 -68
 
 
 10 20 30 40
 
 
 72 -79 95 82 67 -68 -87 9 37 -90 -30 8 76 64 -72 0 -61 -83 -32 22 -86 46 -5 -14 100 19 -73 -58 -48 36 -3 -42 90 96 69 -68 2 -75 -6 -17 -71 57 52 77 92 37 -16 22 70 -16 18 -69 53 82 54 -7 -70 -88 -58 -90 -89 17 39 87 -5 -45 34 39 -30 -61 68 96 -97 55 41 35 -54 -41 51 -33 75 94 4 -15 -58 88 96 68 28 -25 -81 -61 -86 -47 85
 
 
 -60 -52 -53 24 -41 87 63 -63 25 -99 1 -69 -1 -94 34 91 -59 81 -18 66 85 -50 27 35 38 -85 -30 -48 -57 14 -86 -83 92 94 65 88 55 -81 49 41 -75 -15 39 -25 -64 -70 59 -29 86 23 24 40 -2 -77 -86 82 12 -84 92 58 99 15 -72 87 -52 -83 21
 
 
 45 49 0 76 -100 -99 -84 12 -62 20 35 36 6 -72 42 -93 41 26 -22 77 -78 -85 5 -30 53 12 -69 -61 -1 -72 97 -3 -10 2 35 -92 -65 -31 -73 -9 100 -97 17 39 -24 25 70 -24 -37 -13 18 6 24 10 33 40 -51 -19 20 21 -85 74 -98 13 -82 34 -65 -45 -71 -41 16 -81 36 96 7 -9 -92 12 23 85 -42 30 -99 3 95 -40 -54 88
 
 
 -14 -54 53 6 71 -33 -13 -30 96 -2 83 41 0 61 -37 -33 34 -29 -78 -8 54 28 23 -65 -53 -82 -97 -75 -6 -44 -12
 
 
 -82 -33 -31 -25 -18 44 -18 56 77 30 -91 71 -96 71 80 6 -81 -63 -7 30 45 -69 -9 45 86 -55 -53 -58 84 8 -50 -47 -84 3 -13 66 95 -33 70 -94 22 -53 -69 90 -31 6 -99 44 83 -27 -50 42 100 -21 -12 -44 23 12 40 85 -49 33 -23 100 73 -52 72 80 -57 94 94 55 92 13 -59 62 -39 -67 22 -50 29 23 -46 -58 -19 91 -53 1 66 48 -41 -59 68 -78
 
 
 1 2 3 4
 
 
 69 60 -58 84 -34 -66 -83 -95 57 -44 51 -76 42 38 -79 96 10 -75 42 3 -39 -91 41 -32 -25 -68 15 12 47 82 78 7 95 37 68 -38 -81 26 -18 37 -64 34 2 -51 17 70 55 87 17 -74 -43 10 -70 60
 
 
 -64 -14 -61 -68 94 -1 -73 -77 -52 52 -13 42 -88 -44 41 90 -18 -41 -68 17 83 -7 41 -2 -95 77 -73 -49 -60 -61 -64 76 -73 -17 0 -21 19 62 -94 40 59 -45 -4 20 68 25 68 56 -99 -98 66 -24 -32 -94 -9 -74 10 -92 58 35 72 2 40 73 -84 15 22 41 -77 68 -44 -70 8 67 30 -74 4 10 -8 -59 -8 -79 81 -10 80 0 44 35 -63 60 -47 -42 -3 45 -16 -78 -76 47 75
 
 
 13 -52 41 -31 -5 -1 12 53 -1 21 79
 
 
 -47 -23 13 44 96 -7 81 -84 -69 72 74 -8 83 57 10 97 -38 55 -33 81 -39 -72 71 -84 -10 3 89 -3 32 94 15 -83 23 -15 58 47 -70 -65 -20 70 67 -72 96 -56 30 7 48 34 91 -14 17 85 49 31 47 4 89 -70 20 65 8 -3 -55 4 1 55 27
 
 
 10 -1
 
 
 -90 51 -81 89 58 -44 93 2 -62 4 -19 -9 -87 92 21 -30 21 81 66 5 -83 -89 85 41 87 -95 100 -40 8 85 85 -61 -22 -29 13 -24 -77 -67 70 -57 39 -93 -67 17 22 -94 -44 74 -96 -12 -63 -79 61 -100 47 -23 -88 74 70 -86 23 1 75 -66 -25 -74 -82 -94 -56 -87 76 36 -76 -21 70 -76 83 67 -28 52 32 -10 3 80 54 -36 -38 -21 32 -97 -13 -8 -18 68
 
 
 24 2 65 -21 -60 98 0 97 68 -54 21 -55 39 7 -46 -82 -26 43 -15 -86 -67 -49 78 -13 35 -45 3 88 -27 -91 83 -34 65 -13 -98 -27 28 -98 -60 -32 27 -60 97
 
 
 14 -73 -55 77 28 -28 49 35 29 -44 24 -11 11 26 24 -88 -32 22 32 47 -39 72 -14 -18 15 41 81 -97 -86 3 -81 43 -37 -10 84 -52 -83 7 -35 -73 81 -45 28 -66 -52 -87 89 90 -25 -66 -5 83 -78 92 -41 24 -33 43 74 -27 22 81 11
 
 
 -59 43 -7 -55 -96 40 -48 -50 72 -80 28 -7 85 -87 12 83 -11 88 49 71 -96 -79 -63 -19 -16 73 -86 -13 56 -20 8 1 47 37 -77 -36 -23 28 51 -86 -68 36 -22 7 -40 -13 22 -52 -46 -68 -90 57 -46 -73 37 -69 53 26 -22 92 50 92 -28 -26 63 -86 -83 97 0 80 -87 96 78 36 33 -81 -99 10
 
 
 -75 -45 -58 -63 -49 13 90 -72 -63 -91 19 -76 23 -71 -80 3 60 -26 52 -83 -32 26 -96 -60 4 -75 14 40 -99 13 -90 44 50 -75 65 -56 31 -56 -74 -56 92 45 21 -85 36
 
 
 69 42 -80 -28 53 -57 15 -28 -100 67 74 -59 36 -47 -66 -84 -95 -19 -93 -10 -26 7 93 -69 26 -41 48 86 10 51 64 40 52 21 39 -28 60 -57 93 78 83 -45 -56 -29 -86 3 -99 -29 41 -1 25 -96 -51 -71 -86 13 -13 -44 -59 -43 -70 -50 6 29 -75 82 50 93 -91 -45 -12 90 60 -92 -74 -22 -52
 
 
 -56 -56 18 52 1 -81 67 -36
 
 
 40 -45 52 -61 -69 14 -13 17 74 -73
 
 
 -39 -31 100 94 -86 -59 79 -29 -36 -18 64 66 60 -72 -87 69 15 63 -3 -91 88 20 -40 62 -92 84 -100 -91 -44 49 89 76 23 30 -58 74 46
 
 
 51 -71 -23 -66 -7 -21 14 -100 59 -13 -92 -5 -26 90 9 97 0 -59 53 -73 -55 66 -93 -71 93 1 -41 59 -41 100 -44 56 -79 -62 -11 -91 4 -22 -70 -25 -9 -47 -15 52 -48 -82 21 -21 12 -74 31 -8 43 -34 41 22 -10 -30 5 24 17 -44 -57 30 12 -64 -20 -59 -68 17 41 -85 49 -73 62 0 -34 -47 -32 32 83 80 25
 
 
 10 100 1 2 5 -9 0
 
 
 -44 25 33 -60 -37 72 -31 -95 -13 -87 -28 38 -57 14 81 -44 63 -54 -29 -7 56 47 -68 -86 -58 -54 -18 64 8 -73 -6 55 78 61 -28 -96 -16 36 11 30 -23 -85 -64 53 19 65 -99 77 40 -53 -100 -66 70 -37 88 -76 45 -28 -34 -60 -51 -64 -80 42 -98 -54 79 66 -61 -81 72 -32 -27 -54 68 45 -59 96 35 -5 -35 -16 -50 6 -65 -45 -17 -25 5 68 28
 
 
 100 -18 -65 93 13 -87 -25 20 34 42 -87 -34 33 9 67 -36 -51 -62 -26 41 24 86 62 30 78 28 -35 39 69 -5 78 5 -64 -20 46 4 -29
 
 
 -58 -20 60 -54 60 -80 13 -39 68 -99 38 92 -27 -50 -80 95 92 -49 24 78 99 97 81 98 -64 61 -99 -67 16 93 44 60 -70 -48 2 79 62 35 -77 73 90 -78 -80 -78 -80 45 -46 -68 -56 59 -16 70 -3 -77 -74 -13 -32 -30 34 -4 47 -10 69 -24 81 -79 0 39 -37 -50 -65 -22 -6 95 72 -48 -28 -6 -96 -58
 
 
 97 -9 95 14 17 87 -99 56 -23 -49 74 86 -1 50 30 71 -40 -38 71 -82 -64 -70 14 -8 60 72 -22 -30 -26 52 84 -8 56 -5 98 -60 -71 -67 -2 -71 -62 58 -27 16 29 94 63 -57 22
 
 
 -18 12 -48 -54 7 -45 55 2 -42 -98 -17 -20 100 -16 30 41 4 87 -32 29 -10 -94 45 -47 -90 71 96 -16 -86 -49 93 16 -87 55 -41 49 -83 -2 -53 85 58 80 85 53 -3 -51 96 -48 46 -42 66 -29 -17 -21 81 22 -8 -19 50 -28 3 -85 77 -23 3 78 75 -88 26 -52 -2 30 31 96 80
 
 
 85 55 -11 -48 53 18 67 72 -66 61 -92 69 -86 -86 19 31 -93 -84 5 71 77 -72 -31 54 -86 19 -19 7 98 76 -74 -20 28 85 85 10 -34 67 79 66 -25 -29 14 -19 -15 -45 -64 -13 53 -1 -54 -4 16 -17 -98 -43 57 -35 -8 2 -61 -87 -31 -92
 
 
 94 18 64 -18 -61 63 69 49 -47 45 60 -75 -100 -77 93 99 -74 -93 -68 -74 -39 -74 54 -9 94 74 -16 -59 6 7 78 -16 30 4 -79 51 92 76 61 -72 -6 21 -67 -2 -31 -12 -25 -90 -75 -80 58 35 -79 -85
 
 
 -81 19 0 93 33 88 50 31 -61 90 -52 -36 5 -39 62 -25 -52 40 -25 -67 -52 -13 68 -2 -34 -75 73
*/
