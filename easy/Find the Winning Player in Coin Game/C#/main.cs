// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
public class Solution
{
    public string WinningPlayer(int x, int y)
    {
        int ans = Math.Min(x, y / 4);
        return (ans % 2 == 0) ? ("Bob") : ("Alice");
    }
}