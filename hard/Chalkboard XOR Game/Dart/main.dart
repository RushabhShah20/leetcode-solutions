// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
class Solution {
  bool xorGame(List<int> nums) {
    int total = 0, n = nums.length;
    for (int num in nums) {
      total ^= num;
    }
    bool a = (total == 0), b = (n % 2 == 0);
    bool ans = a || b;
    return ans;
  }
}
