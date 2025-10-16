// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
class Solution {
  int singleNumber(List<int> nums) {
    int ans = 0;
    for (int num in nums) {
      ans ^= num;
    }
    return ans;
  }
}
