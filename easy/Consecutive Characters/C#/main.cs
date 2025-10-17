// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
public class Solution
{
    public int MaxPower(string s)
    {
        int ans = 1, count = 1;
        for (int i = 0; i < s.Length - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
                ans = Math.Max(ans, count);
            }
            else
            {
                count = 1;
            }
        }
        return ans;
    }
}