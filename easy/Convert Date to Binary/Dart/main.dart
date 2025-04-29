// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
class Solution {
  int toBinary(int n) {
    int ans = 0, i = 1;
    while (n > 0) {
      int rem = n % 2;
      ans += rem * i;
      n ~/= 2;
      i *= 10;
    }
    return ans;
  }

  String convertDateToBinary(String date) {
    String yyyy = date.substring(0, 4);
    String mm = date.substring(5, 7);
    String dd = date.substring(8, 10);
    int y = toBinary(int.parse(yyyy));
    int m = toBinary(int.parse(mm));
    int d = toBinary(int.parse(dd));
    String ans = y.toString() + "-" + m.toString() + "-" + d.toString();
    return ans;
  }
}
