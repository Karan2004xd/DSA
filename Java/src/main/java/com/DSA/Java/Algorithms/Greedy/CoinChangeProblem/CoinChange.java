package com.DSA.Java.Algorithms.Greedy.CoinChangeProblem;

import java.util.Arrays;

// Test Cases

// int coins[] = {1, 2, 5, 10, 20, 50, 10, 1000};
// int amount = 2035;
// CoinChange.getCoinChangeValues(coins, amount);

public class CoinChange {
  public static void getCoinChangeValues(int[] coins, int amount) {
    Arrays.sort(coins);
    int index = coins.length - 1;
    
    while (true) {
      int coinValue = coins[index];
      index--;
      
      int maxAmount = (amount / coinValue) * coinValue;
      if (maxAmount > 0) {
        System.out.println("Coin value : " + coinValue + ", taken count : " + amount / coinValue);
        amount -= maxAmount;
      }

      if (amount == 0) break;
    }
  }
}
