#include "MutantStack.hpp"

int	main(){
	typedef MutantStack<std::string, std::vector<std::string> > mstack_t;
	mstack_t ss; 

	ss.push("1");
	ss.push("2");
	ss.push("3");
	ss.push("0");
	ss.pop();
	ss.push("4");
	ss.push("42");
	
	std::stack<std::string, std::vector<std::string> > g(ss);
	
	std::cout << "top = " << g.top() << std::endl;
	
	std::cout << "** Reverse Iterator **" << std::endl;
	for (mstack_t::reverse_iterator it = ss.rbegin(); it != ss.rend(); it++)	{
		std::cout << *it << std::endl;
	}
	std::cout << "** Iterator **" << std::endl;
	for (mstack_t::iterator it = ss.begin(); it != ss.end(); it++)	{
		std::cout << *it << std::endl;
	}
}