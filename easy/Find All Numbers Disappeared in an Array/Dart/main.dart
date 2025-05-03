// Problem: Find All Numbers Disappeared in an Array
// Link to the problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
  List<int> findDisappearedNumbers(List<int> nums) {
    List<int> ans = new List.empty(growable: true);
    List<int> freq = new List.filled(nums.length, 0);
    for (var i = 0; i < nums.length; i++) {
      freq[nums[i] - 1]++;
    }
    for (var i = 0; i < freq.length; i++) {
      if (freq[i] == 0) {
        ans.add(i + 1);
      }
    }
    return ans;
  }
}
