#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <set>
#include <queue>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>{
	public:
		MutantStack(){}
		MutantStack(const MutantStack &obj){ *this = obj; }
		MutantStack &operator=(const MutantStack &obj){
			if (this == &obj)
				return *this;
			*this = obj;
			return *this;
		}
		~MutantStack(){}
		typedef typename container::iterator iterator;//those are aliases for the types of the container
		typedef typename container::const_iterator const_iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;
		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
		reverse_iterator rbegin(){return this->c.rbegin();}
		reverse_iterator rend(){return this->c.rend();}
};

#endif