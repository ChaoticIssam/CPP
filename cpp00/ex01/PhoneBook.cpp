#include "PhoneBook.hpp"

void    PhoneBook::fill_contact(int index)
{
    int count;
    int lock;
    std::string line;
 
    count = 0;
    while(count < 5){
        lock = 0;
        if (count == 0)
            std::cout << "enter First Name: ";
        else if (count == 1)
            std::cout << "enter Last Name: ";
        else if (count == 2)
            std::cout << "enter Nick Name: ";
        else if (count == 3)
            std::cout << "enter Phone Number: ";
        else if (count == 4)
            std::cout << "enter Darkest Secret: ";
        std::getline(std::cin, line);
        if (std::cin.eof())
            exit(0);
        if (count == 0 && !line.empty()){
            contacts[index].setFirstName(line);
            lock = 1;
        }
        else if (count == 1 && !line.empty() ){
            contacts[index].setLastName(line);
            lock = 1;
        }
        else if (count == 2 && !line.empty() ){
            contacts[index].setNickName(line);
            lock = 1;
        }
        else if (count == 3 && !line.empty() ){
            contacts[index].setPhoneNumber(line);
            lock = 1;
        }
        else if (count == 4 && !line.empty() ){
            contacts[index].setDarkestSecret(line);
            lock = 1;
        }
        if (lock == 1)
            count++;
    }
}

void    Contact::setFirstName(std::string line){
    first_name = line;
}

void    Contact::setLastName(std::string line){
    last_name = line;
}

void    Contact::setNickName(std::string line){
    nickname = line;
}

void    Contact::setPhoneNumber(std::string line){
    phone_number = line;
}

void    Contact::setDarkestSecret(std::string line){
    darkest_secret = line;
}