// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
class Solution {
  int numberOfEmployeesWhoMetTarget(List<int> hours, int target) {
    int ans = 0;
    for (final int hour in hours) {
      if (hour >= target) {
        ans++;
      }
    }
    return ans;
  }
}
