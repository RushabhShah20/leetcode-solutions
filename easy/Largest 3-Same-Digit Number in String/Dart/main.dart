// Problem: Largest 3-Same-Digit Number in String
// Link to the problem: https://leetcode.com/problems/largest-3-same-digit-number-in-string/
class Solution {
  String largestGoodInteger(String num) {
    String ans = "";
    int count = 1;
    for (int i = 1; i < num.length; i++) {
      if (num[i] == num[i - 1]) {
        count++;
      } else {
        count = 1;
      }
      if (count == 3) {
        String x = num.substring(i - 2, i + 1);
        if (ans == "") {
          ans = x;
        } else {
          if (int.parse(x) > int.parse(ans)) {
            ans = x;
          }
        }
      }
    }
    return ans;
  }
}
