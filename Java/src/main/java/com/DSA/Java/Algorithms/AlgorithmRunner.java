package com.DSA.Java.Algorithms;

import com.DSA.Java.Algorithms.DynamicProgramming.FibonacciWithDp;

public class AlgorithmRunner {
  public static void main(String[] args) {
    FibonacciWithDp fDp = new FibonacciWithDp();
    int result = fDp.findNumOfFibWithTab(6);
    System.out.println("Result : " + result);
  }
}
