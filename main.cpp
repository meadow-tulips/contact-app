#include <iostream>
#include "utils.h"
#include "./Contact.hpp"
#include "./ContactBook.hpp"

int main()
{

    ContactBook phoneBook("MyPhoneBook");
    int x = 0;

    while (true)
    {
        std::cout << "Contact Book Version 1.0" << std::endl;
        std::cout << "Press Btn to proceed" << std::endl;
        std::cout << "1 - Add a new contact" << std::endl;
        std::cout << "2 - Search for contacts by name" << std::endl;
        std::cout << "3 - Delete a contact by name" << std::endl;
        std::cout << "4 - List all contacts" << std::endl;
        std::cout << "0 - Exit" << std::endl;

        std::cin >> x;
        std::cin.ignore();

        if (x == 0)
            break;
        else if (x == 1)
        {
            std::cout << "Enter Contact details - name phoneNumber and email" << std::endl;
            std::string str;
            getline(std::cin, str);
            std::vector<std::string> inputVector;
            splitString(str, ' ', inputVector);
            if (inputVector.size() > 2)
            {
                phoneBook.addNewContact(Contact(inputVector[0], inputVector[1], inputVector[2]));
            }
        }
        else if (x == 2)
        {
            std::cout << "Enter name to search with" << std::endl;
            std::string str;
            getline(std::cin, str);
            phoneBook.listContactsByName(str);
        }
        else if (x == 3)
        {
            std::cout << "Enter contact name to delete" << std::endl;
            std::string str;
            getline(std::cin, str);
            phoneBook.deleteContactByName(str);
        }
        else if (x == 4)
        {
            std::cout << "Displaying all contacts" << std::endl;
            phoneBook.displayContactBook();
        }
    }
    return 0;
}