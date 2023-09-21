package com.DSA.Java.Recursion;

public class InterviewQuestions {
   public static void main(String[] args) {
      System.out.println(factorial(5));
   }
   
   // Factorial
   public static int factorial(int num) {
      if (num <= -1) {
         return -1;
      }
      if (num == 0 || num == 1) {
         return 1;
      } 
      return num * factorial(num - 1);
   }
   
   // Fibbonacci
   public static int fibbonacci(int n) {
      if (n == 0 || n == 1) {
         return n;
      }
      return fibbonacci(n - 1) + fibbonacci(n - 2);
   }
   
   // Sum of Digits
   public static int sumOfDigits(int num) {
      if (num == 0) {
         return 0;
      }
      return num % 10 + sumOfDigits(num / 10);
   }

   //Power 
   public static int power(int base, int exp) {
      if (exp == 1 || exp < 0) {
         return base;
      }
      return base * power(base, exp - 1);
   }

   //GCD
   public static int gcd(int a, int b) {
      if (b == 0) {
         return a;
      }
      return gcd(b, a % b); 
   }

   //Decimal to Binary
   public static int deciamlToBinary(int decimalNumber) {
      if (decimalNumber == 0) {
         return decimalNumber;
      }
      return decimalNumber % 2 + 10 * deciamlToBinary(decimalNumber / 2);
   } 
}
