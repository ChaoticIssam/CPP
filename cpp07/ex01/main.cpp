#include "Iter.hpp"

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::string strArray[] = {"one", "two", "three", "four", "five"};
	Iter (intArray, 5, print);
	std::cout << "===========" << std::endl;
	Iter (strArray, 5, print);
	return 0;
}