// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
class Solution {
  int countPairs(List<int> nums, int k) {
    final int n = nums.length;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[i] == nums[j] && (i * j) % k == 0) {
          ans++;
        }
      }
    }
    return ans;
  }
}
