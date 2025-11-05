// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
public class Solution
{
    public IList<string> GetLongestSubsequence(string[] words, int[] groups)
    {
        int n = groups.Length;
        IList<string> ans = new List<string>();
        ans.Add(words[0]);
        for (int i = 1; i < n; i++)
        {
            if (groups[i] != groups[i - 1])
            {
                ans.Add(words[i]);
            }
        }
        return ans;
    }
}