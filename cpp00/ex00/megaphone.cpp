#include <iostream>
#include <sstream>
#include <string>

int main(int ac, char **av){
    int i;
    int j;
    char c;

    i = 1;
    j = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < ac)
    {
        std::istringstream stream(av[i]);
        std::string line;
        std::getline(stream, line);
        j = 0;
        while (line[j])
        {
            c = std::toupper(line[j]);
            if (c != '\'' && c != '"')
                std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}