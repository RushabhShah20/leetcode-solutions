// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
class Solution {
  int countSeniors(List<String> details) {
    int ans = 0;
    for (int i = 0; i < details.length; i++) {
      if (int.parse(details[i].substring(11, 13)) > 60) {
        ans++;
      }
    }
    return ans;
  }
}
