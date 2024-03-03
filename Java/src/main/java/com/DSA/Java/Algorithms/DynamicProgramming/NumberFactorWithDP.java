package com.DSA.Java.Algorithms.DynamicProgramming;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class NumberFactorWithDP {
  private HashMap<Integer, Integer> memo = new HashMap<>();

  public int findNumsWithTopDown(int num) {
    if (num == 0 || num == 1 || num == 2) return 1;
    if (num == 3) return 2;
    if (memo.containsKey(num)) return memo.get(num);

    int s1 = findNumsWithTopDown(num - 1);
    int s2 = findNumsWithTopDown(num - 3);
    int s3 = findNumsWithTopDown(num - 4);
    memo.put(num, s1 + s2 + s3);
    return memo.get(num);
  }

  public int findNumsWithBottomUp(int num) {
    ArrayList<Integer> tb = new ArrayList<>(Arrays.asList(1, 1, 1, 2));
    for (int i = 4; i <= num + 1; i++) {
      tb.add(tb.get(i - 1) + tb.get(i - 3) + tb.get(i - 4));
    }
    return tb.get(num);
  }
}
