// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
public class Solution
{
    public int FurthestDistanceFromOrigin(string moves)
    {
        int n = moves.Length, left = 0, right = 0, spaces = 0;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == 'L')
            {
                left++;
            }
            else if (moves[i] == 'R')
            {
                right++;
            }
            else
            {
                spaces++;
            }
        }
        int ans = spaces + Math.Abs(left - right);
        return ans;
    }
}