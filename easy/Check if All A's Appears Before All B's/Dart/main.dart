// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
class Solution {
  bool checkString(String s) {
    bool x = true;
    int count = 0;
    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'b') {
        x = true;
        count = 1;
      }
      if (s[i] == 'a' && count == 1) {
        x = false;
        break;
      }
    }
    return x;
  }
}
