#include <exception>
#include <stdexcept>

template <typename T>
Array<T>::Array() : _size(0), _array(new T[0]()) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]()) {}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array<T> &other) {
	this->_array = new T[other._size]();
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[other._size]();
		for (unsigned int i = 0; i < other._size; i++) {
			this->_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](const unsigned int &i) {
	if (i >= this->_size) {
		throw std::out_of_range("Index out of range");
	}
	return this->_array[i];
}

template <typename T>
unsigned int Array<T>::size(){
	return this->_size;
}