// Problem: Vowels Game in a String
// Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
class Solution {
  bool doesAliceWin(String s) {
    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'a' ||
          s[i] == 'e' ||
          s[i] == 'i' ||
          s[i] == 'o' ||
          s[i] == 'u') {
        return true;
      }
    }
    return false;
  }
}
