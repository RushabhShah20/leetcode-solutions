// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
class Solution {
  int xorAfterQueries(List<int> nums, List<List<int>> queries) {
    final int mod = 1000000007;
    for (final List<int> query in queries) {
      for (int i = query[0]; i <= query[1]; i += query[2]) {
        nums[i] = (nums[i] * query[3]) % mod;
      }
    }
    int ans = 0;
    for (final int num in nums) {
      ans ^= num;
    }
    return ans;
  }
}
