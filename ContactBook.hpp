#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "./Contact.hpp"
#include "./utils.h"
class ContactBook
{
    std::ifstream fileObject;
    std::map<std::string, Contact> dictionary;
    std::string filePath;

public:
    void displayContactBook();
    inline ContactBook(const std::string _filepath)
    {
        filePath = "./ContactsStore/" + _filepath + ".csv";
        fileObject = std::ifstream(filePath);
        std::string str = "";
        while (getline(fileObject, str))
        {
            trimUnecessities(str);
            std::vector<std::string> individualContactStrings;
            splitString(str, ' ', individualContactStrings);

            if (individualContactStrings.size() > 2)
            {
                Contact c(individualContactStrings[0], individualContactStrings[1], individualContactStrings[2]);
                dictionary.insert({ individualContactStrings[0], c });
            }
        }
    }
};

#endif