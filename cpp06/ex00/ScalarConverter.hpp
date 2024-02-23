#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
#include <cmath>
class    ScalarConverter{
    static std::string _arg;
    public:
        ScalarConverter();
        ScalarConverter(std::string arg);
        ScalarConverter(ScalarConverter& obj);
        ScalarConverter& operator=(ScalarConverter& obj);
        ~ScalarConverter();
        static char toChar(std::string arg);
        static int toInt(std::string arg);
        static float toFloat(int i);
        static double toDouble(std::string arg);
        void    Convert(std::string arg);
};


#endif