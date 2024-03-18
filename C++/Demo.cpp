#include "Algorithm/include/Greedy/CoinChangeProblem.h"

int main() {
  std::vector<int> coins {2, 5, 1, 2000, 500, 200, 100, 10, 20, 50};
  int amount = 503570;
  CoinChangeProblem::get_coin_change(coins, amount);
  return 0;
}
