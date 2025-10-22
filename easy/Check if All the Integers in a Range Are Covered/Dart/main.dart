// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
class Solution {
  bool isCovered(List<List<int>> ranges, int left, int right) {
    List<bool> covered = new List.filled(51, false);
    for (List<int> range in ranges) {
      for (int i = range[0]; i <= range[1]; i++) {
        covered[i] = true;
      }
    }
    for (int i = left; i <= right; i++) {
      if (covered[i] == false) {
        return false;
      }
    }
    return true;
  }
}
