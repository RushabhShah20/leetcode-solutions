// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution {
  int minMoves(List<int> nums) {
    int ans = 0;
    int x = nums.reduce(max);
    for (int num in nums) {
      ans += (x - num);
    }
    return ans;
  }
}
