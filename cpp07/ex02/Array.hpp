#pragma once

#include <iostream>

template <typename T>
class Array{
	private:
		unsigned int _size;
		T *_array;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array &operator=(const Array &obj);
		T &operator[](const unsigned int &index);
        ~Array();
        unsigned int size();
};

#include "Array.tpp"