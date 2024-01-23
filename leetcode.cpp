#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool check_prime(int value) {
        bool result {true};
        if (value > 2) {
            int i = 2;
            while (i <= value / 2) {
                if (value % i == 0) {
                    result = false;
                    break;
                }
                i++;
            }
        }
        return result;
    }
    int countPrimes(int n) {
        int result {0};

        if (n >= 2) {
            for (int i = 2; i < n; i++) {
                if (check_prime(i)) {
                    result++;
                }
            }
        }
        return result;
    }
};
int main() {
    Solution s;
    std::cout << s.countPrimes(1) << std::endl;
    return 0;
}
