// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
class Solution {
  int xorBeauty(List<int> nums) {
    int ans = 0;
    for (final int num in nums) {
      ans ^= num;
    }
    return ans;
  }
}
