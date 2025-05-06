#include "./ContactBook.hpp"

void ContactBook::displayContactBook() {
    for(auto it = dictionary.begin(); it!= dictionary.end(); it++) {
        std::cout<<it->first<<std::endl;
    }
}