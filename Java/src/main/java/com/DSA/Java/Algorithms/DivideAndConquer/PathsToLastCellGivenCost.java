package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// PathsToLastCellGivenCost path = new PathsToLastCellGivenCost();
// int[][] array = {
//   {4, 7, 1, 6},
//   {5, 7, 3, 9},
//   {3, 2, 1, 2},
//   {7, 1, 6, 3},
// };

// int result = path.findPaths(array, 25);
// System.out.println("Result : " + result);

public class PathsToLastCellGivenCost {
  private int findPathsHelper(int[][] arr, int row, int col, int cost) {
    if (cost < 0) {
      return 0;
    }
    if (row == 0 && col == 0) {
      return ((arr[0][0] - cost == 0) ? 1 : 0);
    }

    if (row == 0) {
      return findPathsHelper(arr, 0, col - 1, cost - arr[row][col]);
    }

    if (col == 0) {
      return findPathsHelper(arr, row - 1, 0, cost - arr[row][col]);
    }

    int noOfPathFromPrevRow = findPathsHelper(arr, row - 1, col, cost - arr[row][col]);
    int noOfPathFromPrevCol = findPathsHelper(arr, row, col - 1, cost - arr[row][col]);

    return noOfPathFromPrevRow + noOfPathFromPrevCol;
  }

  public int findPaths(int[][] arr, int cost) {
    return findPathsHelper(arr, arr.length - 1, arr[0].length - 1, cost);
  }
}
