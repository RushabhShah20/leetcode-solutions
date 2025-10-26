// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
class Solution {
  List<int> buildArray(List<int> nums) {
    List<int> ans = new List.filled(nums.length, 0);
    ans[0] = nums[nums[0]];
    for (int i = 0; i < nums.length; i++) {
      ans[i] = nums[nums[i]];
    }
    return ans;
  }
}
