// Problem: Final Array State After K Multiplication Operations I
// Link to the problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
class Solution {
  List<int> getFinalState(List<int> nums, int k, int multiplier) {
    for (int i = 0; i < k; i++) {
      int min = nums.reduce((curr, next) => curr < next ? curr : next);
      int index = nums.indexOf(min);
      nums[index] = min * multiplier;
    }
    return nums;
  }
}
