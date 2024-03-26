# ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>


class RPN{
	std::stack<int> stack;
	public:
		RPN();
		~RPN();
		void push(int);
		void add();
		void sub();
		void mul();
		void div();
		void print();
		void clear();
		void run(std::string);
};

#endif