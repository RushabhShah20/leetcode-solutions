// Problem: Missing Number
// Link to the problem: https://leetcode.com/problems/missing-number/
class Solution {
  int missingNumber(List<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.length; i++) {
      sum += nums[i];
    }
    return ((nums.length * (nums.length + 1)) ~/ 2) - sum;
  }
}
