// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
class Solution {
  int maxFreqSum(String s) {
    Map<String, int> vowels = new Map<String, int>();
    Map<String, int> consonents = new Map<String, int>();
    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'a' ||
          s[i] == 'e' ||
          s[i] == 'i' ||
          s[i] == 'o' ||
          s[i] == 'u') {
        vowels[s[i]] = (vowels[s[i]] ?? 0) + 1;
      } else {
        consonents[s[i]] = (consonents[s[i]] ?? 0) + 1;
      }
    }
    int max_vowels = 0, max_consonents = 0;
    for (var i in vowels.entries) {
      if (i.value > max_vowels) {
        max_vowels = i.value;
      }
    }
    for (var i in consonents.entries) {
      if (i.value > max_consonents) {
        max_consonents = i.value;
      }
    }
    return max_vowels + max_consonents;
  }
}
