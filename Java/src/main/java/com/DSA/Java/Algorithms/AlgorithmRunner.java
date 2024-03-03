package com.DSA.Java.Algorithms;

import com.DSA.Java.Algorithms.DynamicProgramming.ConvertStringWithDp;

public class AlgorithmRunner {
  public static void main(String[] args) {
    ConvertStringWithDp dp = new ConvertStringWithDp();

    int result = dp.findEditsTopDown("table", "tbres");
    System.out.println("Result : " + result);
 }
}
