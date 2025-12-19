// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
class Solution {
  bool canJump(List<int> nums) {
    int n = nums.length, x = 0;
    for (int i = 0; i < n; i++) {
      if (i > x) {
        return false;
      }
      x = max(x, i + nums[i]);
    }
    return true;
  }
}
