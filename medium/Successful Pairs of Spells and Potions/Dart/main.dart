// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
class Solution {
  List<int> successfulPairs(List<int> spells, List<int> potions, int success) {
    List<int> ans = new List.filled(spells.length, 0);
    potions.sort();
    for (int i = 0; i < spells.length; i++) {
      int x = -1;
      int l = 0, r = potions.length - 1;
      while (l < r) {
        int m = l + (r - l) ~/ 2;
        int y = (potions[m]) * (spells[i]);
        if (y < success) {
          l = m + 1;
        } else {
          r = m;
        }
      }
      if ((potions[l]) * (spells[i]) >= success) {
        x = l;
      }
      if (x != -1) {
        ans[i] += (potions.length - x);
      }
    }
    return ans;
  }
}
