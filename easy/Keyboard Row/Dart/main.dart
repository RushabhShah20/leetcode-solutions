// Problem: Keyboard Row
// Link to the problem: https://leetcode.com/problems/keyboard-row/
class Solution {
  List<String> findWords(List<String> words) {
    List<String> ans = new List.empty(growable: true);
    String first_row = "qwertyuiop";
    String second_row = "asdfghjkl";
    String thrid_row = "zxcvbnm";
    for (int i = 0; i < words.length; i++) {
      if (first_row.indexOf(words[i][0].toLowerCase()) != -1) {
        bool x = true;
        for (int j = 0; j < words[i].length; j++) {
          if (first_row.indexOf(words[i][j].toLowerCase()) == -1) {
            x = false;
            break;
          }
        }
        if (x == true) {
          ans.add(words[i]);
        }
      } else if (second_row.indexOf(words[i][0].toLowerCase()) != -1) {
        bool x = true;
        for (int j = 0; j < words[i].length; j++) {
          if (second_row.indexOf(words[i][j].toLowerCase()) == -1) {
            x = false;
            break;
          }
        }
        if (x == true) {
          ans.add(words[i]);
        }
      } else if (thrid_row.indexOf(words[i][0].toLowerCase()) != -1) {
        bool x = true;
        for (int j = 0; j < words[i].length; j++) {
          if (thrid_row.indexOf(words[i][j].toLowerCase()) == -1) {
            x = false;
            break;
          }
        }
        if (x == true) {
          ans.add(words[i]);
        }
      }
    }
    return ans;
  }
}
