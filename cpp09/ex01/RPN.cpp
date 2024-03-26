#include "RPN.hpp"

RPN::RPN(){
}

RPN::~RPN(){
}

void RPN::push(int n){
	stack.push(n);
}

void RPN::run(std::string input){
	std::string token;
	std::istringstream iss(input);
	while (iss >> token){
		if (token.size() > 1)
			throw "Error: invalid argument";
		if (token == "+")
			add();
		else if (token == "-")
			sub();
		else if (token == "*")
			mul();
		else if (token == "/")
			div();
		else
			push(std::stoi(token));
	}
}

void RPN::add(){
	if (stack.size() < 2)
		throw "Error: low number of arguments in stack";
	int a = stack.top();
	stack.pop();
	int b = stack.top();
	stack.pop();
	stack.push(a+b);
}

void RPN::mul(){
	if (stack.size() < 2)
		throw "Error: low number of arguments in stack";
	int a = stack.top();
	stack.pop();
	int b = stack.top();
	stack.pop();
	stack.push(a*b);
}

void RPN::div(){
	if (stack.size() < 2)
		throw "Error: low number of arguments in stack";
	int a = stack.top();
	stack.pop();
	int b = stack.top();
	stack.pop();
	if (a == 0)
		throw "Division by zero";
	stack.push(b/a);
}

void RPN::sub(){
	if (stack.size() < 2)
		throw "Error: low number of arguments in stack";
	int a = stack.top();
	stack.pop();
	int b = stack.top();
	stack.pop();
	stack.push(b-a);
}

void RPN::print(){
	if (stack.size() != 1)
		throw "Error: invalid number of arguments in stack";
	std::cout << stack.top() << std::endl;
}

void RPN::clear(){
	while (!stack.empty())
		stack.pop();
}
