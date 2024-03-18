#ifndef COIN_CHANGE_PROBLEM_H
#define COIN_CHANGE_PROBLEM_H

#include <iostream>
#include <algorithm>
#include <vector>

/* std::vector<int> coins {2, 5, 1, 2000, 500, 200, 100, 10, 20, 50}; */
/* int amount = 503570; */
/* CoinChangeProblem::get_coin_change(coins, amount); */

// Output
/* 1 2 5 10 20 50 100 200 500 2000 */
/* Coin Value: 2000, taken count: 251 */
/* Coin Value: 500, taken count: 3 */
/* Coin Value: 50, taken count: 1 */
/* Coin Value: 20, taken count: 1 */

class CoinChangeProblem {
public:
  static void get_coin_change(std::vector<int> &coins, int amount);
};
#endif // COIN_CHANGE_PROBLEM_H
