// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
bool listEquals<T>(List<T> list1, List<T> list2) {
  if (list1.length != list2.length) return false;
  for (int i = 0; i < list1.length; i++) {
    if (list1[i] != list2[i]) return false;
  }
  return true;
}

class Solution {
  String oddString(List<String> words) {
    String ans = "";
    List<List<int>> diff = new List.generate(
      words.length,
      (i) => List.filled(words[0].length, 0),
    );
    for (int i = 0; i < words.length; i++) {
      for (int j = 0; j < words[i].length - 1; j++) {
        diff[i][j] = words[i].codeUnitAt(j + 1) - words[i].codeUnitAt(j);
      }
    }
    if (listEquals(diff[1], diff[2])) {
      if (!listEquals(diff[0], diff[1]) && !listEquals(diff[0], diff[2])) {
        return words[0];
      }
    }
    for (int i = 1; i < diff.length - 1; i++) {
      if (listEquals(diff[i - 1], diff[i + 1])) {
        if (!listEquals(diff[i], diff[i - 1]) &&
            !listEquals(diff[i], diff[i + 1])) {
          return words[i];
        }
      }
    }
    if (listEquals(diff[words.length - 3], diff[words.length - 2])) {
      if (!listEquals(diff[words.length - 1], diff[words.length - 2]) &&
          !listEquals(diff[words.length - 1], diff[words.length - 3])) {
        return words[words.length - 1];
      }
    }
    return ans;
  }
}
