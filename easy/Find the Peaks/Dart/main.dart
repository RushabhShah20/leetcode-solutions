// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
class Solution {
  List<int> findPeaks(List<int> mountain) {
    List<int> ans = new List.empty(growable: true);
    for (int i = 1; i < mountain.length - 1; i++) {
      if (mountain[i] > mountain[i + 1] && mountain[i] > mountain[i - 1]) {
        ans.add(i);
      }
    }
    return ans;
  }
}
