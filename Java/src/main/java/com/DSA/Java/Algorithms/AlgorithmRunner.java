package com.DSA.Java.Algorithms;

import com.DSA.Java.Algorithms.DivideAndConquer.PathsToLastCellGivenCost;

public class AlgorithmRunner {
  public static void main(String[] args) {
    PathsToLastCellGivenCost path = new PathsToLastCellGivenCost();
    int[][] array = {
      {4, 7, 1, 6},
      {5, 7, 3, 9},
      {3, 2, 1, 2},
      {7, 1, 6, 3},
    };

    int result = path.findPaths(array, 25);
    System.out.println("Result : " + result);
  }
}
