// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
class Solution {
  int countPartitions(List<int> nums) {
    int sum = 0, ans = nums.length - 1;
    for (final int num in nums) {
      sum += num;
    }
    if (sum % 2 == 0) {
      return ans;
    } else {
      return 0;
    }
  }
}
