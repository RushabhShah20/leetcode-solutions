// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
class Solution {
  String mapWordWeights(List<String> words, List<int> weights) {
    StringBuffer ans = StringBuffer();
    for (final String word in words) {
      int sum = 0;
      for (int j = 0; j < word.length; j++) {
        sum += weights[word.codeUnitAt(j) - 'a'.codeUnitAt(0)];
      }
      ans.writeCharCode('z'.codeUnitAt(0) - (sum % 26));
    }
    return ans.toString();
  }
}
