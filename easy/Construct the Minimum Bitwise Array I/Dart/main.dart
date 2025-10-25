// Problem: Construct the Minimum Bitwise Array I
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/
class Solution {
  List<int> minBitwiseArray(List<int> nums) {
    int n = nums.length;
    List<int> ans = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      if (nums[i] % 2 == 0) {
        ans[i] = -1;
      } else {
        ans[i] = nums[i] - (((nums[i] + 1) & (-nums[i] - 1)) ~/ 2);
      }
    }
    return ans;
  }
}
