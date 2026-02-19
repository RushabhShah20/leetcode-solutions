// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
public class Solution
{
    public int CountBinarySubstrings(string s)
    {
        int n = s.Length, ans = 0, prev = 0, curr = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                ans += Math.Min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else
            {
                curr++;
            }
        }
        ans += Math.Min(prev, curr);
        return ans;
    }
}