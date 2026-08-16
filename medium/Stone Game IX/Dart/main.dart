// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
class Solution {
  bool stoneGameIX(List<int> stones) {
    final int n = stones.length;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
      final int x = stones[i] % 3;
      if (x == 1) {
        b++;
      } else if (x == 2) {
        c++;
      } else {
        a++;
      }
    }
    final bool ans = a & 1 == 1 ? (b - c).abs() > 2 : b >= 1 && c >= 1;
    return ans;
  }
}
