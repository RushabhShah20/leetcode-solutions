// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
class Solution {
  List<int> sortArrayByParity(List<int> nums) {
    List<int> ans = new List.empty(growable: true),
        even = new List.empty(growable: true),
        odd = new List.empty(growable: true);
    for (int num in nums) {
      if (num % 2 == 0) {
        even.add(num);
      } else {
        odd.add(num);
      }
    }
    for (int num in even) {
      ans.add(num);
    }
    for (int num in odd) {
      ans.add(num);
    }
    return ans;
  }
}
