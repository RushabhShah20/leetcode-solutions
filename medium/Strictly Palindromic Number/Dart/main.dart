// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
class Solution {
  int nInary(int n, int b) {
    int res = 0;
    int mul = 1;
    while (n > 0) {
      res = (n % b) * mul;
      n ~/= b;
      mul *= 10;
    }
    return res;
  }

  bool isPalindrome(int n) {
    int rev = 0;
    int org = n;
    while (n > 0) {
      rev = rev * 10 + n % 10;
      n ~/= 10;
    }
    return org == num;
  }

  bool isStrictlyPalindromic(int n) {
    bool ans = false;
    for (int i = 2; i <= n - 2; i++) {
      int num = nInary(n, i);
      if (isPalindrome(num)) {
        ans = true;
      } else {
        ans = false;
      }
    }
    return ans;
  }
}
