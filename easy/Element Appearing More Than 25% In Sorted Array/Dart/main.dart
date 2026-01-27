// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
class Solution {
  int findSpecialInteger(List<int> arr) {
    final int n = arr.length, m = n ~/ 4;
    for (int i = 0; i < n - m; i++) {
      if (arr[i] == arr[i + m]) {
        return arr[i];
      }
    }
    return -1;
  }
}
