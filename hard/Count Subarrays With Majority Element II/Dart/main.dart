// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
class Solution {
  int countMajoritySubarrays(List<int> nums, int target) {
    final int n = nums.length;
    List<int> pre = new List.filled(2 * n + 1, 0);
    pre[n] = 1;
    int x = n, ans = 0, y = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] == target) {
        y += pre[x];
        x++;
        pre[x]++;
      } else {
        x--;
        y -= pre[x];
        pre[x]++;
      }
      ans += y;
    }
    return ans;
  }
}
