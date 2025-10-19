// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
class Solution {
  List<int> minSubsequence(List<int> nums) {
    nums.sort((b, a) => a.compareTo(b));
    int sum = 0;
    for (int num in nums) {
      sum += num;
    }
    int a = 0;
    List<int> ans = new List.empty(growable: true);
    for (int num in nums) {
      a += num;
      if (a > sum - a) {
        ans.add(num);
        break;
      } else {
        ans.add(num);
      }
    }
    return ans;
  }
}
