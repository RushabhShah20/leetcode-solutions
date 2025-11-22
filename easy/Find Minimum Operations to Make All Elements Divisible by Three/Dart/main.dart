// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
class Solution {
  int minimumOperations(List<int> nums) {
    int ans = 0;
    for (int num in nums) {
      ans += ((num % 3 != 0) ? (1) : (0));
    }
    return ans;
  }
}
