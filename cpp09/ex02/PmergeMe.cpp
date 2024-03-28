#include "PmergeMe.hpp"

void	makePairs(std::vector<int> &mainVec, int ac, char **av){
	if (ac % 2)
    	ac--;
	for (int i = 0; i < ac; i += 2) {
		std::string firstStr(av[i]);
		std::string secondStr(av[i + 1]);
		if (!checkValues(firstStr) || !checkValues(secondStr))
			throw std::invalid_argument("Error: Invalid parameter!");
		int first = std::atoi(firstStr.c_str());
		int second = std::atoi(secondStr.c_str());
		if (first < second)
			std::swap(first, second);
		mainVec.push_back(first);
		mainVec.push_back(second);
	}
}

void	makePairsDeq(std::deque<int> &mainVec, int ac, char **av){
	if (ac % 2)
    	ac--;
	for (int i = 0; i < ac; i += 2) {
		std::string firstStr(av[i]);
		std::string secondStr(av[i + 1]);
		if (!checkValues(firstStr) || !checkValues(secondStr))
			throw std::invalid_argument("Error: Invalid parameter!");
		int first = std::atoi(firstStr.c_str());
		int second = std::atoi(secondStr.c_str());
		if (first < second)
			std::swap(first, second);
		mainVec.push_back(first);
		mainVec.push_back(second);
	}
}

void	ifImpair(int ac, char **av, int &tmp){
	std::string s(av[ac]);
	if (!checkValues(s))
		throw std::invalid_argument("Error: Invalid parameter!");
	tmp = std::atoi(s.c_str());
}

void	BigPair(int ac, char **av, std::vector<int> &mainVec){
	(void)ac;
	(void)av;
	for (int i = 2; i < (int)mainVec.size(); i += 2) {
    	int j = i - 2;
    	while (j >= 0 && mainVec[j + 2] < mainVec[j]) {
      		std::swap(mainVec[j + 2], mainVec[j]);
      		std::swap(mainVec[j + 3], mainVec[j + 1]);
     		j -= 2;
		}
	}
}

void	BigPairDeq(int ac, char **av, std::deque<int> &mainVec){
	(void)ac;
	(void)av;
	for (int i = 2; i < (int)mainVec.size(); i += 2) {
    	int j = i - 2;
    	while (j >= 0 && mainVec[j + 2] < mainVec[j]) {
      		std::swap(mainVec[j + 2], mainVec[j]);
      		std::swap(mainVec[j + 3], mainVec[j + 1]);
     		j -= 2;
		}
	}
}

bool checkValues(std::string &s) {
  for (int i = 0; i < (int)s.size(); i++)
    if (!std::isdigit(s[i]))
      return false;
  if (std::stoul(s) > INT_MAX)
    return false;
  return true;
}

std::vector<int> thefuncVector(int ac, char **av) {
  std::vector<int> mainVec;
  int tmp = -1;
  if ((ac) % 2)
    ac--;
  makePairs(mainVec, ac, av);
  if (ac % 2)
    ifImpair(ac, av, tmp);
  BigPair(ac, av, mainVec);
  std::vector<int> pendVec;
  for (int i = 1; i < (int)mainVec.size(); i++) {
    pendVec.push_back(mainVec[i]);
    mainVec.erase(mainVec.begin() + i);
  }
  mainVec.insert(mainVec.begin(), pendVec[0]);
  {
    int a = 0, b = 1;
    int next = a * 2 + b;
    int size = pendVec.size();
    while (next < size) {
      a = b;
      b = next;
      next = a * 2 + b;
      if (next > size)
        next = size;
      for (int j = next; j > b; j--) {
        if (j <= size) {
          mainVec.insert(
              std::lower_bound(mainVec.begin(), mainVec.end(), pendVec[j - 1]),
              pendVec[j - 1]);
        }
      }
    }
  }
  if (tmp != -1)
    mainVec.insert(std::lower_bound(mainVec.begin(), mainVec.end(), tmp), tmp);
  return (mainVec);
}

std::deque<int> thefuncDeque(int ac, char **av) {
  std::deque<int> mainDeq;
  int tmp = -1;
  if ((ac) % 2)
    ac--;
  makePairsDeq(mainDeq, ac, av);
  if (ac % 2)
    ifImpair(ac, av, tmp);
  BigPairDeq(ac, av, mainDeq);
  std::deque<int> pendDeq;
  for (int i = 1; i < (int)mainDeq.size(); i++) {
    pendDeq.push_back(mainDeq[i]);
    mainDeq.erase(mainDeq.begin() + i);
  }
  	mainDeq.insert(mainDeq.begin(), pendDeq[0]);
	int a = 0, b = 1;
    int next = a * 2 + b;
    int size = pendDeq.size();
    while (next < size) {
      a = b;
      b = next;
      next = a * 2 + b;
      if (next > size)
        next = size;
      for (int j = next; j > b; j--){
        if (j <= size)
          mainDeq.insert(std::lower_bound(mainDeq.begin(), mainDeq.end(), pendDeq[j - 1]),pendDeq[j - 1]);
	  }
    }
  if (tmp != -1)
    mainDeq.insert(std::lower_bound(mainDeq.begin(), mainDeq.end(), tmp), tmp);
  return (mainDeq);
}
