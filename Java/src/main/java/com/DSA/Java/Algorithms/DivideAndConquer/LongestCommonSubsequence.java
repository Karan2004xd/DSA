package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// LongestCommonSubsequence lcs = new LongestCommonSubsequence();
// int result = lcs.findLCSLength("elephant", "erepat");
// System.out.println("Result : " + result);

public class LongestCommonSubsequence {
  private int findLCSLengthHelper(String s1, String s2, int index1, int index2) {
    if (s1.length() == index1 || s2.length() == index2) {
      return 0;
    }
    int c1 = 0;
    if (s1.charAt(index1) == s2.charAt(index2)) {
      c1 = 1 + findLCSLengthHelper(s1, s2, index1 + 1, index2 + 1);
    }
    int c2 = findLCSLengthHelper(s1, s2, index1 + 1, index2);
    int c3 = findLCSLengthHelper(s1, s2, index1, index2 + 1);
    return Math.max(c1, Math.max(c2, c3));
  }

  public int findLCSLength(String s1, String s2) {
    return findLCSLengthHelper(s1, s2, 0, 0);
  }
}
