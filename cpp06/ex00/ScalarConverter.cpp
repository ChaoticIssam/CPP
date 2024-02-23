#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    // std::cout << "Default constructor has been called." << std::endl;
}
ScalarConverter::ScalarConverter(std::string arg){
    // std::cout << "Parametrized constructor has been called." << std::endl;
    (void) arg;
}
ScalarConverter::ScalarConverter(ScalarConverter& obj){
    // std::cout << "Copy constructor has been called." <<std::endl;
    (void) obj;
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter& obj){
    // std::cout << "Copy assignement operator overload has been called." << std::endl;
    (void) obj;
    return *this;
}
ScalarConverter::~ScalarConverter(){

}

char    check_for_char(const char *arg, int len){
    for(int i = 0; i < len; i++){
        if ((!isdigit(arg[i]) && arg[i + 1]) || (!isdigit(arg[i]) && i > 0)){
            std::cout << "Error: string is not allowed." << std::endl;
            exit (1);
        }
    }
    if (!isdigit(arg[0]))
        return arg[0];
    return '\0';
}

char    ScalarConverter::toChar(std::string arg){
    int ascii;
    char value;
    int len = arg.size();
    const char *tmp = arg.c_str();
    if (check_for_char(tmp, len)){
        value = check_for_char(tmp, len);
        return value;
    }
    std::istringstream(arg) >> ascii;
    if (ascii >= 97 && ascii <= 122){
        return ascii;
    }
    if (ascii >= 32 && ascii <= 126){
        value = ascii;
        return value;
    }
    return '\0';
}
int ScalarConverter::toInt(std::string arg){
    char c = arg[0];
    if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122))
        return (int(c));
    int ascii;
    std::istringstream(arg) >> ascii;
    return ascii;
}
float ScalarConverter::toFloat(int i){
    int c = i << 8;
    return ((float)c / (1 << 8));
}

int pointCount(std::string arg){
    int len = arg.size();
    int count = 0;
    for (int i = 0; i < len; i++){
        if (arg[i] == '.')
            count++;
    }
    return count;
}

int afterPoint(std::string arg){
    int len = arg.size();
    for (int i = 0; i < len; i++){
        if (arg[i] == '.' && arg[i+1] == '0' && arg[i+2] == 'f')
            return i;
    }
    return 0;
}

std::string argParssing(std::string arg){
    int i = 0;
    int count = pointCount(arg);
    if (count > 1){
        std::cout << "Error: string is not allowed." << std::endl;
        exit (1);
    }
    else if (count == 1 && afterPoint(arg)){
        i = afterPoint(arg);
        arg = arg.substr(0, i);
        return arg;
    }
    return arg;
}

void    ScalarConverter::Convert(std::string arg){
    arg = argParssing(arg);
    char    c = toChar(arg);
    int     i = toInt(arg);
    float   f = toFloat(i);
    if (c == '\0')
        std::cout << "char : Non displayable" << std::endl;
    else
        std::cout<<"as char: "<<c<<std::endl;
    std::cout<<"as int: "<<i<<std::endl;
    std::cout<<"as float: "<<f<<".0f"<<std::endl;
    std::cout<<"as double: "<<f<<".0"<<std::endl;
    }