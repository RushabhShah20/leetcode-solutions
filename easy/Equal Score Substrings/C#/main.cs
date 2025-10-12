// Problem: Equal Score Substrings
// Link to the problem: https://leetcode.com/problems/equal-score-substrings/
public class Solution
{
    public bool ScoreBalance(string s)
    {
        int[] prefix = new int[s.Length];
        prefix[0] = (s[0] - 'a') + 1;
        for (int i = 1; i < s.Length; i++)
        {
            prefix[i] = prefix[i - 1] + (s[i] - 'a' + 1);
        }
        int[] suffix = new int[s.Length];
        suffix[s.Length - 1] = (s[s.Length - 1] - 'a') + 1;
        for (int i = s.Length - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + (s[i] - 'a' + 1);
        }
        for (int i = 0; i < s.Length - 1; i++)
        {
            if (prefix[i] == suffix[i + 1])
            {
                return true;
            }
        }
        return false;
    }
}