// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
public class Solution
{
    public int MinChanges(string s)
    {
        int n = s.Length;
        int ans = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }
        return ans;
    }
}