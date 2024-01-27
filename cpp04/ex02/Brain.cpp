#include "Brain.hpp"

Brain::Brain(void)	{
	std::cout << "Brain default constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "No thoughts !";
}

Brain::Brain(const Brain& orig)	{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = orig;
}

Brain& Brain::operator=(const Brain& orig)	{
	std::cout << "Brain copy assignement operator called" << std::endl;
	if (this == &orig)
		return (*this);
	for(int i = 0; i < 100; i++)
		this->ideas[i] = orig.ideas[i];
	return (*this);
}

Brain::~Brain(void)	{
		std::cout << "Brain destructor called" << std::endl;
}