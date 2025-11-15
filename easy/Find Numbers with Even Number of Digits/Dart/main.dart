// Problem: Find Numbers with Even Number of Digits
// Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
class Solution {
  int findNumbers(List<int> nums) {
    int ans = 0;
    for (int i = 0; i < nums.length; i++) {
      int n = nums[i];
      int count = 0;
      while (n != 0) {
        count++;
        n ~/= 10;
      }
      if (count % 2 == 0) {
        ans++;
      }
    }
    return ans;
  }
}
