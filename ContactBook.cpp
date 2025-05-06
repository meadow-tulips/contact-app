#include "./utils.h"
#include "./ContactBook.hpp"

void ContactBook::displayContactBook()
{
    for (auto it = dictionary.begin(); it != dictionary.end(); it++)
    {
        std::cout << it->first << std::endl;
        it->second.displayContact();
    }
}

void ContactBook::addNewContact(Contact c)
{
    dictionary.insert({c.getName(), c});
}

void ContactBook::deleteContactByName(std::string name)
{
    dictionary.erase(name);
}

void ContactBook::listContactsByName(std::string name)
{
    if (dictionary.contains(name))
    {
        return dictionary.at(name).displayContact();
    }
    else
    {
        std::cout << "No Contact found!" << std::endl;
    }
}

ContactBook::ContactBook(const std::string _filepath)
{
    filePath = "./ContactsStore/" + _filepath + ".csv";
    std::ifstream fileObject(filePath);
    std::string str = "";
    while (getline(fileObject, str))
    {
        trimUnecessities(str);
        std::vector<std::string> individualContactStrings;
        splitString(str, ' ', individualContactStrings);

        if (individualContactStrings.size() > 2)
        {
            Contact c(individualContactStrings[0], individualContactStrings[1], individualContactStrings[2]);
            dictionary.insert({individualContactStrings[0], c});
        }
    }
}

ContactBook::~ContactBook()
{

    std::ofstream fstream(filePath);
    for (auto it = dictionary.begin(); it != dictionary.end(); it++)
    {
        fstream << it->second.getName() + " " + it->second.getPhoneNumber() + " " + it->second.getEmail() + "," << std::endl;
    }
}
