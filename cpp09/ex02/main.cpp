#include "PmergeMe.hpp"

int main(int ac, char **av) {
  try {
		if (ac < 3)
			throw std::invalid_argument("Error: Not enough arguments!");
		double a = clock();
		std::vector<int> v = thefuncVector(ac - 1, av + 1);
		a = (clock() - a) / CLOCKS_PER_SEC;
		double b = clock();
		std::deque<int> d = thefuncDeque(ac - 1, av + 1);
		b = (clock() - b) / CLOCKS_PER_SEC;
		std::cout << "Before : ";
		for(int i = 1; i < ac; i++)
			std::cout << av[i] << " ";
		std::cout << std::endl;
		std::cout << "After :  ";
		for(int i = 0; i < (int)v.size(); i++)
			std::cout << v[i] << " ";
		std::cout << "\n" << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << std::fixed << a << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << std::fixed << b << std::endl;
		return 0;
	} 
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
  	}
}
