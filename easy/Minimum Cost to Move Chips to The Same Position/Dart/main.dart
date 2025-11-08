// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
class Solution {
  int minCostToMoveChips(List<int> position) {
    int even = 0, odd = 0;
    for (int i in position) {
      if (i % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }
    int ans = min(even, odd);
    return ans;
  }
}
