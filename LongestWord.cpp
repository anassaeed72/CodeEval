
#include <iostream>
#include <fstream>
using namespace std;
string lowercase(string input){
    string  output;
    for ( int i = 0;i < input.length();i++){
        if (input[i]<91 && input[i]>64){
            char temp = input[i] +32;
            output+=temp;
        } else {
            output+=input[i];
        }
    }
    return  output;
}
int main(int argc, char *argv[]) {
    std::cout << lowercase("AlwaYS ALIvE");
    return 0;
}
