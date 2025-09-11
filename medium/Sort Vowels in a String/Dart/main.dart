// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
class Solution {
  String sortVowels(String s) {
    List<int> indices = new List.empty(growable: true);
    List<String> alphabets = new List.empty(growable: true);
    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'a' ||
          s[i] == 'e' ||
          s[i] == 'i' ||
          s[i] == 'o' ||
          s[i] == 'u' ||
          s[i] == 'A' ||
          s[i] == 'E' ||
          s[i] == 'I' ||
          s[i] == 'O' ||
          s[i] == 'U') {
        indices.add(i);
        alphabets.add(s[i]);
      }
    }
    alphabets.sort();
    List<String> t = s.split('');
    for (int i = 0; i < indices.length; i++) {
      t[indices[i]] = alphabets[i];
    }
    return t.join('');
  }
}
