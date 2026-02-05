// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
class Solution {
  List<int> constructTransformedArray(List<int> nums) {
    final int n = nums.length;
    List<int> ans = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      ans[i] = nums[(i + nums[i] % n + n) % n];
    }
    return ans;
  }
}
