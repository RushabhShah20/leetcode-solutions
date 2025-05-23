// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
class Solution {
  List<int> findIndices(
    List<int> nums,
    int indexDifference,
    int valueDifference,
  ) {
    List<int> ans = new List.filled(2, -1);
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums.length; j++) {
        if (((i - j).abs() >= indexDifference) &&
            ((nums[i] - nums[j]).abs() >= valueDifference)) {
          ans[0] = i;
          ans[1] = j;
          break;
        }
      }
    }
    return ans;
  }
}
