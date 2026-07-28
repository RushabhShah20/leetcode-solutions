// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
class Solution {
  String smallestPalindrome(String s) {
    final int n = s.length;
    List<String> ans = s.split('');
    List<int> a = List.filled(26, 0);
    for (int i = 0; i < n ~/ 2; i++) {
      a[ans[i].codeUnitAt(0) - 'a'.codeUnitAt(0)]++;
    }
    int l = 0, r = n - 1;
    for (int i = 0; i < 26; i++) {
      while (a[i] > 0) {
        final String c = String.fromCharCode('a'.codeUnitAt(0) + i);
        ans[l] = c;
        ans[r] = c;
        l++;
        r--;
        a[i]--;
      }
    }
    return ans.join('');
  }
}
