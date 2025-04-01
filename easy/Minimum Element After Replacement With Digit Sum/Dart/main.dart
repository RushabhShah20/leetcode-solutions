// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
class Solution {
  int sumofDigits(int n) {
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n ~/= 10;
    }
    return sum;
  }

  int minElement(List<int> nums) {
    int ans = nums[0];
    for (int i = 0; i < nums.length; i++) {
      nums[i] = sumofDigits(nums[i]);
      if (nums[i] < ans) {
        ans = nums[i];
      }
    }
    return ans;
  }
}
