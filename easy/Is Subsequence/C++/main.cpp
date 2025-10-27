// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = t.size(), m = s.size(), i, j;
        for (i = 0, j = 0; i < n && j < m; i++)
        {
            if (t[i] == s[j])
            {
                j++;
            }
        }
        if (j < m)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};