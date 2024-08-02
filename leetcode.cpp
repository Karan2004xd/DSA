#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool checkStraightLine(vector<vector<int>>& coordinates) {
    int x = coordinates[1][0] - coordinates[0][0];
    int y = coordinates[1][1] - coordinates[0][1];

    if (x == 0) {
      for (int i = 2; i < coordinates.size(); i++) {
        if (coordinates[0][0] != coordinates[i][0]) {
          return false;
        }
      }
    } else {
      float slope = static_cast<float>(y) / x;
      for (int i = 1; i < coordinates.size() - 1; i++) {
        int x = coordinates[i + 1][0] - coordinates[i][0];
        int y = coordinates[i + 1][1] - coordinates[i][1];
        float temp_slope = static_cast<float>(y) / x;
        if (temp_slope != slope) {
          return false;
        }
      }
    }
    return true;
  }
};

int main() {
  Solution s;

  /* std::vector<vector<int>> test {{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}}; */
  /* std::vector<vector<int>> test {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}}; */
  std::vector<vector<int>> test {{1,1},{2,2},{2,0}};
  bool result = s.checkStraightLine(test);
  if (result) {
    std::cout << "true";
  } else {
    std::cout << "false";
  }
  std::cout << "\n";
  return 0;
}
