package com.DSA.Java.Algorithms.DynamicProgramming;

import java.util.ArrayList;
import java.util.HashMap;

public class FibonacciWithDp {
  private HashMap<Integer, Integer> hashMap;

  public FibonacciWithDp() {
    this.hashMap = new HashMap<>();
  }

  public int findNumOfFibWithMemo(int num) {
    if (num == 1) {
      return 0;
    }
    if (num == 2) {
      return 1;
    }
    if (!hashMap.containsKey(num)) {
      hashMap.put(num, (findNumOfFibWithMemo(num - 1) + findNumOfFibWithMemo(num - 2)));
    }
    return hashMap.get(num);
  }

  public int findNumOfFibWithTab(int num) {
    ArrayList<Integer> table = new ArrayList<>();
    table.add(0);
    table.add(1);
    for (int i = 2; i < num; i++) {
      int n1 = table.get(i - 1);
      int n2 = table.get(i - 2);
      table.add(n1 + n2);
    }
    return table.get(num - 1);
  }
}
