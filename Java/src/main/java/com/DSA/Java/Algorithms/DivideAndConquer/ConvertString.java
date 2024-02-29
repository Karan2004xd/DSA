package com.DSA.Java.Algorithms.DivideAndConquer;

// Test Cases

// ConvertString convertString = new ConvertString();
// int result = convertString.findMinOperation("table", "tbres");
// System.out.println("Result : " + result);

public class ConvertString {
  private int findMinOperationsHelper(String s1, String s2, int index1, int index2) {
    if (s1.length() == index1) {
      return s2.length() - index2;
    }
    if (s2.length() == index2) {
      return s1.length() - index1;
    }

    if (s1.charAt(index1) == s2.charAt(index2)) {
      return findMinOperationsHelper(s1, s2, index1 + 1, index2 + 1);
    }
    int deleteOperation = 1 + findMinOperationsHelper(s1, s2, index1 + 1, index2);
    int insertOperation = 1 + findMinOperationsHelper(s1, s2, index1 + 1, index2);
    int replaceOperation = 1 + findMinOperationsHelper(s1, s2, index1 + 1, index2 + 1);
    return Math.min(deleteOperation, Math.min(insertOperation, replaceOperation));
  }

  public int findMinOperation(String s1, String s2) {
    return findMinOperationsHelper(s1, s2, 0, 0);
  }
}
