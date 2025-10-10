// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
class Solution {
  int maximumEnergy(List<int> energy, int k) {
    int n = energy.length, ans = -0x8000000000000000;
    List<int> dp = new List.filled(n, 0);
    for (int i = n - 1; i >= 0; i--) {
      if (i >= n - k) {
        dp[i] = energy[i];
      } else {
        dp[i] = energy[i] + dp[i + k];
      }
      ans = max(ans, dp[i]);
    }
    return ans;
  }
}
