// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
public class Solution
{
    public bool EscapeGhosts(int[][] ghosts, int[] target)
    {
        int x = (Math.Abs(target[0])) + (Math.Abs(target[1]));
        foreach (int[] ghost in ghosts)
        {
            int y = (Math.Abs(ghost[0] - target[0])) + (Math.Abs(ghost[1] - target[1]));
            if (y <= x)
            {
                return false;
            }
        }
        return true;
    }
}