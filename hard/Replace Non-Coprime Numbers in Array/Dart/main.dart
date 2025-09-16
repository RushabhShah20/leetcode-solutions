// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
class Solution {
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  List<int> replaceNonCoprimes(List<int> nums) {
    List<int> ans = new List.empty(growable: true);
    for (var num in nums) {
      ans.add(num);
      while (ans.length > 1) {
        int a = ans[ans.length - 1];
        int b = ans[ans.length - 2];
        int g = gcd(a, b);
        if (g > 1) {
          ans.removeLast();
          ans.removeLast();
          int lcm = (((a) * (b)) ~/ (g));
          ans.add(lcm);
        } else {
          break;
        }
      }
    }
    return ans;
  }
}
