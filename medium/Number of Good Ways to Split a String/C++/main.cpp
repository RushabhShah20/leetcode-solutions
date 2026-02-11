// Problem: Number of Good Ways to Split a String
// Link to the problem: https://leetcode.com/problems/number-of-good-ways-to-split-a-string/
class Solution
{
public:
    int numSplits(string s)
    {
        const int n = s.size();
        set<char> c;
        vector<int> prefix(n, 1), suffix(n, 1);
        c.insert(s[0]);
        for (int i = 1; i < n; i++)
        {
            c.insert(s[i]);
            prefix[i] = c.size();
        }
        c.clear();
        c.insert(s[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            c.insert(s[i]);
            suffix[i] = c.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (prefix[i] == suffix[i + 1])
            {
                ans++;
            }
        }
        return ans;
    }
};