// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
class Solution {
  bool escapeGhosts(List<List<int>> ghosts, List<int> target) {
    int x = ((target[0]).abs()) + ((target[1]).abs());
    for (List<int> ghost in ghosts) {
      int y = ((ghost[0] - target[0]).abs()) + ((ghost[1] - target[1]).abs());
      if (y <= x) {
        return false;
      }
    }
    return true;
  }
}
