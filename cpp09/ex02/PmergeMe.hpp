#include <deque>
#include <iostream>
#include <vector>

void	makePairs(std::vector<int> &mainVec, int ac, char **av);
void	ifImpair(int ac, char **av, int &tmp);
void	BigPair(int ac, char **av, std::vector<int> &mainVec);

bool checkValues(std::string &s);

std::vector<int> thefuncVector(int ac, char **av);
std::deque<int> thefuncDeque(int ac, char **av);
