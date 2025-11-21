// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
public class Solution
{
    public int FindLUSlength(string a, string b)
    {
        if (a == b)
        {
            return -1;
        }
        else
        {
            return Math.Max(a.Length, b.Length);
        }
    }
}