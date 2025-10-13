// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
class Solution {
  bool compare(String str1, String str2) {
    List<String> charArray1 = str1.split('');
    charArray1.sort();
    String char1 = charArray1.join('');
    List<String> charArray2 = str2.split('');
    charArray2.sort();
    String char2 = charArray2.join('');
    return char1 == char2;
  }

  List<String> removeAnagrams(List<String> words) {
    int a = 0;
    List<String> v = new List.empty(growable: true);
    for (int i = 1; i < words.length; i++) {
      if (compare(words[a], words[i])) {
        words[i] = "1";
      } else {
        a = i;
      }
    }
    for (int i = 0; i < words.length; i++) {
      if (words[i] != "1") {
        v.add(words[i]);
      }
    }
    return v;
  }
}
