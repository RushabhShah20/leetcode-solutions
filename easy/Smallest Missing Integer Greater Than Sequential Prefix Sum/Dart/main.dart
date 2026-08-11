// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
class Solution {
  int missingInteger(List<int> nums) {
    final int n = nums.length;
    HashSet<int> s = new HashSet<int>();
    for (int i = 0; i < n; i++) {
      s.add(nums[i]);
    }
    int m = 1;
    for (int i = 1; i < n; i++) {
      if (nums[i] == nums[i - 1] + 1) {
        m++;
      } else {
        break;
      }
    }
    int ans = (nums[m - 1] + nums[0]) * m ~/ 2;
    while (s.contains(ans)) {
      ans++;
    }
    return ans;
  }
}
