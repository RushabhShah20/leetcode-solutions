// Problem: Minimum Operations to Make Binary Array Elements Equal to One II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
class Solution {
  int minOperations(List<int> nums) {
    int ans = 0;
    for (int num in nums) {
      if (ans % 2 == 0) {
        if (num == 0) {
          ans++;
        }
      } else {
        if (num == 1) {
          ans++;
        }
      }
    }
    return ans;
  }
}
