// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
public class Solution
{
    public bool JudgeCircle(string moves)
    {
        int y = 0;
        int x = 0;
        foreach (char move in moves)
        {
            if (move == 'U')
            {
                y++;
            }
            if (move == 'D')
            {
                y--;
            }
            if (move == 'R')
            {
                x++;
            }
            if (move == 'L')
            {
                x--;
            }
        }
        bool ans = (x == 0 && y == 0);
        return ans;
    }
}