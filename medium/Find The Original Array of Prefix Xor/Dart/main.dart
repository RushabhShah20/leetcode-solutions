// Problem: Find The Original Array of Prefix Xor
// Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
class Solution {
  List<int> findArray(List<int> pref) {
    List<int> ans = new List.filled(pref.length, 0);
    ans[0] = pref[0];
    for (int i = 1; i < pref.length; i++) {
      ans[i] = pref[i] ^ pref[i - 1];
    }
    return ans;
  }
}
