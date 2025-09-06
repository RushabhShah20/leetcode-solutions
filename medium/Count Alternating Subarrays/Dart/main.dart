// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
class Solution {
  int countAlternatingSubarrays(List<int> nums) {
    int ans = 0, count = 1;
    List<int> a = new List.empty(growable: true);
    for (int i = 1; i < nums.length; i++) {
      if (nums[i] != nums[i - 1]) {
        count++;
      } else {
        a.add(count);
        count = 1;
      }
    }
    a.add(count);
    for (int i = 0; i < a.length; i++) {
      ans += (((a[i]) * (a[i] + 1)) ~/ 2);
    }
    return ans;
  }
}
