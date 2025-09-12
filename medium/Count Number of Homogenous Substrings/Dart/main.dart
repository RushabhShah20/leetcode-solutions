// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
class Solution {
  int countHomogenous(String s) {
    int mod = 1000000007;
    int count = 1;
    List<int> a = new List.empty(growable: true);
    for (int i = 1; i < s.length; i++) {
      if (s[i] == s[i - 1]) {
        count++;
      } else {
        a.add(count);
        count = 1;
      }
    }
    a.add(count);
    int ans = 0;
    for (int i = 0; i < a.length; i++) {
      ans += (((a[i]) * (a[i] + 1)) ~/ 2) % mod;
    }
    return ans;
  }
}
