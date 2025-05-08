// Problem: Count Pairs Whose Sum is Less than Target
// Link to the problem: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
class Solution {
  int countPairs(List<int> nums, int target) {
    int ans = 0;
    for (int i = 0; i < nums.length; i++) {
      for (int j = i + 1; j < nums.length; j++) {
        if (nums[i] + nums[j] < target) {
          ans++;
        }
      }
    }
    return ans;
  }
}
