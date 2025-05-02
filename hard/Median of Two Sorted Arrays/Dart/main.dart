// Problem: Median of Two Sorted Arrays
// Link to the problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
  double findMedianSortedArrays(List<int> nums1, List<int> nums2) {
    List<int> ans = List.empty(growable: true);
    ans.addAll(nums1);
    ans.addAll(nums2);
    ans.sort();
    return ans.length % 2 == 0
        ? ((ans[(ans.length ~/ 2) - 1] + ans[ans.length ~/ 2]) / 2).toDouble()
        : (ans[ans.length ~/ 2]).toDouble();
  }
}
