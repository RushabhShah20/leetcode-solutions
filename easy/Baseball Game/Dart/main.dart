// Problem: Baseball Game
// Link to the problem: https://leetcode.com/problems/baseball-game/
class Solution {
  int calPoints(List<String> operations) {
    int ans = 0;
    List<int> a = new List.empty(growable: true);
    for (int i = 0; i < operations.length; i++) {
      if (operations[i] == "+") {
        a.add(a[a.length - 1] + a[a.length - 2]);
      } else if (operations[i] == "D") {
        a.add(2 * a[a.length - 1]);
      } else if (operations[i] == "C") {
        a.removeLast();
      } else {
        a.add(int.parse(operations[i]));
      }
    }
    for (int i = 0; i < a.length; i++) {
      ans += a[i];
    }
    return ans;
  }
}
