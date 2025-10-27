// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
public class Solution
{
    public bool IsSubsequence(string s, string t)
    {
        int n = t.Length, m = s.Length, i, j;
        for (i = 0, j = 0; i < n && j < m; i++)
        {
            if (t[i] == s[j])
            {
                j++;
            }
        }
        if (j < m)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}