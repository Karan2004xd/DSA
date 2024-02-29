package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// LongestPalindromicSubsequence lps = new LongestPalindromicSubsequence();
// int result = lps.findMaxLPS("elrmenmet");
// System.out.println("Result : " + result);

public class LongestPalindromicSubsequence {
  private int findMaxLPSHelper(String str, int startIndex, int endIndex) {
    if (startIndex > endIndex) {
      return 0;
    }
    if (startIndex == endIndex) {
      return 1;
    }

    int c1 = 0;
    if (str.charAt(startIndex) == str.charAt(endIndex)) {
      c1 = 2 + findMaxLPSHelper(str, startIndex + 1, endIndex - 1);
    }

    int c2 = findMaxLPSHelper(str, startIndex + 1, endIndex);
    int c3 = findMaxLPSHelper(str, startIndex, endIndex - 1);
    return Math.max(c1, Math.max(c2, c3));
  }

  public int findMaxLPS(String str) {
    return findMaxLPSHelper(str, 0, str.length() - 1);
  }
}
