// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
class Solution {
  bool kLengthApart(List<int> nums, int k) {
    List<int> pos = new List.empty(growable: true);
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 1) {
        pos.add(i);
      }
    }
    int minDiff = 1000000000;
    if (pos.length == 0) {
      return true;
    } else {
      for (int i = 1; i < pos.length; i++) {
        minDiff = min(minDiff, (pos[i] - pos[i - 1] - 1).abs());
      }
      if (minDiff < k) {
        return false;
      } else {
        return true;
      }
    }
  }
}
