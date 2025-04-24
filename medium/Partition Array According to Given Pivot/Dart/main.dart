// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution {
  List<int> pivotArray(List<int> nums, int pivot) {
    List<int> ans = [], less = [], equal = [], greater = [];
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] < pivot) {
        less.add(nums[i]);
      } else if (nums[i] > pivot) {
        greater.add(nums[i]);
      } else {
        equal.add(nums[i]);
      }
    }
    ans.addAll(less);
    ans.addAll(equal);
    ans.addAll(greater);
    return ans;
  }
}
