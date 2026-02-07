// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
public class Solution
{
    public int MinimumDeletions(string s)
    {
        int ans = 0, count = 0;
        foreach (char c in s)
        {
            if (c == 'b')
            {
                count++;
            }
            else
            {
                ans = Math.Min(ans + 1, count);
            }
        }
        return ans;
    }
}