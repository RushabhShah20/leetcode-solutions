// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
class Solution {
  int maximumXOR(List<int> nums) {
    int ans = 0;
    for (final int num in nums) {
      ans |= num;
    }
    return ans;
  }
}
