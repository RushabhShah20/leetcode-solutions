// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
class Solution {
  String winningPlayer(int x, int y) {
    int ans = min(x, y ~/ 4);
    return (ans % 2 == 0) ? ("Bob") : ("Alice");
  }
}
