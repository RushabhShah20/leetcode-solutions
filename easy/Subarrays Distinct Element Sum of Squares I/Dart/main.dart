// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution {
  int sumCounts(List<int> nums) {
    final int n = nums.length;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      Set<int> s = new Set();
      for (int j = i; j < n; j++) {
        s.add(nums[j]);
        ans += s.length * s.length;
      }
    }
    return ans;
  }
}
