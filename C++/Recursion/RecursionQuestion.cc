#include <iostream>
#include <string>

struct RecursionQuestion {
   int factorial(int num);
   int fibbonacci(int num);
   int sum_of_digits(int num);
   int powerValue(int base, int power);
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

int main() {
   RecursionQuestion func;
   std::cout << func.powerValue(2, 3) << std::endl;
   return 0;
}
