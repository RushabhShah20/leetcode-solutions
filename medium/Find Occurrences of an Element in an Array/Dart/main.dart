// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
class Solution {
  List<int> occurrencesOfElement(List<int> nums, List<int> queries, int x) {
    List<int> ans = List.filled(queries.length, -1);
    List<int> freq = List.empty(growable: true);
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == x) {
        freq.add(i);
      }
    }
    for (int i = 0; i < ans.length; i++) {
      if (queries[i] <= freq.length) {
        ans[i] = freq[queries[i] - 1];
      }
    }
    return ans;
  }
}
