// Problem: Smallest Subsequence of Distinct Characters
// Link to the problem: https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/
class Solution
{
public:
    string smallestSubsequence(string s)
    {
        const int n = s.size();
        vector<int> a(26, 0);
        vector<bool> b(26, false);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            const char c = s[i];
            if (!b[c - 'a'])
            {
                while (!ans.empty() && ans.back() > c)
                {
                    if (a[ans.back() - 'a'] > 0)
                    {
                        b[ans.back() - 'a'] = false;
                        ans.pop_back();
                    }
                    else
                    {
                        break;
                    }
                }
                b[c - 'a'] = true;
                ans.push_back(c);
            }
            a[c - 'a']--;
        }
        return ans;
    }
};