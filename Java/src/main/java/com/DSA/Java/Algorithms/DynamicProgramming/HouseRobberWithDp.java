package com.DSA.Java.Algorithms.DynamicProgramming;

import java.util.HashMap;

public class HouseRobberWithDp {
  private HashMap<Integer, Integer> memo = new HashMap<>();

  private int findCostWithTopDownHelper(int[] houses, int currentHouse) {
    if (currentHouse >= houses.length) {
      return 0;
    }
    if (!memo.containsKey(currentHouse)) {
      int houseToRob = houses[currentHouse] + findCostWithTopDownHelper(houses, currentHouse + 2);
      int houseToSkip = findCostWithTopDownHelper(houses, currentHouse + 1);
      memo.put(currentHouse, Math.max(houseToRob, houseToSkip));
    }
    return memo.get(currentHouse);
  }

  public int findCostWithTopDown(int[] houses) {
    return findCostWithTopDownHelper(houses, 0);
  }

  public int findCostWithBottomUp(int[] houses) {
    int[] arr = new int[houses.length + 2];
    arr[houses.length] = 0;
    for (int i = houses.length - 1; i >= 0; i--) {
      arr[i] = Math.max(houses[i] + arr[i + 2], arr[i + 1]);
    }
    return arr[0];
  }

}
