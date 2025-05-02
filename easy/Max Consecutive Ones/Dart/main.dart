// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
class Solution {
  int findMaxConsecutiveOnes(List<int> nums) {
    int ans = 0, count = 0;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 1) {
        count++;
        if (ans < count) {
          ans = count;
        }
      } else {
        count = 0;
      }
    }
    return ans;
  }
}
