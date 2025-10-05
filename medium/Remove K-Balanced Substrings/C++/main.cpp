// Problem: Remove K-Balanced Substrings
// Link to the problem: https://leetcode.com/problems/remove-k-balanced-substrings/
class Solution
{
public:
    string removeSubstring(string s, int k)
    {
        int n = s.length();
        vector<char> ans(n);
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            ans[idx++] = s[i];
            if (idx >= 2 * k)
            {
                bool z = true;
                int start = idx - 2 * k;
                for (int j = 0; j < k && z; j++)
                {
                    if (ans[start + j] != '(')
                    {
                        z = false;
                    }
                }
                for (int j = k; j < 2 * k && z; j++)
                {
                    if (ans[start + j] != ')')
                    {
                        z = false;
                    }
                }
                if (z)
                {
                    idx -= 2 * k;
                }
            }
        }
        return string(ans.begin(), ans.begin() + idx);
    }
};