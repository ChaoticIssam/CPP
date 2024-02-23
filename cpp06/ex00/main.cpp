#include "ScalarConverter.hpp"

int main(int ac, char **av){
    // int j = 0;
    ScalarConverter A;
    if (ac == 1)
        std::cout << "Insert: was empty!!!" << std::endl;
    else if (ac > 2)
        std::cout << "Insert: lot of arguments!!!" << std::endl;
    if (ac == 2){
        std::istringstream arg(av[1]);
        std::string literal;
        std::getline(arg, literal);
        A.Convert(literal);
    }
    return 0;
}