// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution {
  int dayOfTheYear(final String date, final List<int> a) {
    final int x = int.parse(date.substring(0, 2)),
        y = int.parse(date.substring(3, 5));
    final int ans = a[x - 1] + y;
    return ans;
  }

  int countDaysTogether(
    String arriveAlice,
    String leaveAlice,
    String arriveBob,
    String leaveBob,
  ) {
    final List<int> x = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    List<int> y = List<int>.filled(13, 0);
    for (int i = 1; i < 13; i++) {
      y[i] = y[i - 1] + x[i - 1];
    }
    final int a = dayOfTheYear(arriveAlice, y),
        b = dayOfTheYear(leaveAlice, y),
        c = dayOfTheYear(arriveBob, y),
        d = dayOfTheYear(leaveBob, y),
        e = min(b, d) - max(a, c);
    final int ans = max(0, e + 1);
    return ans;
  }
}
