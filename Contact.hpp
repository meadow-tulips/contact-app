#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>

class Contact {
    std::string phoneNumber;
    std::string email;
    std::string name;

 
    public:
         Contact(const std::string _name, const std::string _phoneNumber, const std::string _email = "");
         void displayContact();
         std::string getName();
         std::string getPhoneNumber();
         std::string getEmail();
   };

#endif