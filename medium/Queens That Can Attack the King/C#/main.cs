// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
public class Solution
{
    public IList<IList<int>> QueensAttacktheKing(int[][] queens, int[] king)
    {
        int[,] board = new int[8, 8];
        board[king[0], king[1]] = 2;
        foreach (int[] queen in queens)
        {
            board[queen[0], queen[1]] = 1;
        }
        IList<IList<int>> ans = new List<IList<int>>();
        for (int i = king[0]; i < 8; i++)
        {
            if (board[i, king[1]] == 1)
            {
                ans.Add([i, king[1]]);
                break;
            }
        }
        for (int i = king[0]; i >= 0; i--)
        {
            if (board[i, king[1]] == 1)
            {
                ans.Add([i, king[1]]);
                break;
            }
        }
        for (int j = king[1]; j < 8; j++)
        {
            if (board[king[0], j] == 1)
            {
                ans.Add([king[0], j]);
                break;
            }
        }
        for (int j = king[1]; j >= 0; j--)
        {
            if (board[king[0], j] == 1)
            {
                ans.Add([king[0], j]);
                break;
            }
        }
        int x = king[0], y = king[1];
        while (x >= 0 && y >= 0)
        {
            if (board[x, y] == 1)
            {
                ans.Add([x, y]);
                break;
            }
            x--;
            y--;
        }
        x = king[0];
        y = king[1];
        while (x >= 0 && y < 8)
        {
            if (board[x, y] == 1)
            {
                ans.Add([x, y]);
                break;
            }
            x--;
            y++;
        }
        x = king[0];
        y = king[1];
        while (x < 8 && y >= 0)
        {
            if (board[x, y] == 1)
            {
                ans.Add([x, y]);
                break;
            }
            x++;
            y--;
        }
        x = king[0];
        y = king[1];
        while (x < 8 && y < 8)
        {
            if (board[x, y] == 1)
            {
                ans.Add([x, y]);
                break;
            }
            x++;
            y++;
        }
        return ans;
    }
}