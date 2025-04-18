// Problem: Score of a String
// Link to the problem: https://leetcode.com/problems/score-of-a-string/
public class Solution
{
    public int ScoreOfString(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.Length - 1; i++)
        {
            ans += Math.Abs(s[i] - s[i + 1]);
        }
        return ans;
    }
}