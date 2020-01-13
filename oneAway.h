//
// Created by Shweta on 1/13/2020.
//

#ifndef ONEAWAY_H
#define ONEAWAY_H

#include <string>

bool isOneAway (std::string str1, std::string str2){
    int size1 = str1.size();
    int size2 = str2.size();
    //if string is empty return true
    if(str1.empty() && str2.empty())
        return false;
    int trigger = 0;
    //counter for string 2
    int j = 0;
    //go over both the strings and check for insert remove and replace in one sweep.
    //if next char of str2 is equal to current char of str1 then its a check for insert
    //if next char of str1 is equal to current char of str2 then its a check for remove
    //if the next chars in the strings do not match then its a check for replace
    for(int i = 0; i < size1;){
        if(str1[i] != str2[j]){
            trigger++;
            if(trigger > 1)
                return false;
            if(str2[j+1] == str1[i])
                j++;
            if(str1[i+1] == str2[j])
                i++;
            //if next chars do not match then its a replace, increment both the chars on both strings
                i++;
                j++;
        }
        else{
            i++;
            j++;
        }
    }
    return true;
}
#endif //ONEAWAY_H
