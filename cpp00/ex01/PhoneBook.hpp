# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private: 
        Contact contacts[8];
        
    public:
        void    fill_contact(int index);
        void    search_contact(int end);
};

#endif