# Problem: Find the Winning Player in Coin Game
# Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
class Solution:
    def winningPlayer(self, x: int, y: int) -> str:
        ans: int = min(x, y // 4)
        return ("Bob") if (ans % 2 == 0) else ("Alice")
