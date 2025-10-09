// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
class Solution {
  int minTime(List<int> skill, List<int> mana) {
    int n = skill.length, m = mana.length;
    List<int> ans = new List.filled(n + 1, 0);
    for (int j = 0; j < m; ++j) {
      for (int i = 0; i < n; ++i) {
        ans[i + 1] = max(ans[i + 1], ans[i]) + (mana[j] * skill[i]);
      }
      for (int i = n - 1; i > 0; --i) {
        ans[i] = ans[i + 1] - (mana[j] * skill[i]);
      }
    }
    return ans[n];
  }
}
