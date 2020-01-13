//There are three types of edits that can be performed on strings: insert a character, remove a character, or replace
//a character. Given two strings, write a function to check if they are one edit (or zero edits) away.
// EXAMPLE
// pale, ple -> true
// pales, pale -> true
// pale, bale -> true
// pale, bake -> false
//going over each char in the string will give this a runtime of: n where n is the size of string 1 in worst case.
#include <iostream>
#include <string>
#include "oneAway.h"
int main() {
    std::string str1(""), str2("");
    while(str1 != "$" || str2 != "$"){
        std::cout << "Enter string 1(or press $ to exit): ";
        std::cin >> str1;
        std::cout << "Enter string 2(or press $ to exit): ";
        std::cin >> str2;
        if(isOneAway(str1, str2))
            std::cout << "True\n";
        else
            std::cout << "false\n";
    }
    std::cout << "Thank You!" << std::endl;
    return 0;
}
