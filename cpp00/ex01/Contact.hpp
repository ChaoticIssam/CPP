# ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        public:
            //getter ans=d setter
            std::string getFirstName();
            std::string getLastName();
            std::string getNickName();
            std::string getPhoneNumber();
            std::string getDarkestSecret();
            void        setFirstName(std::string value);
            void        setLastName(std::string value);
            void        setNickName(std::string value);
            void        setPhoneNumber(std::string value);
            void        setDarkestSecret(std::string value);
};

#endif