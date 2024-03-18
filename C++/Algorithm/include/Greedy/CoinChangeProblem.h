#ifndef COIN_CHANGE_PROBLEM_H
#define COIN_CHANGE_PROBLEM_H

#include <iostream>
#include <algorithm>
#include <vector>

class CoinChangeProblem {
public:
  static void get_coin_change(std::vector<int> &coins, int amount);
};
#endif // COIN_CHANGE_PROBLEM_H
