package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// HouseRobber houseRobber = new HouseRobber();
// int[] houseNetWorth = {6, 7, 1, 30, 8, 2, 4};
// int result = houseRobber.maxMoney(houseNetWorth);
// System.out.println("Result : " + result);

public class HouseRobber {
  private int maxMoneyHelper(int[] houseNetWorth, int currentHouse) {
    if (currentHouse >= houseNetWorth.length) {
      return 0;
    }
    int stealCurrentHouse = houseNetWorth[currentHouse] + maxMoneyHelper(houseNetWorth, currentHouse + 2);
    int skipCurrentHouse = maxMoneyHelper(houseNetWorth, currentHouse + 1);
    return Math.max(stealCurrentHouse, skipCurrentHouse);
  }

  public int maxMoney(int[] houseNetWorth) {
    return maxMoneyHelper(houseNetWorth, 0);
  }
}
