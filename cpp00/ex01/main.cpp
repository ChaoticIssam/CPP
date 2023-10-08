#include "PhoneBook.hpp"

int main(){
    int i;
    int index;
    Contact c;
    std::string str;
    PhoneBook phone;

    index = 0;
    while (1)
    {
        std::cout << "The program only accepts ADD, SEARCH and EXIT as arguments: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            return 0;
        if (str == "ADD")
        {
            std::cout << "Adding contact..." << std::endl;
            phone.fill_contact(index);
            index++;
        }
        else if (str == "SEARCH")
        {
            std::cout << "SEARCH has been entered!" << std::endl;
            phone.search_contact(index);
        }
        else if (str == "EXIT"){
            std::cout << "EXIT has been entered!" << std::endl;
            return 1;
        }
        else{
            std::cout << "Invalid arguments!" << std::endl;
        }
        if (index == 10)
            index = 0;
    }
    return 0;
}