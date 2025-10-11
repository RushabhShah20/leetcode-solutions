// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
class Solution {
  int findMaximumScore(List<int> nums) {
    int ans = 0, maxElement = 0;
    for (int i = 0; i < nums.length; i++) {
      ans += maxElement;
      maxElement = max(maxElement, (nums[i]));
    }
    return ans;
  }
}
