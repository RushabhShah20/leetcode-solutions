// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
class Solution {
  int minimumEffort(List<List<int>> tasks) {
    tasks.sort((a, b) => (a[1] - a[0]) - (b[1] - b[0]));
    int ans = 0;
    for (final List<int> task in tasks) {
      ans = max(ans + task[0], task[1]);
    }
    return ans;
  }
}
