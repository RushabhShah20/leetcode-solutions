// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
class Solution {
  bool uniformArray(List<int> nums1) {
    final int n = nums1.length;
    bool x = true;
    int mn = 1000000001;
    for (int i = 0; i < n; i++) {
      final int num = nums1[i];
      if (num & 1 == 1) {
        x = false;
      }
      mn = min(mn, num);
    }
    final bool ans = (mn & 1) == 1 || x ? true : false;
    return ans;
  }
}
