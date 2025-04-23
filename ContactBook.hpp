#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <fstream>
#include <map>
#include "./Contact.hpp"
class ContactBook
{
    std::ifstream fileObject;
    std::map<std::string, Contact> dictionary;
    std::string filePath;

public:
    ContactBook(const std::string _filepath)
    {
        filePath = "./ContactsStore/" + _filepath + ".csv";
        fileObject = std::ifstream(filePath);
        std::string str = "";
        while(getline(fileObject, str)) {
            std::cout<<str<<std::endl;
        }
    }
};

#endif