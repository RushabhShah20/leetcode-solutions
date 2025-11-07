// Problem: Minimum Number of Pushes to Type Word I
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
public class Solution
{
    public int MinimumPushes(string word)
    {
        int ans = 0, n = word.Count();
        for (int i = 0; i < n; i++)
        {
            if (i < 8)
            {
                ans += 1;
            }
            else if (i >= 8 && i < 16)
            {
                ans += 2;
            }
            else if (i >= 16 && i < 24)
            {
                ans += 3;
            }
            else
            {
                ans += 4;
            }
        }
        return ans;
    }
}