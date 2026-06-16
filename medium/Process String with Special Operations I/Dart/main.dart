// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
class Solution {
  String processStr(String s) {
    List<String> ans = [];
    for (int i = 0; i < s.length; i++) {
      String c = s[i];
      if (c == '*') {
        if (ans.isNotEmpty) {
          ans.removeLast();
        }
      } else if (c == '#') {
        ans.addAll(List.from(ans));
      } else if (c == '%') {
        ans = ans.reversed.toList();
      } else {
        ans.add(c);
      }
    }
    return ans.join();
  }
}
