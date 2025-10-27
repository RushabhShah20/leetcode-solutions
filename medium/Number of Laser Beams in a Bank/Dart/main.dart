// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
class Solution {
  int numberOfBeams(List<String> bank) {
    int ans = 0, prev = 0;
    for (String s in bank) {
      int count = 0;
      for (int i = 0; i < s.length; i++) {
        if (s[i] == '1') {
          count++;
        }
      }
      ans += (count * prev);
      if (count > 0) {
        prev = count;
      }
    }
    return ans;
  }
}
