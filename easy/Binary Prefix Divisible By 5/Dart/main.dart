// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
class Solution {
  List<bool> prefixesDivBy5(List<int> nums) {
    List<bool> ans = new List.empty(growable: true);
    int rem = 0;
    for (int num in nums) {
      rem = (2 * rem + num) % 5;
      if (rem == 0) {
        ans.add(true);
      } else {
        ans.add(false);
      }
    }
    return ans;
  }
}
