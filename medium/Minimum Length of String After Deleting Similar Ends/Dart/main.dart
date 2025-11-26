// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
class Solution {
  int minimumLength(String s) {
    int n = s.length, i = 0, j = n - 1;
    while (i < j && s[i] == s[j]) {
      String c = s[i];
      while (i <= j && s[i] == c) {
        i++;
      }
      while (i <= j && s[j] == c) {
        j--;
      }
    }
    int ans = j - i + 1;
    return ans;
  }
}
