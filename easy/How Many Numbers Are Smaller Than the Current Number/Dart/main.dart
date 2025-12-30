// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
  List<int> smallerNumbersThanCurrent(List<int> nums) {
    final int n = nums.length;
    List<int> freq = new List.filled(101, 0);
    for (final int num in nums) {
      freq[num]++;
    }
    for (int i = 1; i < 101; i++) {
      freq[i] += freq[i - 1];
    }
    List<int> ans = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      if (nums[i] == 0) {
        ans[i] = 0;
      } else {
        ans[i] = freq[nums[i] - 1];
      }
    }
    return ans;
  }
}
