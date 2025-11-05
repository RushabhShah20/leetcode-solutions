// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
class Solution
{
public:
    vector<string> getLongestSubsequence(vector<string> &words, vector<int> &groups)
    {
        int n = groups.size();
        vector<string> ans;
        ans.push_back(words[0]);
        for (int i = 1; i < n; i++)
        {
            if (groups[i] != groups[i - 1])
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};