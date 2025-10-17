// Problem: Array Partition
// Link to the problem: https://leetcode.com/problems/array-partition/
class Solution {
  int arrayPairSum(List<int> nums) {
    int ans = 0;
    nums.sort();
    for (int i = 0; i < nums.length; i += 2) {
      ans += nums[i];
    }
    return ans;
  }
}
