#include "PhoneBook.hpp"
#include <iomanip>

void    PhoneBook::search_contact(int end){
    int index;

    index = 0;
    while (index < end)
    {
        std::cout << index << "        |";
        std::cout << std::setw(10) << contacts[index].getFirstName() << "|"
         << std::setw(10) << contacts[index].getLastName() << "|" << std::setw(10) 
         << contacts[index].getNickName() << "|" << std::setw(10) << contacts[index].getPhoneNumber() 
         << "|" << std::setw(10) << contacts[index].getDarkestSecret() << std::endl;
         index++;
    }
}

std::string Contact::getFirstName(){
    return (first_name);
}

std::string Contact::getLastName(){
    return (last_name);
}

std::string Contact::getNickName(){
    return (nickname);
}

std::string Contact::getPhoneNumber(){
    return (phone_number);
}

std::string Contact::getDarkestSecret(){
    return (darkest_secret);
}
