// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
class Solution {
  String findDifferentBinaryString(List<String> nums) {
    final int n = nums.length;
    List<String> ans = List.filled(n, '0');
    for (int i = 0; i < n; i++) {
      ans[i] = nums[i][i] == '0' ? '1' : '0';
    }
    return ans.join();
  }
}
