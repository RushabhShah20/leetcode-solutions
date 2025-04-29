// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
class Solution {
  int findClosest(int x, int y, int z) {
    if ((x - z).abs() < (y - z).abs()) {
      return 1;
    } else if ((x - z).abs() > (y - z).abs()) {
      return 2;
    } else {
      return 0;
    }
  }
}
