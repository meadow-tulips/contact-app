#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "./Contact.hpp"
class ContactBook
{
    std::map<std::string, Contact> dictionary = std::map<std::string, Contact>();
    std::string filePath;

public:
    ContactBook(const std::string _filepath);
    ~ContactBook();
    void addNewContact(Contact);
    void deleteContactByName(std::string name);
    void displayContactBook();
    void listContactsByName(std::string);
};

#endif