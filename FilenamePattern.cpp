//
//  main.cpp
//  FilenamePattern
//
//  Created by Anas Saeed on 28/03/2015.
//  Copyright (c) 2015 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <regex>
#include <string>
bool checker(std::string one1, std::string two1){
    std::string one (one1);
    std::regex two (two1);
    if (std::regex_match(one.begin(),one.end(),two)){
        return true;
    }
    return false;
}
std::string rest(std::string input, int index){
    std::string output;
    for (index++; index < input.length(); index++) {
        output+=input[index];
    }
    return output;
}
bool patternMatcher(std::string one, std::string two){
    if (two.length() == 0) {
        return true;
    }
    int first = 0;
    if (two[0] == '?' || two[0] == '*') {
        first = 1;
    }

    for (int i = 0; i < one.length(); i++) {
        if (one[i] == two[first]) {
            for (int j = first; j < two.length(); j++) {
                
                if (two[j] == '?') {
                    continue;
                }
                if (two[j] == '*') {
                    return patternMatcher(one, rest(two, j));
                }
                else {
                    if (one[i+j-first] != two[j]) {
                        std::cout << one[i+j] <<" " <<  two[j];
                        return false;
                    }
                }
            }
                return true;
        }
    }
    return false;
}
void finder(std::string toSearch, std::vector<std::string> files){
    for ( auto x: files){
        if (checker(x, toSearch)) {
            std::cout << x <<"\n";
//            return;
        }
    }
    std::cout <<"-\n";
}
void parser(std::string input){
    std::string toSearch;
    std::string temp;
    int i = 0;
    for (; i < input.length(); i++) {
        if (input[i] == ' ') {
            break;
        }
        toSearch +=input[i];
    }
    std::vector<std::string> files;
    for (i++; i < input.length(); i++) {
        if (input[i] == ' ') {
            files.push_back(temp);
            temp = "";
            continue;
        }
        temp+=input[i];
    }
    files.push_back(temp);
    finder(toSearch, files);

}




int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    parser("*7* johab.py gen_probe.ko palmtx.h macpath.py tzp dm-dirty-log.h bh1770.h pktloc faillog.8.gz zconf.gperf");
//    parser("*[0123456789]*[auoei]* IBM1008_420.so zfgrep limits.conf.5.gz tc.h ilogb.3.gz limits.conf CyrAsia-TerminusBold28x14.psf.gz nf_conntrack_sip.ko DistUpgradeViewNonInteractive.pyc NFKDQC");
//    std::cout << patternMatcher("ab1bca", "*[01]*[au]");
//    parser("*7* johab.py gen_probe.ko palmtx.h macpath.py tzp dm-dirty-log.h bh1770.h pktloc faillog.8.gz zconf.gperf");
//    parser("*.??? max_user_watches arptables.h net_namespace Kannada.pl menu_no_no.utf-8.vim shtags.1 unistd_32_ia32.h gettext-tools.mo ntpdate.md5sums linkat.2.gz");
//    parser("*.pdf abdfjaksldffjklas.pdf");
    parser("(*u*) subject");
    return 0;
}

//

/*
 if (two[first] == '[') {
 
 bool presnt = false;
 for (int i = 0; i < one.length(); i++) {
 for (int k =first+1; k < two.length(); k++) {
 if (two[k] == ']') {
 break;
 }
 if (one[i] == two[k]) {
 presnt = true;
 first  = i++;
 break;
 }
 }
 if (presnt) {
 break;
 }
 }
 if (presnt == false) {
 return false;
 }
 }
 if (two[first] == '?' || two[first] == '*') {
 first++;
 }

 */

/*

 if (two[j] == '[') {
 bool presnt = false;
 for (int k = j+1; k < two.length(); k++) {
 if (two[k] == ']') {
 if (presnt) {
 j = k;
 }
 break;
 }
 if (one[i+j-first] == two[k]) {
 presnt = true;
 }
 }
 if (presnt == false) {
 return  false;
 }
 }

*/
