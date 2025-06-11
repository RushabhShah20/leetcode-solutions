// Problem: Check if a String Is an Acronym of Words
// Link to the problem: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
class Solution {
  bool isAcronym(List<String> words, String s) {
    String ans = "";
    for (int i = 0; i < words.length; i++) {
      ans = ans + (words[i][0]);
    }
    return ans == s;
  }
}
