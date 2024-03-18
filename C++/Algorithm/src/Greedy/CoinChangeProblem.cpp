#include "../../include/Greedy/CoinChangeProblem.h"

void CoinChangeProblem::get_coin_change(std::vector<int> &coins, int amount) {
  std::sort(coins.begin(), coins.end());
  int index = coins.size() - 1;

  while (amount > 0) {
    int coin_value = coins[index];
    int max_amount = (amount / coin_value) * coin_value;
    if (max_amount > 0) {
      std::cout << "Coin Value: " << coin_value << ", taken count: " << amount / coin_value << std::endl;
      amount -= max_amount;
    }
    index--;
  }
}
