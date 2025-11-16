// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
public class Solution
{
    public int MinLengthAfterRemovals(string s)
    {
        int ans = 0;
        foreach (char c in s)
        {
            ans += c == 'a' ? 1 : -1;
        }
        return Math.Abs(ans);
    }
}