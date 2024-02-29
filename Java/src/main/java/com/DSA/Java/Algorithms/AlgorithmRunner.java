package com.DSA.Java.Algorithms;

import com.DSA.Java.Algorithms.Greedy.FractionalKnapsackProblem.FractionalKnapsack;

public class AlgorithmRunner {
  public static void main(String[] args) {
    FractionalKnapsack fKnapsack = new FractionalKnapsack();
    fKnapsack.addItem(1, 100, 20);
    fKnapsack.addItem(2, 120, 30);
    fKnapsack.addItem(3, 60, 10);
    int capacity = 50;
    fKnapsack.knapSack(capacity);
  }
}
