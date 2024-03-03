package com.DSA.Java.Algorithms.DynamicProgramming;

import java.util.HashMap;

public class ConvertStringWithDp {
  private HashMap<String, Integer> memo = new HashMap<>();

  private int findEditsTopDownHelper(String s1, String s2, int index1, int index2) {
    if (index1 == s1.length()) {
      return s2.length() - index2;
    }

    if (index2 == s2.length()) {
      return s1.length() - index1;
    }
    
    if (s1.charAt(index1) == s2.charAt(index2)) {
      return findEditsTopDownHelper(s1, s2, index1 + 1, index2 + 1);
    }

    String dictKey = Integer.toString(index1) + Integer.toString(index2);
    if (!memo.containsKey(dictKey)) {
      int deleteOp = 1 + findEditsTopDownHelper(s1, s2, index1 + 1, index2);
      int insertOp = 1 + findEditsTopDownHelper(s1, s2, index1, index2 + 1);
      int replaceOp = 1 + findEditsTopDownHelper(s1, s2, index1 + 1, index2 + 1);
      memo.put(dictKey, Math.min(deleteOp, Math.min(insertOp, replaceOp)));
    }
    return memo.get(dictKey);
  }

  public int findEditsTopDown(String s1, String s2) {
    return findEditsTopDownHelper(s1, s2, 0, 0);
  }
}
