// Problem: Max Chunks To Make Sorted
// Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
class Solution {
  int maxChunksToSorted(List<int> arr) {
    int ans = 0, n = arr.length, max = 0;
    for (int i = 0; i < n; i++) {
      if (max < arr[i]) {
        max = arr[i];
      }
      if (max == i) {
        ans++;
      }
    }
    return ans;
  }
}
