package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// MinCostToLastCell minCost = new MinCostToLastCell();
// int[][] array = {
//   {4, 7, 8, 6, 4},
//   {6, 7, 3, 9, 2},
//   {3, 8, 1, 2, 4},
//   {7, 1, 7, 3, 7},
//   {2, 9, 8, 9, 3}
// };

// int result = minCost.findMinCost(array);
// System.out.println("Result : " + result);

public class MinCostToLastCell {
  private int findMinCostHelper(int[][] cost, int row, int col) {
    if (row == -1 || col == -1) {
      return Integer.MAX_VALUE;
    }
    if (row == 0 && col == 0) {
      return cost[0][0];
    }
    int minCost1 = findMinCostHelper(cost, row, col - 1);
    int minCost2 = findMinCostHelper(cost, row - 1, col);
    return Math.min(minCost1, minCost2) + cost[row][col];
  }

  public int findMinCost(int[][] cost) {
    return findMinCostHelper(cost, cost.length - 1, cost[0].length - 1);
  }
}
