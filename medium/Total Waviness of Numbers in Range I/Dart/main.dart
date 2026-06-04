// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
class Solution {
  int totalWaviness(int num1, int num2) {
    int ans = 0;
    for (int i = num1; i <= num2; i++) {
      final String x = i.toString();
      final int n = x.length;
      for (int j = 1; j < n - 1; j++) {
        if (x[j].compareTo(x[j - 1]) > 0 && x[j].compareTo(x[j + 1]) > 0) {
          ans++;
        }
        if (x[j].compareTo(x[j - 1]) < 0 && x[j].compareTo(x[j + 1]) < 0) {
          ans++;
        }
      }
    }
    return ans;
  }
}
