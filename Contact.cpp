#include <iostream>
#include "./Contact.hpp"

Contact::Contact(const std::string _name, const std::string _phoneNumber, const std::string _email) {
        name = _name;
        phoneNumber = _phoneNumber;
        email = _email;
}

void Contact::displayContact()
{
        std::cout << name << " " << phoneNumber << " " << email << std::endl;
}

std::string Contact::getName()
{
        return name;
}

std::string Contact::getPhoneNumber()
{
        return phoneNumber;
}
std::string Contact::getEmail()
{
        return email;
}