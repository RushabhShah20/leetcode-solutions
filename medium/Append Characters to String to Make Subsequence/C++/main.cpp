// Problem: Append Characters to String to Make Subsequence
// Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int ans = 0, i = 0, j = 0, n = s.size(), m = t.size();
        while (i < n && j < m)
        {
            if (s[i] == t[j])
            {
                j++;
            }
            i++;
        }
        ans = m - j;
        return ans;
    }
};