// Problem: Maximum Score After Splitting a String
// Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
public class Solution
{
    public int MaxScore(string s)
    {
        int ans = 0;
        int[] pref = new int[s.Length];
        if (s[0] == '1')
        {
            pref[0] = 0;
        }
        else
        {
            pref[0] = 1;
        }
        for (int i = 1; i < s.Length; i++)
        {
            if (s[i] == '1')
            {
                pref[i] = pref[i - 1];
            }
            else
            {
                pref[i] = pref[i - 1] + 1;
            }
        }
        for (int i = 0; i < s.Length - 1; i++)
        {
            int score = (pref[i] + ((s.Length - i - 1) - (pref[s.Length - 1] - pref[i])));
            ans = Math.Max(ans, score);
        }
        return ans;
    }
}