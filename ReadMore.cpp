//
//  main.cpp
//  ReadMore
//
//  Created by Anas Saeed on 14/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
std::string formatter(std::string input){
    if (input.length() <= 55) {
        return input;
    }
    std::string output;
    int max = 39;
    for (;max>=0;max--){
        if (input[max] == ' ')
            break;
    }
    for (int i = 0; i < max; i++) {
        output+=input[i];
    }
    return output+"... <Read More>";
}
int main(int argc, const char * argv[]) {
    std::cout << formatter("Amy Lawrence was proud and glad, and she tried to make Tom see it in her face - but he wouldn't look.") <<"\n";
    std::cout << formatter("Tom was tugging at a button-hole and looking sheepish.") << "\n";
    std::cout << formatter("Two thousand verses is a great many - very, very great many.") <<"\n";
    std::cout << formatter("Tom's mouth watered for the apple, but he stuck to his work.") <<"\n";
    return 0;
}
