#include <iostream>
#include <string>

struct RecursionQuestion {
   int factorial(int num);
   int fibbonacci(int num);
   int sum_of_digits(int num);
   int powerValue(int base, int power);
   int gcd(int a, int b);
   int decimal_to_binary(int num);
};

int RecursionQuestion::factorial(int num) {
   if (num == 1) {
      return num;
   }
   return num * factorial(num - 1);
}

int RecursionQuestion::fibbonacci(int num) {
   if (num == 0 || num == 1) {
      return num;
   }
   return fibbonacci(num - 1) + fibbonacci(num - 2);
}

int RecursionQuestion::sum_of_digits(int num) {
   if (num == 0) {
      return num;
   }
   return num % 10 + sum_of_digits(num / 10);
}

int RecursionQuestion::powerValue(int base, int power) {
   if (power == 1 || power < 0) {
      return base;
   }
   return base * powerValue(base, --power);
}

int RecursionQuestion::gcd(int a, int b) {
   if (b == 0) {
      return a;
   }
   return gcd(b, a % b);
}

int RecursionQuestion::decimal_to_binary(int num) {
   if (num == 0) {
      return num;
   }
   return num % 2 + 10 * decimal_to_binary(num / 2);
}

int main() {
   RecursionQuestion func;
   std::cout << func.decimal_to_binary(8) << std::endl;
   return 0;
}
