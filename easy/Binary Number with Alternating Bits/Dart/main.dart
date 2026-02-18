// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution {
  List<int> toBinary(int n) {
    List<int> a = new List.empty(growable: true);
    while (n > 0) {
      a.add(n % 2);
      n ~/= 2;
    }
    List<int> b = a.reversed.toList();
    return b;
  }

  bool isAlternating(List<int> ans) {
    for (int i = 0; i < ans.length; i++) {
      if (i % 2 == 0) {
        if (ans[i] == 0) {
          return false;
        }
      } else {
        if (ans[i] == 1) {
          return false;
        }
      }
    }
    return true;
  }

  bool hasAlternatingBits(int n) {
    List<int> ans = toBinary(n);
    return isAlternating(ans);
  }
}
