package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// ZeroOneKnapsack zeroOneKnapsack = new ZeroOneKnapsack();
// int[] profits = {31, 26, 17, 72};
// int[] weights = {3, 1, 2, 5};
// int result = zeroOneKnapsack.maxProfit(profits, weights, 7);
// System.out.println("Result : " + result);

public class ZeroOneKnapsack {
  private int maxProfitHelper(int[] profits, int[] weights, int capacity, int currentIndex) {
    if (capacity <= 0 || currentIndex < 0 || currentIndex >= profits.length) {
      return 0;
    }
    int profit1 = 0;
    if (weights[currentIndex] <= capacity) {
      profit1 = profits[currentIndex] + maxProfitHelper(profits, weights,
          capacity - weights[currentIndex], currentIndex + 1);
    }
    int profit2 = maxProfitHelper(profits, weights, capacity, currentIndex + 1);
    return Math.max(profit1, profit2);
  }

  public int maxProfit(int[] profits, int[] weights, int capacity) {
    return maxProfitHelper(profits, weights, capacity, 0);
  }
}
