// Problem: Rectangle Overlap
// Link to the problem: https://leetcode.com/problems/rectangle-overlap/
class Solution {
  bool isRectangleOverlap(List<int> rec1, List<int> rec2) {
    final bool ans =
        (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) &&
        (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
    return ans;
  }
}
