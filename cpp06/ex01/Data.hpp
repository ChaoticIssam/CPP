#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class   Data{
        int data;
    public:
        Data();
        Data(int n);
        Data(Data& obj);
        Data& operator=(Data& obj);
        ~Data();
        int 
getData();
};

#endif