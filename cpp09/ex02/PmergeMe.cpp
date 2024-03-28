#include "PmergeMe.hpp"

void	makePairs(std::vector<int> &mainVec, int ac, char **av){
	if (ac % 2)
    	ac--;
	for (int i = 0; i < ac; i += 2) {
		std::string firstStr(av[i]);
		std::string secondStr(av[i + 1]);
		if (!checkValues(firstStr) || !checkValues(secondStr))
			throw "Error: Invalid parameter!";
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
		throw "Error: Invalid parameter!2";
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

bool checkValues(std::string &s) {
  for (int i = 0; i < (int)s.size(); i++)
    if (!std::isdigit(s[i]))
      return false;
  if (std::stoul(s) > INT_MAX)
    return false;
  return true;
}

std::vector<int> thefunc(int ac, char **av) {
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
  if (tmp != -1)
    mainVec.insert(std::lower_bound(mainVec.begin(), mainVec.end(), tmp), tmp);
  return (mainVec);
}
