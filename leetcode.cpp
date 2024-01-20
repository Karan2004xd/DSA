#include <bits/stdc++.h>

using namespace std;

class Solution {
    const int modulo {1000000007};
    int get_min(int start, int end, vector<int> &arr) {
        int min_value {40000};
        for (; start < end; start++) {
            if (arr[start] < min_value) {
                min_value = arr[start];
            }
        }
        return min_value;
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        int sum {0};
        for (int i = 1; i <= arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                int min = get_min(j, j + i, arr);
                sum += min;
            }
        }
        return sum % modulo;
    }
};
int main() {
    Solution s;
    vector<int> vec {11,81,94,43,3};
    cout << s.sumSubarrayMins(vec) << endl;
    return 0;
}
