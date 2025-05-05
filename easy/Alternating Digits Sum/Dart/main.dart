// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
class Solution {
  List<int> split(int n) {
    List<int> res = new List.empty(growable: true);
    while (n > 0) {
      res.add(n % 10);
      n ~/= 10;
    }
    return res;
  }

  int alternateDigitSum(int n) {
    int ans = 0;
    List<int> digits = split(n);
    for (int i = digits.length - 1; i >= 0; i--) {
      if (digits.length % 2 == 0) {
        if (i % 2 != 0) {
          ans += digits[i];
        } else {
          ans -= digits[i];
        }
      } else {
        if (i % 2 == 0) {
          ans += digits[i];
        } else {
          ans -= digits[i];
        }
      }
    }
    return ans;
  }
}
