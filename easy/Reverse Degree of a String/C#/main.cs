// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
public class Solution
{
    public int ReverseDegree(string s)
    {
        int n = s.Length;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (26 - (s[i] - 'a')) * (i + 1);
        }
        return ans;
    }
}