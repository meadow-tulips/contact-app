#include <iostream>
#include "./Contact.hpp"
#include "./ContactBook.hpp"

int main()
{

    Contact contact1("Ramesh", "93293339");
    contact1.displayContact();

    ContactBook phoneBook("pb1");
    return 0;
}