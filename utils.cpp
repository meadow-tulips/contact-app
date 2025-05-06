#include<string>
#include<vector>
#include <iostream>


void splitString(std::string str, char separator, std::vector<std::string> & contactStrings) {
    std::string temp = "";
    for (int i=0;i<str.length();i++) {
        if(str[i] == separator) {
            contactStrings.push_back(temp);
            temp = "";
        } else {
            temp += str[i];
        }
    }

    if(temp.length() > 0) {
        contactStrings.push_back(temp);
    }
}

void trimUnecessities(std::string& str) {
    int i = 0;
    int j = str.length() - 1;

    while(str[i] == ' ' || str[i] == ',') {
        i++;
    }
    while(str[j] == ' ' || str[j] == ',') {
        j--;
    }

    str = str.substr(i, j + 1);
}