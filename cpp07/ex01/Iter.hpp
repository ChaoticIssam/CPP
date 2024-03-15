#include <iostream>

template <typename T>
void print(const T& value) {
	std::cout << value << std::endl;
}

template <typename T>
void Iter (T *array, size_t length, void (*f)(const T& value)){
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}
